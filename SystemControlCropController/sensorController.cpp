#include "sensorController.h"

using namespace System::IO;
using namespace SystemControlCropController;
using namespace SystemControlCropModel;

SensorController::SensorController() {
    this->objConexion = gcnew SqlConnection();

}
void SensorController::abrirConexion() {
    /*Vamos a definir la cadena de conexion para nuestra base de datos*/
    this->objConexion->ConnectionString = "Server = idb1inf53.cw2hscntsr5w.us-east-1.rds.amazonaws.com; DataBase = SistemaControlInvernadero; User id = admin; Password = PUCP2005";  //colocar server
    /*Abrimos la conexion*/
    this->objConexion->Open();
}

void SensorController::cerrarConexion() {
    this->objConexion->Close();
}


List<Sensor^>^ SensorController::buscarAll() {
    List<Sensor^>^ listaSensores = gcnew List<Sensor^>();
    abrirConexion();
    /*SqlCommand nos permite crear un objeto a trav�s del cual voy a definir una sentencia SQL*/
    SqlCommand^ objSentencia = gcnew SqlCommand();
    /*Aqui estoy indicando que mi sentencia se va a ejecutar en esa conexion de base de datos*/
    objSentencia->Connection = this->objConexion;
    /*Aqui voy a definir la sentencia SQL que voy a ejecutar*/
    objSentencia->CommandText = "SELECT * FROM Sensores";
    /*Ahora para ejecutar voy a utilizar ExecuteReader cuando la sentencia es SELECT*/
    /*Para recuperar la informacion que me devuelve un select, utilizo SqlDataReader*/
    SqlDataReader^ objData = objSentencia->ExecuteReader();
    while (objData->Read()) {
        int id = safe_cast<int>(objData[0]);
        String^ modelo = safe_cast<String^>(objData[1]);
        String^ nombre = safe_cast<String^>(objData[2]);
        String^ categoria = safe_cast<String^>(objData[3]);
        String^ estado = safe_cast<String^>(objData[4]);
        Sensor^ objSensor = gcnew Sensor(categoria, modelo, estado,nombre, id);
        listaSensores->Add(objSensor);
    }
    objData->Close();
    cerrarConexion();
    return listaSensores;
}

List<Sensor^>^ SensorController::buscarSensoresxCategoriaxEstado(String^ categoria, String^ estado) {
    List<Sensor^>^ listaSensores = gcnew List<Sensor^>();
    abrirConexion();
    /*SqlCommand nos permite crear un objeto a trav�s del cual voy a definir una sentencia SQL*/
    SqlCommand^ objSentencia = gcnew SqlCommand();
    /*Aqui estoy indicando que mi sentencia se va a ejecutar en esa conexion de base de datos*/
    objSentencia->Connection = this->objConexion;
    //proceso logico para buscar
    if (categoria->CompareTo("") != 0 && estado->CompareTo("") != 0)
    {
        objSentencia->Parameters->Clear();
        objSentencia->CommandText = "SELECT * FROM Sensores where Nombre =  @Nombre  and EtapaMadurez = @Madurez";
        objSentencia->Parameters->AddWithValue("@Categoria", categoria);
        objSentencia->Parameters->AddWithValue("@Estado", estado);

    }
    if (categoria->CompareTo("") != 0 && estado->CompareTo("") == 0)
    {
        objSentencia->Parameters->Clear();
        objSentencia->CommandText = "SELECT * FROM Sensores where Categoria =  @Categoria";
        objSentencia->Parameters->AddWithValue("@Categoria", categoria);
    }
    if (categoria->CompareTo("") == 0 && estado->CompareTo("") != 0)
    {
        objSentencia->Parameters->Clear();
        objSentencia->CommandText = "SELECT * FROM Sensores where Estado = @Estado";
        objSentencia->Parameters->AddWithValue("@Estado", estado);
    }
    /*Ahora para ejecutar voy a utilizar ExecuteReader cuando la sentencia es SELECT*/
    /*Para recuperar la informacion que me devuelve un select, utilizo SqlDataReader*/
    SqlDataReader^ objData = objSentencia->ExecuteReader();
    bool estadobol = objData->HasRows;
    if (estado)
    {
        while (objData->Read()) {
            int id = safe_cast<int>(objData[0]);
            String^ modelo = safe_cast<String^>(objData[1]);
            String^ nombre = safe_cast<String^>(objData[2]);
            String^ categoria = safe_cast<String^>(objData[3]);
            String^ estado = safe_cast<String^>(objData[4]);
            Sensor^ objSensor = gcnew Sensor(categoria, modelo, estado, nombre, id);
            listaSensores->Add(objSensor);

        }
    }
    objData->Close();
    cerrarConexion();


    return listaSensores;
}

