#pragma once
#include "actuador.h"
namespace SystemControlCropModel {

    using namespace System;
    ref class LucesLED :actuador
    {
    protected:
        int intensidadLuminosa;
        String^ color;

    public:

        // Constructores
        LucesLED();
        LucesLED(String^ estado, int duracion, int cantidad, int potenciaConsumida, int intensidadLuminosa, String^ color);

        // Mtodos Getters y Setters para intensidadLuminosa
        int getintensidadLuminosa();
        void setintensidadLuminosa(int intensidadLuminosa);

        // Mtodos Getters y Setters para color
        String^ getcolor();
        void setcolor(String^ color);
    };

}