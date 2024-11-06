#include "GrafConsumoAguaxInvernadero.h"

using namespace SystemControlCropModel;

GrafConsumoAguaXInvernadero::GrafConsumoAguaXInvernadero(){

}
GrafConsumoAguaXInvernadero::GrafConsumoAguaXInvernadero(String^ invernadero, int consumoAgua) {
    this->invernadero = invernadero;
    this->consumoAgua = consumoAgua;
}

int GrafConsumoAguaXInvernadero::getConsumoAgua() {
    return this->consumoAgua;
}
void GrafConsumoAguaXInvernadero::setConsumoAgua(int consumoAgua) {
    this->consumoAgua = consumoAgua;
}

String^ GrafConsumoAguaXInvernadero::getInvernadero() {
    return this->invernadero;
}
void GrafConsumoAguaXInvernadero::setInvernadero(String^ invernadero) {
    this->invernadero = invernadero;

}