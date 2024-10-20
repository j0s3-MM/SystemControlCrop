#pragma once
#include "actuador.h"
namespace SystemControlCropModel {

    using namespace System;
    ref class Ventilador :actuador
    {
    protected:
        String^ direccion;

    public:

        // Constructores
        Ventilador();
        Ventilador(String^ estado, int duracion, int cantidad, int potenciaConsumida, String^ direccion);

        // Mtodos Getters y Setters para direccion
        String^ getdireccion();
        void setdireccion(String^ direccion);
    };

}

