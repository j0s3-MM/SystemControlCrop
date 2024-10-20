#include "Requerimiento.h"
using namespace SystemControlCropModel;

// Constructor por defecto
Requerimiento::Requerimiento() {
}

// Constructor parametrizado
Requerimiento::Requerimiento(int cantidadAgua, int humedadRequerida, int temperaturaIdeal, String^ tipoSuelo, int horasLuz) {
    this->cantidadAgua = cantidadAgua;
    this->humedadRequerida = humedadRequerida;
    this->temperaturaIdeal = temperaturaIdeal;
    this->tipoSuelo = tipoSuelo;
    this->horasLuz = horasLuz;
}

// Getter y Setter para cantidadAgua
int Requerimiento::getcantidadAgua() {
    return this->cantidadAgua;
}

void Requerimiento::setcantidadAgua(int cantidadAgua) {
    this->cantidadAgua = cantidadAgua;
}

// Getter y Setter para humedadRequerida
int Requerimiento::gethumedadRequerida() {
    return this->humedadRequerida;
}

void Requerimiento::sethumedadRequerida(int humedadRequerida) {
    this->humedadRequerida = humedadRequerida;
}

// Getter y Setter para temperaturaIdeal
int Requerimiento::gettemperaturaIdeal() {
    return this->temperaturaIdeal;
}

void Requerimiento::settemperaturaIdeal(int temperaturaIdeal) {
    this->temperaturaIdeal = temperaturaIdeal;
}

// Getter y Setter para tipoSuelo
String^ Requerimiento::gettipoSuelo() {
    return this->tipoSuelo;
}

void Requerimiento::settipoSuelo(String^ tipoSuelo) {
    this->tipoSuelo = tipoSuelo;
}

// Getter y Setter para horasLuz
int Requerimiento::gethorasLuz() {
    return this->horasLuz;
}

void Requerimiento::sethorasLuz(int horasLuz) {
    this->horasLuz = horasLuz;
}