List<Sensor^>^ SensorController::buscarId(int id) {
     List<Sensor^>^ listaSensores = gcnew List<Sensor^>();
    abrirConexion();
    /*SqlCommand nos permite crear un objeto a trav�s del cual voy a definir una sentencia SQL*/
    SqlCommand^ objSentencia = gcnew SqlCommand();
    /*Aqui estoy indicando que mi sentencia se va a ejecutar en esa conexion de base de datos*/
    objSentencia->Connection = this->objConexion;
    /*Aqui voy a definir la sentencia SQL que voy a ejecutar*/
    objSentencia->Parameters->Clear();
    objSentencia->CommandText = "SELECT * FROM Sensores where IdSensor =  @Id";
    objSentencia->Parameters->AddWithValue("@Id", id);
    /*Ahora para ejecutar voy a utilizar ExecuteReader cuando la sentencia es SELECT*/
    /*Para recuperar la informacion que me devuelve un select, utilizo SqlDataReader*/
    SqlDataReader^ objData = objSentencia->ExecuteReader();


    bool estado = objData->HasRows;
    if (estado)
    {
        while (objData->Read()) {
            int id = safe_cast<int>(objData[0]);
            String^ modelo = safe_cast<String^>(objData[1]);
            String^ nombre = safe_cast<String^>(objData[2]);
            String^ categoria = safe_cast<String^>(objData[3]);
            String^ estado = safe_cast<String^>(objData[4]);
            Sensor^ objSensor = gcnew Sensor(categoria, modelo, estado, nombre, id);
            listaSensores->Add(objSensor);

        }
    }
    objData->Close();
    cerrarConexion();


    return listaSensores;
}


void SensorController::eliminarSensor(int id) { //no estamos elimindoe el objeto sino desactivandolo
    abrirConexion();
    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->Connection = this->objConexion;
    objSentencia->CommandText = "UPDATE Sensores SET Estado = @Estado WHERE Idsensor = @IdBuscar";
    objSentencia->Parameters->AddWithValue("@Estado", "Desactivado");
    objSentencia->Parameters->AddWithValue("@IdBuscar", id);
    objSentencia->ExecuteNonQuery();
    cerrarConexion();
}
void SensorController::agregarSensor( String^ modelo, String^ categoria, String^ nombre, String^ Estado) {

    abrirConexion();
    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->Connection = this->objConexion;
    // Define la sentencia SQL de INSERT con un par�metro
    objSentencia->CommandText = "INSERT INTO Sensores(Modelo,Nombre,Categoria,Estado) VALUES (@Modelo, @Nombre,@Categoria,@Estado)";

    // Agrega el valor del par�metro
    objSentencia->Parameters->AddWithValue("@Modelo", modelo);
    objSentencia->Parameters->AddWithValue("@Categoria", categoria);
    objSentencia->Parameters->AddWithValue("@Estado", Estado);
    objSentencia->Parameters->AddWithValue("@Nombre", nombre);


    // Ejecuta el comando
    objSentencia->ExecuteNonQuery();
    cerrarConexion();
}
void SensorController::editarSensor(int id,String^ modelo, String^ categoria, String^ nombre, String^ estado) {
    abrirConexion();
    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->Connection = this->objConexion;
    // Define la sentencia SQL de INSERT con un par�metro
    objSentencia->CommandText = "UPDATE Sensores SET Modelo = @Modelo, Categoria = @Categoria, Nombre = @Nombre,Estado = @Estado  WHERE Idsensor = @Id";
    // Agrega el valor del par�metro
    objSentencia->Parameters->AddWithValue("@Modelo", modelo);
    objSentencia->Parameters->AddWithValue("@Categoria", categoria);
    objSentencia->Parameters->AddWithValue("@Estado", estado);
    objSentencia->Parameters->AddWithValue("@Nombre", nombre);
    objSentencia->Parameters->AddWithValue("@Id", id);


    // Ejecuta el comando
    objSentencia->ExecuteNonQuery();
    cerrarConexion();
}
Sensor^ SensorController::buscarIdEditar(int id) {
    abrirConexion();
    Sensor^ objSensor = nullptr;
    /*SqlCommand nos permite crear un objeto a trav�s del cual voy a definir una sentencia SQL*/
    SqlCommand^ objSentencia = gcnew SqlCommand();
    /*Aqui estoy indicando que mi sentencia se va a ejecutar en esa conexion de base de datos*/
    objSentencia->Connection = this->objConexion;
    /*Aqui voy a definir la sentencia SQL que voy a ejecutar*/
    objSentencia->CommandText = "SELECT * FROM Sensores where Idsensor = @Id";
    objSentencia->Parameters->AddWithValue("@Id", id);
    /*Ahora para ejecutar voy a utilizar ExecuteReader cuando la sentencia es SELECT*/
    /*Para recuperar la informacion que me devuelve un select, utilizo SqlDataReader*/
    SqlDataReader^ objData = objSentencia->ExecuteReader();

    if (objData->Read())
    {
        int idSensor = safe_cast<int>(objData[0]);
        String^ modelo = safe_cast<String^>(objData[1]);
        String^ nombre = safe_cast<String^>(objData[2]);
        String^ categoria = safe_cast<String^>(objData[3]);
        String^ estado = safe_cast<String^>(objData[4]);
        objSensor = gcnew Sensor(categoria, modelo, estado, nombre, idSensor);

    }

    objData->Close();
    cerrarConexion();
    return objSensor;
}


    




