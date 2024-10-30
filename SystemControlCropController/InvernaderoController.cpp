#include "InvernaderoController.h"

using namespace System::IO;
using namespace SystemControlCropController;
using namespace SystemControlCropModel;

InvernaderoController::InvernaderoController() {

}
List<invernadero^>^ InvernaderoController::buscarAll() {
    List<invernadero^>^ listaInvernaderos = gcnew List<invernadero^>();
    array<String^>^ lineasArchivo = File::ReadAllLines("Invernaderos.txt");
    String^ separadores = ";";
    for each (String ^ linea in lineasArchivo) {  //por a ir linea en cada elemento de lineaarchivo
        //boy a separar los datos de una linea en un aregglo de strings
        array<String^>^ datos = linea->Split(separadores->ToCharArray());
        //Clase Persona
        String^ ubicacion = datos[0];
        String^ tiposuelo = datos[1];
        String^ cultivo = datos[2];
        int idLote = Convert::ToInt32(datos[3]);
        String^ sustrato = datos[4];
        int area = Convert::ToInt32(datos[5]);



        invernadero^ Invernadero = gcnew invernadero();
        // Asignar propiedades de invernadero
        Invernadero->setUbicacion(ubicacion);
        Invernadero->setTipoDeSuelo(tiposuelo);
        Invernadero->setCultivo(cultivo);
        Invernadero->setIdLote(idLote);
        Invernadero->setSustrato(sustrato);
        Invernadero->setArea(area);


        listaInvernaderos->Add(Invernadero);

    }
    return listaInvernaderos;
}

List<invernadero^>^ InvernaderoController::buscarUbicacionxCultivo(String^ Ubicacionbuscar, String^ cultivobuscar) {
    List<invernadero^>^ listaInvernaderos = gcnew List<invernadero^>();
    array<String^>^ lineasArchivo = File::ReadAllLines("Invernaderos.txt");
    String^ separadores = ";";
    for each (String ^ linea in lineasArchivo) {  //por a ir linea en cada elemento de lineaarchivo
        //boy a separar los datos de una linea en un aregglo de strings
        array<String^>^ datos = linea->Split(separadores->ToCharArray());
        //Clase Persona
        String^ ubicacion = datos[0];
        String^ tiposuelo = datos[1];
        String^ cultivo = datos[2];
        int idLote = Convert::ToInt32(datos[3]);
        String^ sustrato = datos[4];
        int area = Convert::ToInt32(datos[5]);
        //lee la informacion y registra en datos

        //logica de busqueda

        if(ubicacion == Ubicacionbuscar && cultivo == cultivobuscar) {
            invernadero^ Invernadero = gcnew invernadero();
            // Asignar propiedades de invernadero
            Invernadero->setUbicacion(ubicacion);
            Invernadero->setTipoDeSuelo(tiposuelo);
            Invernadero->setCultivo(cultivo);
            Invernadero->setIdLote(idLote);
            Invernadero->setSustrato(sustrato);
            Invernadero->setArea(area);
            listaInvernaderos->Add(Invernadero);

        }
        else {
            if (ubicacion == Ubicacionbuscar) {
                invernadero^ Invernadero = gcnew invernadero();
                // Asignar propiedades de invernadero
                Invernadero->setUbicacion(ubicacion);
                Invernadero->setTipoDeSuelo(tiposuelo);
                Invernadero->setCultivo(cultivo);
                Invernadero->setIdLote(idLote);
                Invernadero->setSustrato(sustrato);
                Invernadero->setArea(area);
                listaInvernaderos->Add(Invernadero);
            }
            else
            {
                if (cultivo == cultivobuscar)
                {
                    invernadero^ Invernadero = gcnew invernadero();
                    // Asignar propiedades de invernadero
                    Invernadero->setUbicacion(ubicacion);
                    Invernadero->setTipoDeSuelo(tiposuelo);
                    Invernadero->setCultivo(cultivo);
                    Invernadero->setIdLote(idLote);
                    Invernadero->setSustrato(sustrato);
                    Invernadero->setArea(area);
                    listaInvernaderos->Add(Invernadero);

                }
            }
        }


    }
    return listaInvernaderos;
}
List<invernadero^>^ InvernaderoController::buscarId(int idLotebuscar) {
    List<invernadero^>^ listaInvernaderos = gcnew List<invernadero^>();
    array<String^>^ lineasArchivo = File::ReadAllLines("Invernaderos.txt");
    String^ separadores = ";";
    for each (String ^ linea in lineasArchivo) {  //por a ir linea en cada elemento de lineaarchivo
        //boy a separar los datos de una linea en un aregglo de strings
        array<String^>^ datos = linea->Split(separadores->ToCharArray());
        //Clase Persona
        String^ ubicacion = datos[0];
        String^ tiposuelo = datos[1];
        String^ cultivo = datos[2];
        int idLote = Convert::ToInt32(datos[3]);
        String^ sustrato = datos[4];
        int area = Convert::ToInt32(datos[5]);


        if (idLote == idLotebuscar)
        {
            invernadero^ Invernadero = gcnew invernadero();
            // Asignar propiedades de invernadero
            Invernadero->setUbicacion(ubicacion);
            Invernadero->setTipoDeSuelo(tiposuelo);
            Invernadero->setCultivo(cultivo);
            Invernadero->setIdLote(idLote);
            Invernadero->setSustrato(sustrato);
            Invernadero->setArea(area);


            listaInvernaderos->Add(Invernadero);
        }
        

    }
    return listaInvernaderos;
}

