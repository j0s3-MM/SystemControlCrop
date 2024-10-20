#pragma once
#include "Sensor.h"
namespace SystemControlCropModel {

    using namespace System;
    ref class sensorHumedad :Sensor
    {
    protected:
        int idSensor;
        int humedadActual;
        bool estadoUmbral;
        int configResistencia;
        int humedadLimite;
        String^ tipoSalida;

    public:

        // Constructores
        sensorHumedad();
        sensorHumedad(String^ categoria, double valorActual, int frecuencia, int voltajeOperacion, String^ fechaInstalacion, String^ proposito, planta^ plantas, int idSensor, int humedadActual, bool estadoUmbral, int configResistencia, int humedadLimite, String^ tipoSalida);

        // Mtodos Getters y Setters para idSensor
        int getidSensor();
        void setidSensor(int idSensor);

        // Mtodos Getters y Setters para humedadActual
        int gethumedadActual();
        void sethumedadActual(int humedadActual);

        // Mtodos Getters y Setters para estadoUmbral
        bool getestadoUmbral();
        void setestadoUmbral(bool estadoUmbral);

        // Mtodos Getters y Setters para configResistencia
        int getconfigResistencia();
        void setconfigResistencia(int configResistencia);

        // Mtodos Getters y Setters para humedadLimite
        int gethumedadLimite();
        void sethumedadLimite(int humedadLimite);

        // Mtodos Getters y Setters para tipoSalida
        String^ gettipoSalida();
        void settipoSalida(String^ tipoSalida);
    };

}