#include "planta.h"
using namespace SystemControlCropModel;

// Constructor por defecto
planta::planta() {
    this->listaRequerimientos = gcnew List<Requerimiento^>();
}

// Constructor parametrizado
planta::planta(int idplanta, String^ faseCrecimiento, String^ tipoRiego, String^ tiempoCosecha, String^ etapaMadurez, List<Requerimiento^>^ listaRequerimientos) {
    this->idplanta = idplanta;
    this->faseCrecimiento = faseCrecimiento;
    this->tipoRiego = tipoRiego;
    this->tiempoCosecha = tiempoCosecha;
    this->etapaMadurez = etapaMadurez;
    this->listaRequerimientos = listaRequerimientos;  

}

List<Requerimiento^>^ planta::getListaRequerimientos() {
    return this->listaRequerimientos;
}

void planta::setListaRequerimientos(List<Requerimiento^>^ listaRequerimientos) {
    this->listaRequerimientos = listaRequerimientos;
}
// Getter y Setter para idplanta
int planta::getidplanta() {
    return this->idplanta;
}

void planta::setidplanta(int idplanta) {
    this->idplanta = idplanta;
}

// Getter y Setter para faseCrecimiento
String^ planta::getfaseCrecimiento() {
    return this->faseCrecimiento;
}

void planta::setfaseCrecimiento(String^ faseCrecimiento) {
    this->faseCrecimiento = faseCrecimiento;
}

// Getter y Setter para tipoRiego
String^ planta::gettipoRiego() {
    return this->tipoRiego;
}

void planta::settipoRiego(String^ tipoRiego) {
    this->tipoRiego = tipoRiego;
}

// Getter y Setter para tiempoCosecha

String^ planta::gettiempoCosecha() {
    return this->tiempoCosecha; 
}

void planta::settiempoCosecha(String^ tiempoCosecha) {
    this->tiempoCosecha = tiempoCosecha;
}

// Getter y Setter para etapaMadurez
String^ planta::getetapaMadurez() {
    return this->etapaMadurez;
}

void planta::setetapaMadurez(String^ etapaMadurez) {
    this->etapaMadurez = etapaMadurez;
}
