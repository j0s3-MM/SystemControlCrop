#pragma once
#include "actuador.h"
namespace SystemControlCropModel {

    using namespace System;
    public ref class bomba :actuador {
    protected:
        int caudal;

    public:

        // Constructores
        bomba();
        bomba(String^ estado, int duracion, int cantidad, int potenciaConsumida, int caudal);

        // Mtodos Getters y Setters para caudal
        int getcaudal();
        void setcaudal(int caudal);
    };
}