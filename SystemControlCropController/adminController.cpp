#include "adminController.h"

using namespace System::IO;
using namespace SystemControlCropController;
using namespace SystemControlCropModel;

adminController::adminController() {

}

int adminController::verificarKeypass(String^ keypass) {
    array<String^>^ lineasKeypass = File::ReadAllLines("Keypass.txt");
    String^ separadores = ";";
    int i;
    for each (String ^ linea in lineasKeypass) {
        array<String^>^ datos = linea->Split(separadores->ToCharArray());
        if (datos[0]->CompareTo(keypass) == 0) {
            return 1;
        }
        else
        {
            i = 0;
        }
    }
    return i;
}