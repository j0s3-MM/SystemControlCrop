#include "sensorTemperatura.h"
using namespace SystemControlCropModel;

// Constructor por defecto
sensorTemperatura::sensorTemperatura() :Sensor() {
}

// Constructor parametrizado
sensorTemperatura::sensorTemperatura(String^ categoria, String^ modelo, String^ estado, String^ nombre, int idSensor, int temperatura) : Sensor(categoria, modelo, estado,nombre, idSensor) {
    this->temperatura = temperatura;
}

// Getter y Setter para factorConversion
int sensorTemperatura::getTemperatura() {
    return this->temperatura;
}

void sensorTemperatura::setTemperatura(int temperatura) {
    this->temperatura = temperatura;
}