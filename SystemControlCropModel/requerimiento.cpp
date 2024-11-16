#include "Requerimiento.h"
using namespace SystemControlCropModel;

// Constructor por defecto
Requerimiento::Requerimiento() {
}

// Constructor parametrizado
Requerimiento::Requerimiento(int humedadIdealAire, int humedadIdealSuelo, int temperaturaIdeal, int horasLuz){
    this->humedadIdealAire = humedadIdealAire;
    this->humedadIdealSuelo = humedadIdealSuelo;
    this->temperaturaIdeal = temperaturaIdeal;
    this->horasLuz = horasLuz;
}

// Getter y Setter para cantidadAgua
int Requerimiento::getHumedadIdealAire() {
    return this->humedadIdealAire;
}

void Requerimiento::setHumedadIdealAire(int humedadIdealAire) {
    this->humedadIdealAire = humedadIdealAire;
}

// Getter y Setter para humedadRequerida
int Requerimiento::getHumedadIdealSuelo() {
    return this->humedadIdealSuelo;
}

void Requerimiento::setHumedadIdealSuelo(int humedadIdealSuelo) {
    this->humedadIdealSuelo = humedadIdealSuelo;
}

// Getter y Setter para temperaturaIdeal
int Requerimiento::getTemperaturaIdeal() {
    return this->temperaturaIdeal;
}

void Requerimiento::setTemperaturaIdeal(int temperaturaIdeal) {
    this->temperaturaIdeal = temperaturaIdeal;
}

// Getter y Setter para horasLuz
int Requerimiento::getHorasLuz() {
    return this->horasLuz;
}

void Requerimiento::setHorasLuz(int horasLuz) {
    this->horasLuz = horasLuz;
}