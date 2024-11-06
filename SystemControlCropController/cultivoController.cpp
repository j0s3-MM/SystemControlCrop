#include "CultivoController.h"

using namespace System::IO;
using namespace SystemControlCropController;
using namespace SystemControlCropModel;
//
//CultivoController::CultivoController() {
//
//}

//List<planta^>^ CultivoController::buscarAll() {
//    List<Sensor^>^ listaSensores = gcnew List<Sensor^>();
//    array<String^>^ lineasArchivo = File::ReadAllLines("Sensores.txt");
//    String^ separadores = ";";
//    for each (String ^ linea in lineasArchivo) {  //por a ir linea en cada elemento de lineaarchivo
//        //boy a separar los datos de una linea en un aregglo de strings
//        array<String^>^ datos = linea->Split(separadores->ToCharArray());
//        //Clase Sensor
//
//        int idSensor = Convert::ToInt32(datos[0]);
//        planta^ categoria = datos[1];
//        planta^ estado = datos[2];
//
//
//        Sensor^ sensor = gcnew Sensor();
//        // Asignar propiedades de invernadero
//
//        sensor->setId(idSensor);
//
//        listaSensores->Add(sensor);
//
//    }
//    return listaSensores;
//}
//
//List<Sensor^>^ SensorController::buscarCategoria(String^ categoriaBuscar) {
//    List<Sensor^>^ listaSensores = gcnew List<Sensor^>();
//    array<String^>^ lineasArchivo = File::ReadAllLines("Sensores.txt");
//    String^ separadores = ";";
//    for each (String ^ linea in lineasArchivo) {  //por a ir linea en cada elemento de lineaarchivo
//        //boy a separar los datos de una linea en un aregglo de strings
//        array<String^>^ datos = linea->Split(separadores->ToCharArray());
//        //Clase Sensor
//
//        int idSensor = Convert::ToInt32(datos[0]);
//        String^ categoria = datos[1];
//        String^ estado = datos[2];
//
//        if (categoria->CompareTo(categoriaBuscar) == 0) {
//            Sensor^ sensor = gcnew Sensor();
//            // Asignar propiedades de invernadero
//            sensor->setcategoria(categoria);
//            sensor->setEstado(estado);
//            sensor->setId(idSensor);
//            listaSensores->Add(sensor);
//        }
//
//
//
//    }
//    return listaSensores;
//}
