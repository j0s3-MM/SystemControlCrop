#include "bomba.h"
using namespace SystemControlCropModel;

// Constructor por defecto
bomba::bomba():actuador(){
}

// Constructor parametrizado
bomba::bomba(String^ estado, int duracion, int cantidad, int potenciaConsumida, int caudal) :actuador(estado, duracion, cantidad, potenciaConsumida) {
    this->caudal = caudal;
}


// Getter y Setter para caudal
int bomba::getcaudal() {
    return this->caudal;
}

void bomba::setcaudal(int caudal) {
    this->caudal = caudal;
}