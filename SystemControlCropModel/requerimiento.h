#pragma once
namespace SystemControlCropModel {

    using namespace System;
    public ref class Requerimiento
    {
    protected:
        int cantidadAgua;
        int humedadRequerida;
        int temperaturaIdeal;
        String^ tipoSuelo;
        int horasLuz;

    public:

        // Constructores
        Requerimiento();
        Requerimiento(int cantidadAgua, int humedadRequerida, int temperaturaIdeal, String^ tipoSuelo, int horasLuz);

        // Mtodos Getters y Setters para cantidadAgua
        int getcantidadAgua();
        void setcantidadAgua(int cantidadAgua);

        // Mtodos Getters y Setters para humedadRequerida
        int gethumedadRequerida();
        void sethumedadRequerida(int humedadRequerida);

        // Mtodos Getters y Setters para temperaturaIdeal
        int gettemperaturaIdeal();
        void settemperaturaIdeal(int temperaturaIdeal);

        // Mtodos Getters y Setters para tipoSuelo
        String^ gettipoSuelo();
        void settipoSuelo(String^ tipoSuelo);

        // Mtodos Getters y Setters para horasLuz
        int gethorasLuz();
        void sethorasLuz(int horasLuz);
    };
}