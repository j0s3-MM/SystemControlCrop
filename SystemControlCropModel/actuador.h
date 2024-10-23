#pragma once
namespace SystemControlCropModel {

    using namespace System;

    public ref class actuador
    {
    private:
        String^ estado;
        int prueba2;
        int duracion;
        int cantidad;
        int potenciaConsumida;

    public:

        // Constructores
        actuador();
        actuador(String^ estado, int duracion, int cantidad, int potenciaConsumida);

        // Mtodos Getters y Setters para estado
        String^ getestado();
        void setestado(String^ estado);

        // Mtodos Getters y Setters para duracion
        int getduracion();
        void setduracion(int duracion);

        // Mtodos Getters y Setters para cantidad
        int getcantidad();
        void setcantidad(int cantidad);

        // Mtodos Getters y Setters para potenciaConsumida
        int getpotenciaConsumida();
        void setpotenciaConsumida(int potenciaConsumida);
    };

}