#include "ReporteTempxTiempo.h";

using namespace SystemControlCropModel;
reporteTempxTiempo::reporteTempxTiempo() {

}

reporteTempxTiempo::reporteTempxTiempo(int altura, int ancho) {
	this->temperatura = temperatura;
	this->tiempo = tiempo;
}

int reporteTempxTiempo::getTemperatura() {
	return this->temperatura;
}
void reporteTempxTiempo::setTempeatura(int temperatura) {
	this->temperatura = temperatura;
}
int reporteTempxTiempo::getTiempo() {
	return this->tiempo;
}
void reporteTempxTiempo::setTiempo(int tiempo) {
	this->tiempo = tiempo;
}