void InvernaderoController::agregarInvernadero(String^ ubicacion, String^ tipoDeSuelo, String^ cultivo, int IdLote, String^ Sustrato, int area) {
    List<invernadero^>^ listaInvernaderos = buscarAll();  //es una lista que contiene todos los medicos que hay en el archivo
    invernadero^ Invernadero = gcnew invernadero();
    Invernadero->setUbicacion(ubicacion);
    Invernadero->setTipoDeSuelo(tipoDeSuelo);
    Invernadero->setCultivo(cultivo);
    Invernadero->setIdLote(IdLote);
    Invernadero->setSustrato(Sustrato);
    Invernadero->setArea(area);
    listaInvernaderos->Add(Invernadero);
    escribirArchivo(listaInvernaderos);
}
void InvernaderoController::escribirArchivo(List<invernadero^>^ listaInvernaderos) {
    array<String^>^ lineasArchivo = gcnew array<String^>(listaInvernaderos->Count);
    for (int i = 0; i < listaInvernaderos->Count; i++) {
        invernadero^ Invernadero = listaInvernaderos[i];
        lineasArchivo[i] = Invernadero->getUbicacion() + ";" + Invernadero->getTipoDeSuelo() + ";" + Invernadero->getCultivo() + ";" + Invernadero->getIdLote() + ";" + Invernadero->getSustrato() + ";" + Invernadero->getArea();

    }
    File::WriteAllLines("Invernaderos.txt", lineasArchivo);
}

void InvernaderoController::eliminarInvernadero(int idLote) {
    List<invernadero^>^ listaInvernadero = buscarAll();
    for (int i = 0; i < listaInvernadero->Count; i++) {
        invernadero^ Invernadero = listaInvernadero[i];
        if (Invernadero->getIdLote() == idLote) {
            listaInvernadero->RemoveAt(i);
            break;
        }
    }
    escribirArchivo(listaInvernadero);
}
void InvernaderoController::editarInvernadero(String^ ubicacion, String^ tipoDeSuelo, String^ cultivo, int IdLote, String^ Sustrato, int area){
    List<invernadero^>^ listaInvernaderos = buscarAll();
    for (int i = 0; i < listaInvernaderos->Count; i++) {
        invernadero^ Invernadero = listaInvernaderos[i];
        if (Invernadero->getIdLote() == IdLote) {
            // Modificar datos del médico
            Invernadero->setUbicacion(ubicacion);
            Invernadero->setTipoDeSuelo(tipoDeSuelo);
            Invernadero->setCultivo(cultivo);
            Invernadero->setIdLote(IdLote);
            Invernadero->setSustrato(Sustrato);
            Invernadero->setArea(area);
            break; // Salimos del bucle For
        }
    }
    escribirArchivo(listaInvernaderos); // Escribimos los datos actualizados en el archivo

}

invernadero^ InvernaderoController::buscarIdEditar(int idLote) {
    List<invernadero^>^ listaInvernaderos = buscarAll();
    invernadero^ invernaderoEncontrado = gcnew invernadero();
    for each (invernadero^ Invernadero in listaInvernaderos) {
        if (Invernadero->getIdLote() == idLote) {
            // Verificar por ID de médico
            invernaderoEncontrado->setIdLote(Invernadero->getIdLote());
            invernaderoEncontrado->setUbicacion(Invernadero->getUbicacion());
            invernaderoEncontrado->setTipoDeSuelo(Invernadero->getTipoDeSuelo());
            invernaderoEncontrado->setSustrato(Invernadero->getSustrato());
            invernaderoEncontrado->setCultivo(Invernadero->getCultivo());
            invernaderoEncontrado->setArea(Invernadero->getArea());
            break;
        }
    }
    return invernaderoEncontrado;
}

