#include "fruta.h"
using namespace SystemControlCropModel;

// Constructor por defecto
fruta::fruta() :planta() {
}


// Constructor parametrizado
fruta::fruta(int idplanta, String^ faseCrecimiento, String^ tipoRiego, String^ tiempoCosecha, String^ etapaMadurez, List<Requerimiento^>^ listaRequerimientos, String^ nombreFruta) : planta(idplanta, faseCrecimiento, tipoRiego, tiempoCosecha, etapaMadurez, listaRequerimientos) {
    this->nombreFruta = nombreFruta;
}

// Getter y Setter para nombreFruta
String^ fruta::getnombreFruta() {
    return this->nombreFruta;
}

void fruta::setnombreFruta(String^ nombreFruta) {
    this->nombreFruta = nombreFruta;
}