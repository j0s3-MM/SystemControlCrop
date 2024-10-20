#include "Componentes.h"

using namespace SystemControlCropModel;

Componentes::Componentes() {

}
Componentes::Componentes(int idComponente) {
	this->idComponente = idComponente;
}

int Componentes::getIdComponente() {
	return this->idComponente;

}
void Componentes::setIdComponente(int idComponente) {
	this->idComponente = idComponente;
}

