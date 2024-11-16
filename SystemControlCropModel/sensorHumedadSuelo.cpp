#include "sensorHumedadSuelo.h"
using namespace SystemControlCropModel;

// Constructor por defecto
sensorHumedadSuelo::sensorHumedadSuelo():Sensor() {
}

// Constructor parametrizado
sensorHumedadSuelo::sensorHumedadSuelo(String^ categoria, String^ modelo, String^ estado, String^ nombre, int idSensor, int humedadRelativaAire) : Sensor(categoria, modelo, estado, nombre,idSensor) {
    this->humedadRelativaSuelo = humedadRelativaSuelo;
}

// Getter y Setter para idSensor

// Getter y Setter para humedadActual
int sensorHumedadSuelo::getHumedadRelativaSuelo() {
    return this->humedadRelativaSuelo;
}

void sensorHumedadSuelo::setHumedadRelativaSuelo(int humedadRelativaSuelo) {
    this->humedadRelativaSuelo = humedadRelativaSuelo;
}