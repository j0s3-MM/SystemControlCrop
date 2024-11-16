#include "Dimensiones.h"

using namespace SystemControlCropModel;

Dimensiones::Dimensiones() {

}

Dimensiones::Dimensiones(int altura, int ancho, int largo) {
	this->altura = altura;
	this->ancho = ancho;
	this->largo = largo;
}

int Dimensiones::getAltura() {
	return this->altura;
}
void Dimensiones::setAltura(int altura) {
	this->altura = altura;
}
int Dimensiones::getAncho() {
	return this->ancho;
}
void Dimensiones::setAncho(int ancho) {
	this->ancho = ancho;
}
int Dimensiones::getLargo() {
	return this->largo;
}
void Dimensiones::setLargo(int largo) {
	this->largo = largo;
}