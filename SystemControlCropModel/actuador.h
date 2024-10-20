#pragma once
namespace SystemControlCropModel {

    using namespace System;

    ref class actuador
    {
    private:
        String^ estado;
        String^ estado2;
        String^ estado398767678585;
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