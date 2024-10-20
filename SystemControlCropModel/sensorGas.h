#pragma once
#include "Sensor.h"
namespace SystemControlCropModel {

    using namespace System;
    ref class sensorGas :Sensor
    {
    protected:
        double resistencia;
        int temperaturaOperacion;
        int humedadOperacion;
        int tiempoCalentamiento;
        String^ rangoDeteccion;
        String^ gasDeteccion;

    public:

        // Constructores
        sensorGas();
        sensorGas(String^ categoria, double valorActual, int frecuencia, int voltajeOperacion, String^ fechaInstalacion, String^ proposito, planta^ plantas, double resistencia, int temperaturaOperacion, int humedadOperacion, int tiempoCalentamiento, String^ rangoDeteccion, String^ gasDeteccion);

        // Mtodos Getters y Setters para resistencia
        double getresistencia();
        void setresistencia(double resistencia);

        // Mtodos Getters y Setters para temperaturaOperacion
        int gettemperaturaOperacion();
        void settemperaturaOperacion(int temperaturaOperacion);

        // Mtodos Getters y Setters para humedadOperacion
        int gethumedadOperacion();
        void sethumedadOperacion(int humedadOperacion);

        // Mtodos Getters y Setters para tiempoCalentamiento
        int gettiempoCalentamiento();
        void settiempoCalentamiento(int tiempoCalentamiento);

        // Mtodos Getters y Setters para rangoDeteccion
        String^ getrangoDeteccion();
        void setrangoDeteccion(String^ rangoDeteccion);

        // Mtodos Getters y Setters para gasDeteccion
        String^ getgasDeteccion();
        void setgasDeteccion(String^ gasDeteccion);
    };

}


