#include "planta.h"
using namespace SystemControlCropModel;

// Constructor por defecto
planta::planta() {
}

// Constructor parametrizado
planta::planta(int idplanta, String^ etapaMadurez, String^ tipoPlanta, String^ nombre, String^ estado){
    this->idplanta = idplanta;
    this->etapaMadurez = etapaMadurez;
    this->nombre = nombre;
    this->tipoPlanta = tipoPlanta;
    this->estado = estado;
    //this->Requerimientos = Requerimientos;
    // , Requerimiento^ Requerimientos 

}

Requerimiento^ planta::getRequerimientos() {
    return this->Requerimientos;
}

void planta::setRequerimientos(Requerimiento^ Requerimientos) {
    this->Requerimientos = Requerimientos;
}
// Getter y Setter para idplanta
int planta::getidplanta() {
    return this->idplanta;
}

void planta::setidplanta(int idplanta) {
    this->idplanta = idplanta;
}
// Getter y Setter para etapaMadurez
String^ planta::getetapaMadurez() {
    return this->etapaMadurez;
}

void planta::setetapaMadurez(String^ etapaMadurez) {
    this->etapaMadurez = etapaMadurez;
}

String^ planta::getTipoPlanta() {
    return this->tipoPlanta;
}

void planta::setTipoPlanta(String^ tipoPlanta) {
    this->tipoPlanta = tipoPlanta;
}

String^ planta::getEstado() {
    return this->estado;
}

void planta::setEstado(String^ estado) {
    this->estado = estado;
}

String^ planta::getNombre() {
    return this->nombre;
}

void planta::setNombre(String^ nombre) {
    this->nombre = nombre;
}
