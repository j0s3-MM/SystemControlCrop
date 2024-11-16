#include "Sensor.h"
using namespace SystemControlCropModel;

Sensor::Sensor() {

}
Sensor::Sensor(String^ categoria, String^ modelo, String^ estado, String^ nombre, int idsensor) {
	this->categoria = categoria;
	this->modelo = modelo;
	this->estado = estado;
	this->nombre = nombre;
	this->idSensor = idsensor;

}
String^ Sensor::getcategoria() {
	return this->categoria;
}
void Sensor::setcategoria(String^ categoria) {
	this->categoria = categoria;
}

String^ Sensor::getModelo() {
	return this->modelo;
}
void Sensor::setModelo(String^ modelo) {
	this->modelo = modelo;
}

String^ Sensor::getNombre() {
	return this->nombre;
}
void Sensor::setNombre(String^ nombre) {
	this->nombre = nombre;
}

//planta^ Sensor::getPlanta() {
//	return this->plantas;
//}
//
//void Sensor::setPlanta(planta^ plantas) {
//	this->plantas = plantas;
//}


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
