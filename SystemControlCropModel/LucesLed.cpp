#include "lucesLED.h"
using namespace SystemControlCropModel;

// Constructor por defecto
LucesLED::LucesLED() :actuador() {
    this->intensidadLuminosa = 0; // Valor predeterminado
    this->color = ""; // Valor predeterminado: cadena vac
}

// Constructor parametrizado
LucesLED::LucesLED(String^ estado, int duracion, int cantidad, int potenciaConsumida, int intensidadLuminosa, String^ color) {
    this->intensidadLuminosa = intensidadLuminosa;
    this->color = color;
}

// Getter y Setter para intensidadLuminosa
int LucesLED::getintensidadLuminosa() {
    return this->intensidadLuminosa;
}

void LucesLED::setintensidadLuminosa(int intensidadLuminosa) {
    this->intensidadLuminosa = intensidadLuminosa;
}

// Getter y Setter para color
String^ LucesLED::getcolor() {
    return this->color;
}

void LucesLED::setcolor(String^ color) {
    this->color = color;
}