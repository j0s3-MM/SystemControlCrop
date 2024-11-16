#include "Usuario.h"

using namespace SystemControlCropModel;

Usuario::Usuario(){

}

Usuario::Usuario(int idPersona, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, int edad, String^ genero, String^ cargo, String^ contraseña, invernadero^ invernaderos){
	this->idPersona = idPersona;
	this->nombre = nombre;
	this->apellidoPaterno = apellidoPaterno;
	this->apellidoMaterno = apellidoMaterno;
	this->edad = edad;
	this->genero = genero;
	this->cargo = cargo;
	this->contraseña = contraseña;
	this->invernaderos = invernaderos;

}


invernadero^ Usuario::getInvernadero() {
	return this->invernaderos;
}

void Usuario::setInvernadero(invernadero^ invernaderos) {
	this->invernaderos = invernaderos;
}

int Usuario::getidpersona() {
	return this->idPersona;
}

void Usuario::setidpersona(int idPersona) {
	this->idPersona = idPersona;
}


int Usuario::getEdad() {
	return this->idPersona;
}

void Usuario::setEdad(int edad) {
	this->edad = edad;
}


String^ Usuario::getNombre() {
	return this->nombre;
}

void Usuario::setNombre(String^ nombre) {
	this->nombre = nombre;
}


String^ Usuario::getApellidoPaterno() {
	return this->apellidoPaterno;
}

void Usuario::setApellidoPaterno(String^ apellidoPaterno) {
	this->apellidoPaterno = apellidoPaterno;
}


String^ Usuario::getApellidoMaterno() {
	return this->apellidoMaterno;
}

void Usuario::setApellidoMaterno(String^ apellidoMaterno) {
	this->apellidoMaterno = apellidoMaterno;
}


String^ Usuario::getGenero() {
	return this->genero;
}

void Usuario::setGenero(String^ genero) {
	this->genero = genero;
}


String^ Usuario::getCargo() {
	return this->cargo;
}

void Usuario::setCargo(String^ cargo) {
	this->cargo = cargo;
}

String^ Usuario::getContraseña() {
	return this->contraseña;
}

void Usuario::setContraseña(String^ contraseña) {
	this->contraseña = contraseña;
}
