#include "Tanque.h"
using namespace SystemControlCropModel;

Tanque::Tanque() :Componentes() {

}
Tanque::Tanque(int idComponente, float volumen, float  capacidadLitros, float porcentajeFertilizante, float nivelFluido, String^ fertilizante) :Componentes(idComponente) {
	this->volumen = volumen;
	this->capacidadLitros = capacidadLitros;
	this->porcentajeFertilizante = porcentajeFertilizante;
	this->nivelFluido = nivelFluido;
	this->fertilizante = fertilizante;
}

float Tanque::getVolumen() {
	return this->volumen;
}
void Tanque::setVolumen(float volumen) {
	this->volumen = volumen;

}
float Tanque::getCapacidadLitros() {
	return this->capacidadLitros;
}
void Tanque::setCapacidadLitros(float capacidadLitros) {
	this->capacidadLitros = capacidadLitros;
}
float Tanque::getPorcentajeFertilizante() {
	return this->porcentajeFertilizante;
}
void Tanque::setPorcentajeFertilizante(float porcentajeFertilizante) {
	this->porcentajeFertilizante = porcentajeFertilizante;
}
float Tanque::getNivelFluido() {
	return this->nivelFluido;
}
void Tanque::setNivelFluido(float nivelFluido) {
	this->nivelFluido = nivelFluido;
}
