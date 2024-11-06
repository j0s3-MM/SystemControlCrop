#include "sensorController.h"

using namespace System::IO;
using namespace SystemControlCropController;
using namespace SystemControlCropModel;

SensorController::SensorController() {

}

List<Sensor^>^ SensorController::buscarAll() {
    List<Sensor^>^ listaSensores = gcnew List<Sensor^>();
    array<String^>^ lineasArchivo = File::ReadAllLines("Sensores.txt");
    String^ separadores = ";";
    for each (String ^ linea in lineasArchivo) {  //por a ir linea en cada elemento de lineaarchivo
        //boy a separar los datos de una linea en un aregglo de strings
        array<String^>^ datos = linea->Split(separadores->ToCharArray());
        //Clase Sensor
    
        int idSensor = Convert::ToInt32(datos[0]);
        String^ categoria = datos[1];
        String^ estado = datos[2];


        Sensor^ sensor = gcnew Sensor();
        // Asignar propiedades de invernadero
        sensor->setcategoria(categoria);
        sensor->setEstado(estado);
        sensor->setId(idSensor);

        listaSensores->Add(sensor);

    }
    return listaSensores;
}

List<Sensor^>^ SensorController::buscarCategoria(String^ categoriaBuscar) {
    List<Sensor^>^ listaSensores = gcnew List<Sensor^>();
    array<String^>^ lineasArchivo = File::ReadAllLines("Sensores.txt");
    String^ separadores = ";";
    for each (String ^ linea in lineasArchivo) {  //por a ir linea en cada elemento de lineaarchivo
        //boy a separar los datos de una linea en un aregglo de strings
        array<String^>^ datos = linea->Split(separadores->ToCharArray());
        //Clase Sensor

        int idSensor = Convert::ToInt32(datos[0]);
        String^ categoria = datos[1];
        String^ estado = datos[2];

        if(categoria->CompareTo(categoriaBuscar) == 0){
            Sensor^ sensor = gcnew Sensor();
            // Asignar propiedades de invernadero
            sensor->setcategoria(categoria);
            sensor->setEstado(estado);
            sensor->setId(idSensor);
            listaSensores->Add(sensor);
        }
        


    }
    return listaSensores;
}

List<Sensor^>^ SensorController::buscarId(int idLotebuscar) {
    List<Sensor^>^ listaSensores = gcnew List<Sensor^>();
    array<String^>^ lineasArchivo = File::ReadAllLines("Sensores.txt");
    String^ separadores = ";";
    for each (String ^ linea in lineasArchivo) {  //por a ir linea en cada elemento de lineaarchivo
        //boy a separar los datos de una linea en un aregglo de strings
        array<String^>^ datos = linea->Split(separadores->ToCharArray());
        //Clase Sensor

        int idSensor = Convert::ToInt32(datos[0]);
        String^ categoria = datos[1];
        String^ estado = datos[2];

        if (idSensor == idLotebuscar) {
            Sensor^ sensor = gcnew Sensor();
            // Asignar propiedades de invernadero
            sensor->setcategoria(categoria);
            sensor->setEstado(estado);
            sensor->setId(idSensor);
            listaSensores->Add(sensor);
        }



    }
    return listaSensores;
}
void SensorController::eliminarSensor(int idBuscar) {
    List<Sensor^>^ listaSensores = buscarAll();
    for (int i = 0; i < listaSensores->Count; i++) {
        Sensor^ sensor = listaSensores[i];
        if (sensor->getId() == idBuscar) {
            listaSensores->RemoveAt(i);
            break;
        }
    }
    escribirArchivo(listaSensores);

}
void SensorController::escribirArchivo(List<Sensor^>^ listaSensores) {
    array<String^>^ lineasArchivo = gcnew array<String^>(listaSensores->Count);
    for (int i = 0; i < listaSensores->Count; i++) {
        Sensor^ sensor = listaSensores[i];
        lineasArchivo[i] = sensor->getId() + ";" + sensor->getcategoria() +  ";" + sensor->getEstado();

    }
    File::WriteAllLines("Sensores.txt", lineasArchivo);
}
void SensorController::agregarSensor(int IdSensor, String^ categoria, String^ Estado) {
    List<Sensor^>^ listaSensores = buscarAll();  //es una lista que contiene todos los medicos que hay en el archivo
    Sensor^ sensor = gcnew Sensor();
    sensor->setId(IdSensor);
    sensor->setcategoria(categoria);
    sensor->setEstado(Estado);
    escribirArchivo(listaSensores);
}
void SensorController::editarSensor(int IdLote, String^ categoria, String^ Estado) {
    List<Sensor^>^ listaSensores = buscarAll();
    for (int i = 0; i < listaSensores->Count; i++) {
        Sensor^ sensor = listaSensores[i];
        if (sensor->getId() == IdLote) {
            // Modificar datos del médico
            sensor->setcategoria(categoria);
            sensor->setEstado(Estado);
            break; // Salimos del bucle For
        }
    }
    escribirArchivo(listaSensores); // Escribimos los datos actualizados en el archivo

}
Sensor^ SensorController::buscarIdEditar(int idLote) {
    List<Sensor^>^ listaSensores = buscarAll();
    Sensor^ sensorEncontrado = gcnew Sensor();
    for each (Sensor ^ sensor in listaSensores) {
        if (sensor->getId() == idLote) {
            // Verificar por ID de médico
            sensorEncontrado->setId(sensor->getId());
            sensorEncontrado->setcategoria(sensor->getcategoria());
            sensorEncontrado->setEstado(sensor->getEstado());
            break;
        }
    }
    return sensorEncontrado;
}




