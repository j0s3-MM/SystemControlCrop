#include "valvula.h"

using namespace SystemControlCropModel;

valvula::valvula() :actuador() {//se llama al otro constructor

}

valvula::valvula(String^ estado, int duracion, int cantidad, int potenciaConsumida, String^ material) : actuador(estado, duracion, cantidad, potenciaConsumida) {
	this->material = material;
}

String^ valvula::getMaterial() {
	return  this->material;
}
void valvula::setMaterial(String^ material) {
	this->material = material;
}
