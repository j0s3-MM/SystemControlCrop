#include "verdura.h"
using namespace SystemControlCropModel;

// Constructor por defecto
Verdura::Verdura() :planta() {
}

// Constructor parametrizado
Verdura::Verdura(int idplanta, String^ faseCrecimiento, String^ tipoRiego, String^ tiempoCosecha, String^ etapaMadurez, List<Requerimiento^>^ listaRequerimientos, String^ tipoVerdura, String^ nombreVerdura, String^ maduro) : planta(idplanta, faseCrecimiento, tipoRiego, tiempoCosecha, etapaMadurez, listaRequerimientos) {
    this->tipoVerdura = tipoVerdura;
    this->nombreVerdura = nombreVerdura;
    this->maduro = maduro;
}

// Getter y Setter para tipoVerdura
String^ Verdura::gettipoVerdura() {
    return this->tipoVerdura;
}

void Verdura::settipoVerdura(String^ tipoVerdura) {
    this->tipoVerdura = tipoVerdura;
}

// Getter y Setter para nombreVerdura
String^ Verdura::getnombreVerdura() {
    return this->nombreVerdura;
}

void Verdura::setnombreVerdura(String^ nombreVerdura) {
    this->nombreVerdura = nombreVerdura;
}

// Getter y Setter para maduro
String^ Verdura::getmaduro() {
    return this->maduro;
}

void Verdura::setmaduro(String^ maduro) {
    this->maduro = maduro;
}