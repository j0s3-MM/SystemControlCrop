#include "microcontrolador.h"

using namespace SystemControlCropModel;

microcontrolador::microcontrolador() {
	this->listactuadores = gcnew List<actuador^>();
	this->listasensores = gcnew List<Sensor^>();

}
microcontrolador::microcontrolador(List<Sensor^>^ listasensores, List<actuador^>^ listactuadores) {
	this->listasensores = listasensores;
	this->listactuadores = listactuadores;
}
List<actuador^>^ microcontrolador::getlistactuadores() {
	return this->listactuadores;
}
void microcontrolador::setlistadeactuadores(List<actuador^>^ listactuadores) {
	this->listactuadores = listactuadores;
}
List<Sensor^>^ microcontrolador::getlistasensores() {
	return this->listasensores;
}
void microcontrolador::setlistasensores(List<Sensor^>^ listasensores) {
	this->listasensores = listasensores;
}

