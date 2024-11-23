#include "plantaController.h"

using namespace System::IO;
using namespace SystemControlCropController;
using namespace SystemControlCropModel;

plantaController::plantaController() {
    this->objConexion = gcnew SqlConnection();

}
void plantaController::abrirConexion() {
    /*Vamos a definir la cadena de conexion para nuestra base de datos*/
    this->objConexion->ConnectionString = "Server = idb1inf53.cw2hscntsr5w.us-east-1.rds.amazonaws.com; DataBase = SistemaControlInvernadero; User id = admin; Password = PUCP2005";  //colocar server
    /*Abrimos la conexion*/
    this->objConexion->Open();
}

void plantaController::cerrarConexion() {
    this->objConexion->Close();
}


List<planta^>^ plantaController::buscarAll() {
    List<planta^>^ listaPlantas = gcnew List<planta^>();
    abrirConexion();
    /*SqlCommand nos permite crear un objeto a través del cual voy a definir una sentencia SQL*/
    SqlCommand^ objSentencia = gcnew SqlCommand();
    /*Aqui estoy indicando que mi sentencia se va a ejecutar en esa conexion de base de datos*/
    objSentencia->Connection = this->objConexion;
    /*Aqui voy a definir la sentencia SQL que voy a ejecutar*/
    objSentencia->CommandText = "SELECT * FROM planta";
    /*Ahora para ejecutar voy a utilizar ExecuteReader cuando la sentencia es SELECT*/
    /*Para recuperar la informacion que me devuelve un select, utilizo SqlDataReader*/
    SqlDataReader^ objData = objSentencia->ExecuteReader();
    while (objData->Read()) {
        int id = safe_cast<int>(objData[0]);
        String^ nombre = safe_cast<String^>(objData[4]);
        String^ tipoPlanta = safe_cast<String^>(objData[3]);
        String^ maduracion = safe_cast<String^>(objData[1]);
        String^ estado = safe_cast<String^>(objData[2]);
        //int codReq = safe_cast<int>(objData[5]);

        planta^ objPlanta = gcnew planta(id, maduracion, tipoPlanta, nombre, estado);
        // objrequer controller
        //llamar devolver requerimeinto
        listaPlantas->Add(objPlanta);
    }
    objData->Close();
    cerrarConexion();
    return listaPlantas;
}

List<planta^>^ plantaController::buscarPlantaxNombrexMadurez(String^ nombre, String^ madurez) {
    List<planta^>^ listaPlantas = gcnew List<planta^>();
    abrirConexion();
    /*SqlCommand nos permite crear un objeto a través del cual voy a definir una sentencia SQL*/
    SqlCommand^ objSentencia = gcnew SqlCommand();
    /*Aqui estoy indicando que mi sentencia se va a ejecutar en esa conexion de base de datos*/
    objSentencia->Connection = this->objConexion;
    /*Aqui voy a definir la sentencia SQL que voy a ejecutar*/
    if (nombre->CompareTo("") != 0 && madurez->CompareTo("") != 0)

    {
        objSentencia->Parameters->Clear();
        objSentencia->CommandText = "SELECT * FROM planta where Nombre =  @Nombre  and EtapaMadurez = @Madurez";
        objSentencia->Parameters->AddWithValue("@Nombre", nombre);
        objSentencia->Parameters->AddWithValue("@Madurez", madurez);

    }
    if (nombre->CompareTo("") != 0 && madurez->CompareTo("") == 0)
    {   
        objSentencia->Parameters->Clear();
        objSentencia->CommandText = "SELECT * FROM planta where Nombre =  @Nombre";
        objSentencia->Parameters->AddWithValue("@Nombre", nombre);
    }
    if (nombre->CompareTo("") == 0 && madurez->CompareTo("") != 0)
    {
        objSentencia->Parameters->Clear();
        objSentencia->CommandText = "SELECT * FROM planta where EtapaMadurez = @Madurez";
        objSentencia->Parameters->AddWithValue("@Madurez", madurez);
    }
    /*Ahora para ejecutar voy a utilizar ExecuteReader cuando la sentencia es SELECT*/
    /*Para recuperar la informacion que me devuelve un select, utilizo SqlDataReader*/
    SqlDataReader^ objData = objSentencia->ExecuteReader();

    bool estado = objData->HasRows;
    if (estado)
    {
        while (objData->Read()) {
            int id = safe_cast<int>(objData[0]);
            String^ nombre = safe_cast<String^>(objData[4]);
            String^ tipoPlanta = safe_cast<String^>(objData[3]);
            String^ maduracion = safe_cast<String^>(objData[1]);
            String^ estado = safe_cast<String^>(objData[2]);
            planta^ objPlanta = gcnew planta(id, maduracion, tipoPlanta, nombre, estado);
            listaPlantas->Add(objPlanta);
            
        }
    }
    objData->Close();
    cerrarConexion();
    
    
    return listaPlantas;
}

