#include "invernadero.h"

using namespace SystemControlCropModel;

invernadero::invernadero() {
	this->listaComponentes = gcnew List<Componentes^>();
}

invernadero::invernadero(String^ ubicacion, String^ tipoDeSuelo, String^ cultivo, int IdLote, int SuperficieSustrato, Dimensiones^ dimensiones, List<Componentes^>^ listaComponentes) {

	this->ubicacion = ubicacion;
	this->tipoDeSuelo = tipoDeSuelo;
	this->cultivo = cultivo;
	this->IdLote = IdLote;
	this->SuperficieSustrato = SuperficieSustrato;
	this->dimensiones = dimensiones;
	this->listaComponentes = listaComponentes;

}
String^ invernadero::getUbicacion() {
	return this->ubicacion;
}
void invernadero::setUbicacion(String^ ubicacion) {
	this->ubicacion = ubicacion;
}

String^ invernadero::getTipoDeSuelo() {
	return this->tipoDeSuelo;
}
void invernadero::setTipoDeSuelo(String^ tipoDeSuelo) {
	this->tipoDeSuelo = tipoDeSuelo;
}

String^ invernadero::getCultivo() {
	return this->cultivo;
}
void invernadero::setCultivo(String^ cultivo) {
	this->cultivo = cultivo;
}

int invernadero::getIdLote() {
	return this->IdLote;
}
void invernadero::setIdLote(int IdLote) {
	this->IdLote = IdLote;
}

int invernadero::getSuperficieSustrato() {
	return this->SuperficieSustrato;
}
void invernadero::setSuperficieSustrato(int SuperficieSustrato) {
	this->SuperficieSustrato = SuperficieSustrato;
}

Dimensiones^ invernadero::getDimensiones() {
	return this->dimensiones;
}
void invernadero::setDimensiones(Dimensiones^ dimensiones) {
	this->dimensiones = dimensiones;
}

List<Componentes^>^ invernadero::getListaComponentes() {
	return this->listaComponentes;
}
void invernadero::setListaComponentes(List<Componentes^>^ listaComponentes) {
	this->listaComponentes = listaComponentes;
}