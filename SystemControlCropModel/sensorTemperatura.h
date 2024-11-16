#pragma once
#include "sensor.h"
namespace SystemControlCropModel {

    using namespace System;
    public ref class sensorTemperatura :Sensor
    {
    protected:
        int temperatura;

    public:

        // Constructores
        sensorTemperatura();
        sensorTemperatura(String^ categoria, String^ modelo, String^ estado, String^ nombre, int idSensor, int temperatura);

        // Mtodos Getters y Setters para idSensor
        int getTemperatura();
        void setTemperatura(int temperatura);

    };

}