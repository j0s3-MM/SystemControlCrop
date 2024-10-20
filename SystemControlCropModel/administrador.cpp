#include "Administrador.h"

using namespace SystemControlCropModel;

Administrador::Administrador() :Usuario() {

}

Administrador::Administrador(int idPersona, String^ nombre, int edad, String^ genero, String^ contrasena, invernadero^ invernaderos) : Usuario(idPersona, nombre, edad, genero, contrasena) {

}


invernadero^ Administrador::getInvernaderos() {
	return this->invernaderos;
}

void Administrador::setInvernaderos(invernadero^ invernaderos) {
	this->invernaderos = invernaderos;
}