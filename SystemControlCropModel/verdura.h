#pragma once
#include "planta.h"
namespace SystemControlCropModel {

    using namespace System;
    public ref class Verdura :planta
    {
    protected:
        String^ tipoVerdura;
        String^ nombreVerdura;
        String^ maduro;

    public:

        // Constructores
        Verdura();
        Verdura(int idplanta, String^ faseCrecimiento, String^ tipoRiego, String^ tiempoCosecha, String^ etapaMadurez, List<Requerimiento^>^ listaRequerimientos, String^ tipoVerdura, String^ nombreVerdura, String^ maduro);

        // Mtodos Getters y Setters para tipoVerdura
        String^ gettipoVerdura();
        void settipoVerdura(String^ tipoVerdura);

        // Mtodos Getters y Setters para nombreVerdura
        String^ getnombreVerdura();
        void setnombreVerdura(String^ nombreVerdura);

        // Mtodos Getters y Setters para maduro
        String^ getmaduro();
        void setmaduro(String^ maduro);
    };

}