#include "Sensor.h"
using namespace SystemControlCropModel;

Sensor::Sensor() {

}
Sensor::Sensor(String^ categoria, double valorActual, int frecuencia, int voltajeOperacion, String^ fechaInstalacion, String^ proposito, planta^ plantas, String^ estado, int idsensor) {
	this->categoria = categoria;
	this->voltajeOperacion = voltajeOperacion;
	this->valorActual = valorActual;
	this->proposito = proposito;
	this->fechaInstalacion = fechaInstalacion;
	this->frecuencia = frecuencia;
	this->plantas = plantas;
	this->estado = estado;
	this->idSensor = idsensor;

}
String^ Sensor::getcategoria() {
	return this->categoria;
}
void Sensor::setcategoria(String^ categoria) {
	this->categoria = categoria;
}

double Sensor::getvalorActual() {
	return this->valorActual;

}
void Sensor::setvalorActual(double valorActual) {
	this->valorActual = valorActual;

}
int Sensor::getfrecuencia() {
	return this->frecuencia;
}
void Sensor::setfrecuencia(int frecuencia) {
	this->frecuencia = frecuencia;

}
String^ Sensor::getproposito() {
	return this->proposito;
}
void Sensor::setproposito(String^ frecuencia) {
	this->proposito = proposito;
}

int Sensor::getvoltajeOperacion() {
	return this->voltajeOperacion;
}
void Sensor::setvoltajeOperacion(int voltajeOperacion) {
	this->voltajeOperacion = voltajeOperacion;
}
String^ Sensor::getfechaInstalacion() {
	return this->fechaInstalacion;
}
void Sensor::setfechaInstalacion(String^ fechaInstalacion) {
	this->fechaInstalacion = fechaInstalacion;
}

planta^ Sensor::getPlanta() {
	return this->plantas;
}

void Sensor::setPlanta(planta^ planta) {
	this->plantas = plantas;
}
String^ Sensor::getEstado() {
	return this->estado;
}
void Sensor::setEstado(String^ estado) {
	this->estado = estado;
}

int Sensor::getId() {
	return this->idSensor;
}
void Sensor::setId(int idSensor) {
	this->idSensor = idSensor;
}
