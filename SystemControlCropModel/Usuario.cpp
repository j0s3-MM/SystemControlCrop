#include "Usuario.h"

using namespace SystemControlCropModel;
Usuario::Usuario() {

}
Usuario::Usuario(int idPersona, String^ nombre, int edad, String^ genero, String^ contrasena) {
	this->idPersona = idPersona;
	this->nombre = nombre;
	this->edad = edad;
	this->genero = genero;
	this->contrasena = contrasena;
}

int Usuario::getIdPersona() {
	return this->idPersona;
}
void Usuario::setIdPersona(int idPersona) {
	this->idPersona = idPersona;
}

String^ Usuario::getNombre() {
	return this->nombre;
}
void Usuario::setNombre(String^ nombre) {
	this->nombre = nombre;
}

int Usuario::getEdad() {
	return this->edad;
}
void Usuario::setEdad(int edad) {
	this->edad = edad;
}

String^ Usuario::getGenero() {
	return this->genero;
}
void Usuario::setGenero(String^ genero) {
	this->genero = genero;
}

String^ Usuario::getContrasena() {
	return this->contrasena;
}
void Usuario::setContrasena(String^ contrasena) {
	this->contrasena = contrasena;
}



