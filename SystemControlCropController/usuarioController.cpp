#include "usuarioController.h"

using namespace System::IO;
using namespace SystemControlCropController;
using namespace SystemControlCropModel;

UsuarioController::UsuarioController() {
    this->objConexion = gcnew SqlConnection();
}

void UsuarioController::abrirConexion() {
    /*Vamos a definir la cadena de conexion para nuestra base de datos*/
    this->objConexion->ConnectionString = "Server = idb1inf53.cw2hscntsr5w.us-east-1.rds.amazonaws.com; DataBase = SistemaControlInvernadero; User id = admin; Password = PUCP2005";  //colocar server
    /*Abrimos la conexion*/
    this->objConexion->Open();
}

void UsuarioController::cerrarConexion() {
    this->objConexion->Close();
}

int UsuarioController::verificarUser(int DNI, String^ Contraseña){
    abrirConexion();
    /*SqlCommand nos permite crear un objeto a través del cual voy a definir una sentencia SQL*/
    SqlCommand^ objSentencia = gcnew SqlCommand();
    /*Aqui estoy indicando que mi sentencia se va a ejecutar en esa conexion de base de datos*/
    objSentencia->Connection = this->objConexion;
    /*Aqui voy a definir la sentencia SQL que voy a ejecutar*/
    //objSentencia->CommandText = "SELECT * FROM Usuario";
    objSentencia->CommandText = "SELECT * FROM Usuario WHERE DNI = @DNI and Contraseña = @Contraseña";
    objSentencia->Parameters->AddWithValue("@DNI", DNI );
    objSentencia->Parameters->AddWithValue("@Contraseña", Contraseña);
    //objSentencia->Parameters->AddWithValue("@Contraseña", "%" + Contraseña + "%");   
    /*Ahora para ejecutar voy a utilizar ExecuteReader cuando la sentencia es SELECT*/
    /*Para recuperar la informacion que me devuelve un select, utilizo SqlDataReader*/
    SqlDataReader^ objData = objSentencia->ExecuteReader();
    bool estado = objData->HasRows;
    objData->Close();
    if (estado)
    {
        cerrarConexion();
        return 1;
    }
    cerrarConexion();
    return 0;
}

int UsuarioController::Registrarse(int DNI, String^ Contraseña) {
    abrirConexion();
    /*SqlCommand nos permite crear un objeto a través del cual voy a definir una sentencia SQL*/
    SqlCommand^ objSentencia = gcnew SqlCommand();
    /*Aqui estoy indicando que mi sentencia se va a ejecutar en esa conexion de base de datos*/
    objSentencia->Connection = this->objConexion;
    /*Aqui voy a definir la sentencia SQL que voy a ejecutar*/
    objSentencia->CommandText = "SELECT * FROM Usuario WHERE DNI = @DNI";
    objSentencia->Parameters->AddWithValue("@DNI", DNI );
    /*Ahora para ejecutar voy a utilizar ExecuteReader cuando la sentencia es SELECT*/
    /*Para recuperar la informacion que me devuelve un select, utilizo SqlDataReader*/
    SqlDataReader^ objData = objSentencia->ExecuteReader();
    bool estado = objData->HasRows;
    objData->Close();

    SqlCommand^ objSentencia2 = gcnew SqlCommand();
    /*Aqui estoy indicando que mi sentencia se va a ejecutar en esa conexion de base de datos*/
    objSentencia2->Connection = this->objConexion;

    if (estado)
    {
        
        objSentencia2->CommandText = "UPDATE  Usuario SET Contraseña =@Contraseña WHERE DNI = @DNI";
        objSentencia2->Parameters->AddWithValue("@Contraseña", Contraseña);
        objSentencia2->Parameters->AddWithValue("@DNI", DNI);

        // Ejecuta el comando
        objSentencia2->ExecuteNonQuery();
        cerrarConexion();
        return 1;
    }
    cerrarConexion();
    return 0;

  
}


