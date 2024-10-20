#include "Dimensiones.h"

using namespace SystemControlCropModel;

Dimensiones::Dimensiones() {

}

Dimensiones::Dimensiones(int altura, int ancho, int largo) {
	this->altura = altura;
	this->ancho = ancho;
	this->largo = largo;
}

int Dimensiones::setAltura() {
	return this->altura;
}
void Dimensiones::getAltura(int altura) {
	this->altura = altura;
}
int Dimensiones::setAncho() {
	return this->ancho;
}
void Dimensiones::getAncho(int ancho) {
	this->ancho = ancho;
}
int Dimensiones::setLargo() {
	return this->largo;
}
void Dimensiones::getLargo(int largo) {
	this->largo = largo;
}