#include "observador.h"

using namespace SystemControlCropModel;

observador::observador() :Usuario() {

}
observador::observador(int idPersona, String^ nombre, int edad, String^ genero, String^ contrasena, String^ cargo) : Usuario(idPersona, nombre, edad, genero, contrasena) {
	this->cargo = cargo;
}

String^ observador::getCargo() {
	return this->cargo;
}
void observador::setCargo(String^ cargo) {
	this->cargo = cargo;
}

