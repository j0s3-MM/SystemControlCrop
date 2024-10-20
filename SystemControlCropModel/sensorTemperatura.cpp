#include "sensorTemperatura.h"
using namespace SystemControlCropModel;

// Constructor por defecto
sensorTemperatura::sensorTemperatura() :Sensor() {
}

// Constructor parametrizado
sensorTemperatura::sensorTemperatura(String^ categoria, double valorActual, int frecuencia, int voltajeOperacion, String^ fechaInstalacion, String^ proposito, planta^ plantas, String^ rangopOperacion, double voltajeSalida, int idSensor, int factorConversion) :Sensor(categoria, valorActual, frecuencia, voltajeOperacion, fechaInstalacion, proposito, plantas) {
    this->rangopOperacion = rangopOperacion;
    this->voltajeSalida = voltajeSalida;
    this->idSensor = idSensor;
    this->factorConversion = factorConversion;
}

// Getter y Setter para rangopOperacion
String^ sensorTemperatura::getrangopOperacion() {
    return this->rangopOperacion;
}

void sensorTemperatura::setrangopOperacion(String^ rangopOperacion) {
    this->rangopOperacion = rangopOperacion;
}

// Getter y Setter para voltajeSalida
double sensorTemperatura::getvoltajeSalida() {
    return this->voltajeSalida;
}

void sensorTemperatura::setvoltajeSalida(double voltajeSalida) {
    this->voltajeSalida = voltajeSalida;
}

// Getter y Setter para idSensor
int sensorTemperatura::getidSensor() {
    return this->idSensor;
}

void sensorTemperatura::setidSensor(int idSensor) {
    this->idSensor = idSensor;
}

// Getter y Setter para factorConversion
int sensorTemperatura::getfactorConversion() {
    return this->factorConversion;
}

void sensorTemperatura::setfactorConversion(int factorConversion) {
    this->factorConversion = factorConversion;
}