#pragma once
#include "sensor.h"
namespace SystemControlCropModel {

    using namespace System;
    public ref class sensorTemperatura :Sensor
    {
    protected:
        String^ rangopOperacion;
        double voltajeSalida;
        int idSensor;
        int factorConversion;

    public:

        // Constructores
        sensorTemperatura();
        sensorTemperatura(String^ categoria, double valorActual, int frecuencia, int voltajeOperacion, String^ fechaInstalacion, String^ proposito, planta^ plantas, String^ rangopOperacion, double voltajeSalida, int idSensor, int factorConversion);

        // Mtodos Getters y Setters para rangopOperacion
        String^ getrangopOperacion();
        void setrangopOperacion(String^ rangopOperacion);

        // Mtodos Getters y Setters para voltajeSalida
        double getvoltajeSalida();
        void setvoltajeSalida(double voltajeSalida);

        // Mtodos Getters y Setters para idSensor
        int getidSensor();
        void setidSensor(int idSensor);

        // Mtodos Getters y Setters para factorConversion
        int getfactorConversion();
        void setfactorConversion(int factorConversion);
    };

}