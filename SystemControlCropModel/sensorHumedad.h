#pragma once
#include "Sensor.h"
namespace SystemControlCropModel {

    using namespace System;
    public ref class sensorHumedadAire :Sensor
    {
    protected:
        int humedadRelativaAire;

    public:

        // Constructores
        sensorHumedadAire();
        sensorHumedadAire(String^ categoria, String^ modelo, String^ estado, String^ nombre, int idSensor, int humedadRelativaAire);


        // Mtodos Getters y Setters para humedadActual
        int getHumedadRelativaAire();
        void setHumedadRelativaAire(int humedadRelativaAire);
    };

}