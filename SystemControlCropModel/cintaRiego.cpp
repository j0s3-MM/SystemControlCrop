#include "cintaRiego.h"

using namespace SystemControlCropModel;
CintaRiego::CintaRiego() :Componentes() {

}
CintaRiego::CintaRiego(int idComponente, int numObstrucciones, int longitud) : Componentes(idComponente) {
	this->numObstrucciones = numObstrucciones;
	this->longitud = longitud;
}

int CintaRiego::getNumObstrucciones() {
	return this->numObstrucciones;
}
void CintaRiego::setNumObstrucciones(int numObstrucciones) {
	this->numObstrucciones = numObstrucciones;
}
int CintaRiego::getLongitud() {
	return this->longitud;
}
void CintaRiego::getLongitud(int longitud) {
	this->longitud = longitud;
}

