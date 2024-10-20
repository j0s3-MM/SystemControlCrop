#include "tuberia.h"
using namespace SystemControlCropModel;

// Constructor por defecto
tuberia::tuberia() {
}

// Constructor parametrizado
tuberia::tuberia(String^ material) {
    this->material = material;
}

// Getter y Setter para material
String^ tuberia::getmaterial() {
    return this->material;
}

void tuberia::setmaterial(String^ material) {
    this->material = material;
}