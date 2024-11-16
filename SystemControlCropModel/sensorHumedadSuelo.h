#pragma once
#include "Sensor.h"
namespace SystemControlCropModel {

    using namespace System;
    public ref class sensorHumedadSuelo :Sensor
    {
    protected:
        int humedadRelativaSuelo;

    public:

        // Constructores
        sensorHumedadSuelo();
        sensorHumedadSuelo(String^ categoria, String^ modelo, String^ estado, String^ nombre, int idSensor, int humedadRelativaSuelo);

        // Mtodos Getters y Setters para idSensor

        // Mtodos Getters y Setters para humedadActual
        int getHumedadRelativaSuelo();
        void setHumedadRelativaSuelo(int humedadRelativaSuelo);

    };

}