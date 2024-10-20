#include "sensorGas.h"
using namespace SystemControlCropModel;

// Constructor por defecto
sensorGas::sensorGas() :Sensor() {
}

// Constructor parametrizado
sensorGas::sensorGas(String^ categoria, double valorActual, int frecuencia, int voltajeOperacion, String^ fechaInstalacion, String^ proposito, planta^ plantas, double resistencia, int temperaturaOperacion, int humedadOperacion, int tiempoCalentamiento, String^ rangoDeteccion, String^ gasDeteccion) : Sensor(categoria, valorActual, frecuencia, voltajeOperacion, fechaInstalacion, proposito, plantas) {
    this->resistencia = resistencia;
    this->temperaturaOperacion = temperaturaOperacion;
    this->humedadOperacion = humedadOperacion;
    this->tiempoCalentamiento = tiempoCalentamiento;
    this->rangoDeteccion = rangoDeteccion;
    this->gasDeteccion = gasDeteccion;
}

// Getter y Setter para resistencia
double sensorGas::getresistencia() {
    return this->resistencia;
}

void sensorGas::setresistencia(double resistencia) {
    this->resistencia = resistencia;
}

// Getter y Setter para temperaturaOperacion
int sensorGas::gettemperaturaOperacion() {
    return this->temperaturaOperacion;
}

void sensorGas::settemperaturaOperacion(int temperaturaOperacion) {
    this->temperaturaOperacion = temperaturaOperacion;
}

// Getter y Setter para humedadOperacion
int sensorGas::gethumedadOperacion() {
    return this->humedadOperacion;
}

void sensorGas::sethumedadOperacion(int humedadOperacion) {
    this->humedadOperacion = humedadOperacion;
}

// Getter y Setter para tiempoCalentamiento
int sensorGas::gettiempoCalentamiento() {
    return this->tiempoCalentamiento;
}

void sensorGas::settiempoCalentamiento(int tiempoCalentamiento) {
    this->tiempoCalentamiento = tiempoCalentamiento;
}

// Getter y Setter para rangoDeteccion
String^ sensorGas::getrangoDeteccion() {
    return this->rangoDeteccion;
}

void sensorGas::setrangoDeteccion(String^ rangoDeteccion) {
    this->rangoDeteccion = rangoDeteccion;
}

// Getter y Setter para gasDeteccion
String^ sensorGas::getgasDeteccion() {
    return this->gasDeteccion;
}

void sensorGas::setgasDeteccion(String^ gasDeteccion) {
    this->gasDeteccion = gasDeteccion;
}