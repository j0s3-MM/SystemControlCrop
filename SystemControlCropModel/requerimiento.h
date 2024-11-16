#pragma once
namespace SystemControlCropModel {

    using namespace System;
    public ref class Requerimiento
    {
    protected:
        int humedadIdealAire;
        int humedadIdealSuelo;
        int temperaturaIdeal;
        int horasLuz;

    public:

        // Constructores
        Requerimiento();
        Requerimiento(int humedadIdealAire, int humedadIdealSuelo, int temperaturaIdeal, int horasLuz);

        // Mtodos Getters y Setters para 
        int getHumedadIdealAire();
        void setHumedadIdealAire(int humedadIdealAire);

        // Mtodos Getters y Setters para 
        int getHumedadIdealSuelo();
        void setHumedadIdealSuelo(int humedadIdealSuelo);

        // Mtodos Getters y Setters para temperaturaIdeal
        int getTemperaturaIdeal();
        void setTemperaturaIdeal(int temperaturaIdeal);

        // Mtodos Getters y Setters para horasLuz
        int getHorasLuz();
        void setHorasLuz(int horasLuz);
    };
}