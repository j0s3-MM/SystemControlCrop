#include "estadistica.h"

using namespace SystemControlCropModel;

estadistica::estadistica() {

}

estadistica::estadistica(String^ dato, String^ tipoDato) {
	this->dato = dato;
}

String^ estadistica::getDato() {
	return this->dato;
}
void estadistica::setDato(String^ dato) {
	this->dato = dato;
}

String^ estadistica::getTipoDato() {
	return this->tipoDato;
}
void estadistica::setTipoDato(String^ tipoDato) {
	this->tipoDato = tipoDato;
}