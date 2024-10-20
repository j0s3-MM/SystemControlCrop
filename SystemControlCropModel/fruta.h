#pragma once
#include "planta.h"
namespace SystemControlCropModel {

    using namespace System;
    using namespace System::Collections::Generic;
    ref class fruta :planta
    {
    protected:
        String^ nombreFruta;

    public:

        // Constructores
        fruta();
        fruta(int idplanta, String^ faseCrecimiento, String^ tipoRiego, String^ tiempoCosecha, String^ etapaMadurez, List<Requerimiento^>^ listaRequerimientos, String^ nombreFruta); //primero los tipos de dato del padre
        //luego los tipos de dato del hijo

        // Mtodos Getters y Setters para nombreFruta
        String^ getnombreFruta();
        void setnombreFruta(String^ nombreFruta);
    };

}