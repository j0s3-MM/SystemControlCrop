#include "usuarioController.h"

using namespace System::IO;
using namespace SystemControlCropController;
using namespace SystemControlCropModel;

UsuarioController::UsuarioController() {

}

int UsuarioController::verificarUser(String^ username, String^ contrasena){
	array<String^>^ lineasUserContrasena = File::ReadAllLines("Usuarios.txt");
	String^ separadores = ";";
    for each (String^ linea in lineasUserContrasena) {
        array<String^>^ datos = linea->Split(separadores->ToCharArray());
        if (datos[0]->CompareTo(username) == 0) {
            if (datos[1]->CompareTo(contrasena) == 0) {
                return 1;
            }    
            else {
                return 0;
            }
        }
    }
}