#include "invernadero.h"

using namespace SystemControlCropModel;

invernadero::invernadero() {
}

invernadero::invernadero(String^ ubicacion, int densidad, Dimensiones^ dimensiones) {

	this->ubicacion = ubicacion;
	this->densidad = densidad;
	this->dimensiones = dimensiones;
}
String^ invernadero::getUbicacion() {
	return this->ubicacion;
}
void invernadero::setUbicacion(String^ ubicacion) {
	this->ubicacion = ubicacion;
}


int invernadero::getDensidad() {
	return this->densidad;
}
void invernadero::setDensidad(int densidad) {
	this->densidad = densidad;
}

Dimensiones^ invernadero::getDimensiones() {
	return this->dimensiones;
}
void invernadero::setDimensiones(Dimensiones^ dimensiones) {
	this->dimensiones = dimensiones;
}

//List<planta^>^ invernadero::getListaPlanta() {
//	return this->listaPlantas;
//}
//void invernadero::setListaPlanta(List<planta^>^ listaPlantas) {
//	this->listaPlantas = listaPlantas;
//}