List<planta^>^ plantaController::buscarId(int id) {
    List<planta^>^ listaPlantas = gcnew List<planta^>();
    abrirConexion();
    /*SqlCommand nos permite crear un objeto a través del cual voy a definir una sentencia SQL*/
    SqlCommand^ objSentencia = gcnew SqlCommand();
    /*Aqui estoy indicando que mi sentencia se va a ejecutar en esa conexion de base de datos*/
    objSentencia->Connection = this->objConexion;
    /*Aqui voy a definir la sentencia SQL que voy a ejecutar*/
    objSentencia->Parameters->Clear();
    objSentencia->CommandText = "SELECT * FROM planta where IdPlanta =  @Id";
    objSentencia->Parameters->AddWithValue("@Id", id);
    /*Ahora para ejecutar voy a utilizar ExecuteReader cuando la sentencia es SELECT*/
    /*Para recuperar la informacion que me devuelve un select, utilizo SqlDataReader*/
    SqlDataReader^ objData = objSentencia->ExecuteReader();
    bool estado = objData->HasRows;
    if (estado)
    {
        while (objData->Read()) {
            int id = safe_cast<int>(objData[0]);
            String^ nombre = safe_cast<String^>(objData[4]);
            String^ tipoPlanta = safe_cast<String^>(objData[3]);
            String^ maduracion = safe_cast<String^>(objData[1]);
            String^ estado = safe_cast<String^>(objData[2]);
            planta^ objPlanta = gcnew planta(id, maduracion, tipoPlanta, nombre, estado);
            listaPlantas->Add(objPlanta);

        }
    }
    objData->Close();
    cerrarConexion();


    return listaPlantas;
}


void plantaController::eliminarPlanta(int id) {
    abrirConexion();
    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->Connection = this->objConexion;
    objSentencia->CommandText = "UPDATE planta SET Estado = @Estado WHERE IdPlanta = @IdBuscar";
    objSentencia->Parameters->AddWithValue("@Estado", "muerta");
    objSentencia->Parameters->AddWithValue("@IdBuscar", id);
    objSentencia->ExecuteNonQuery();
    cerrarConexion();

}

void plantaController::agregarPlanta(String^ etapaMadurez, String^ estado, String^ tipoPlanta, String^ nombre) {
    abrirConexion();
    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->Connection = this->objConexion;
    // Define la sentencia SQL de INSERT con un parámetro
    objSentencia->CommandText = "INSERT INTO planta(EtapaMadurez, Estado, TipoPlanta,Nombre) VALUES (@Madurez, @Estado,@TipoPlanta,@Nombre)";

    // Agrega el valor del parámetro
    objSentencia->Parameters->AddWithValue("@Madurez", etapaMadurez);
    objSentencia->Parameters->AddWithValue("@Estado", estado);
    objSentencia->Parameters->AddWithValue("@TipoPlanta", tipoPlanta);
    objSentencia->Parameters->AddWithValue("@Nombre", nombre);


    // Ejecuta el comando
    objSentencia->ExecuteNonQuery();
    cerrarConexion();
}
void plantaController::editarPlanta(int id, String^ etapaMadurez, String^ estado, String^ tipoPlanta, String^ nombre) {
    abrirConexion();
    SqlCommand^ objSentencia = gcnew SqlCommand();
    objSentencia->Connection = this->objConexion;
    // Define la sentencia SQL de INSERT con un parámetro
    objSentencia->CommandText = "UPDATE planta SET EtapaMadurez = @EtapaMadurez, Estado = @Estado, TipoPlanta = @TipoPlanta,Nombre = @Nombre WHERE IdPlanta = @Id";
    // Agrega el valor del parámetro
    objSentencia->Parameters->AddWithValue("@EtapaMadurez", etapaMadurez);
    objSentencia->Parameters->AddWithValue("@Estado", estado);
    objSentencia->Parameters->AddWithValue("@TipoPlanta", tipoPlanta);
    objSentencia->Parameters->AddWithValue("@Nombre", nombre);
    objSentencia->Parameters->AddWithValue("@Id", id);


    // Ejecuta el comando
    objSentencia->ExecuteNonQuery();
    cerrarConexion();
}


planta^ plantaController::buscarIdEditar(int id) {
    abrirConexion();
    planta^ objPlanta = nullptr;
    /*SqlCommand nos permite crear un objeto a través del cual voy a definir una sentencia SQL*/
    SqlCommand^ objSentencia = gcnew SqlCommand();
    /*Aqui estoy indicando que mi sentencia se va a ejecutar en esa conexion de base de datos*/
    objSentencia->Connection = this->objConexion;
    /*Aqui voy a definir la sentencia SQL que voy a ejecutar*/
    objSentencia->CommandText = "SELECT * FROM planta where IdPlanta = @Id";
    objSentencia->Parameters->AddWithValue("@Id", id);
    /*Ahora para ejecutar voy a utilizar ExecuteReader cuando la sentencia es SELECT*/
    /*Para recuperar la informacion que me devuelve un select, utilizo SqlDataReader*/
    SqlDataReader^ objData = objSentencia->ExecuteReader();

    if (objData->Read())
    {
        int idPlanta = safe_cast<int>(objData[0]);
        String^ etapaMadurez = safe_cast<String^>(objData[1]);
        String^ estado = safe_cast<String^>(objData[2]);
        String^ tipoPlanta = safe_cast<String^>(objData[3]);
        String^ nombre = safe_cast<String^>(objData[4]);

        objPlanta = gcnew planta(idPlanta, etapaMadurez, tipoPlanta, nombre, estado);

    }
 
        objData->Close();
        cerrarConexion();
        return objPlanta;
}