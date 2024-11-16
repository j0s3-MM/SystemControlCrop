#include "sensorHumedad.h"
using namespace SystemControlCropModel;

// Constructor por defecto
sensorHumedadAire::sensorHumedadAire():Sensor() {
}

// Constructor parametrizado
sensorHumedadAire::sensorHumedadAire(String^ categoria, String^ modelo, String^ estado, String^ nombre, int idSensor, int humedadRelativaAire) : Sensor(categoria, modelo, estado,nombre,idSensor){
    this->humedadRelativaAire = humedadRelativaAire;
}

// Getter y Setter para idSensor

// Getter y Setter para humedadActual
int sensorHumedadAire::getHumedadRelativaAire() {
    return this->humedadRelativaAire;
}

void sensorHumedadAire::setHumedadRelativaAire(int humedadRelativaAire) {
    this->humedadRelativaAire = humedadRelativaAire;
}