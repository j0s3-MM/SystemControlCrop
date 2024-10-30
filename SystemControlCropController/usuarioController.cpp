#include "usuarioController.h"

using namespace System::IO;
using namespace SystemControlCropController;
using namespace SystemControlCropModel;

UsuarioController::UsuarioController() {

}

int UsuarioController::verificarUser(String^ username, String^ contrasena){
	array<String^>^ lineasUserContrasena = File::ReadAllLines("Usuarios.txt");
	String^ separadores = ";";
    int i; 
    for each (String^ linea in lineasUserContrasena) {
        array<String^>^ datos = linea->Split(separadores->ToCharArray());
        if (datos[1]->CompareTo(username) == 0) {
            if (datos[4]->CompareTo(contrasena) == 0) {
                return 1;       
            }
            else {
                i = 0;
            }
        }
        else {
            i = 0;
        }
    }
    return i;
}

void UsuarioController::newUser(int idPersona, String^ nombre, int edad, String^ sexo, String^ contraseña) {
    List<Usuario^>^ listaUsuarios = buscarAll();  //es una lista que contiene todos los medicos que hay en el archivo
    Usuario^ usuario = gcnew Usuario();
    usuario->setIdPersona(idPersona);
    usuario->setNombre(nombre);
    usuario->setEdad(edad);
    usuario->setGenero(sexo);
    usuario->setContrasena(contraseña);
    listaUsuarios->Add(usuario);
    escribirArchivo(listaUsuarios);
}

void UsuarioController::escribirArchivo(List<Usuario^>^ listaUsuarios) {
    
    array<String^>^ lineasArchivo = gcnew array<String^>(listaUsuarios->Count);
    for (int i = 0; i < listaUsuarios->Count; i++) {
        Usuario^ usuario = listaUsuarios[i];
        lineasArchivo[i] = usuario->getIdPersona() + ";" + usuario->getNombre() + ";" + usuario->getEdad() + ";" + usuario->getGenero() + ";"+ usuario->getContrasena();
    }
    File::WriteAllLines("Usuarios.txt", lineasArchivo);
    
}

List<Usuario^>^ UsuarioController::buscarAll() {
    List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();
    array<String^>^ lineasArchivo = File::ReadAllLines("Usuarios.txt");
    String^ separadores = ";";
    for each (String ^ linea in lineasArchivo) {  //por a ir linea en cada elemento de lineaarchivo
        //boy a separar los datos de una linea en un aregglo de strings
        array<String^>^ datos = linea->Split(separadores->ToCharArray());
        //Clase Persona
        int idPersona = Convert::ToInt32(datos[0]);
        String^ nombre = datos[1];
        int edad = Convert::ToInt32(datos[2]);
        String^ genero = datos[3];
        String^ contraseña = datos[4];
        


        Usuario^ usuario = gcnew Usuario();
        // Asignar propiedades de Persona
        usuario->setIdPersona(idPersona);
        usuario->setNombre(nombre);
        usuario->setEdad(edad);
        usuario->setGenero(genero);
        usuario->setContrasena(contraseña);
        // Asignar propiedades de Medico
     

        listaUsuarios->Add(usuario);

    }
    return listaUsuarios;
}

List<Usuario^>^ UsuarioController::buscarXdni(int idPersonabuscado) {
    List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();
    array<String^>^ lineasArchivo = File::ReadAllLines("Usuarios.txt");
    String^ separadores = ";";
    for each (String ^ linea in lineasArchivo) {  //por a ir linea en cada elemento de lineaarchivo
        //boy a separar los datos de una linea en un aregglo de strings
        array<String^>^ datos = linea->Split(separadores->ToCharArray());
        //Clase Persona
        int idPersona = Convert::ToInt32(datos[0]);
        String^ nombre = datos[1];
        int edad = Convert::ToInt32(datos[2]);
        String^ genero = datos[3];
        String^ contraseña = datos[4];

        if (idPersona == idPersonabuscado)
        {

            Usuario^ usuario = gcnew Usuario();
            // Asignar propiedades de Persona
            usuario->setIdPersona(idPersona);
            usuario->setNombre(nombre);
            usuario->setEdad(edad);
            usuario->setGenero(genero);
            usuario->setContrasena(contraseña);
            // Asignar propiedades de Medico


            listaUsuarios->Add(usuario);
        }


    }
    return listaUsuarios;
}

