#pragma once
#include "requerimiento.h"
namespace SystemControlCropModel {

    using namespace System;
    using namespace System::Collections::Generic;
    public ref class planta
    {
    protected:
        int idplanta;
        String^ faseCrecimiento;
        String^ tipoRiego;
        String^ tiempoCosecha;
        String^ etapaMadurez;
        List<Requerimiento^>^ listaRequerimientos;

    public:

        // Constructores
        planta();
        planta(int idplanta, String^ faseCrecimiento, String^ tipoRiego, String^ tiempoCosecha, String^ etapaMadurez, List<Requerimiento^>^ listaRequerimientos);

        // Mtodos Getters y Setters para idplanta
        int getidplanta();
        void setidplanta(int idplanta);

        // Mtodos Getters y Setters para faseCrecimiento
        String^ getfaseCrecimiento();
        void setfaseCrecimiento(String^ faseCrecimiento);

        // Mtodos Getters y Setters para tipoRiego
        String^ gettipoRiego();
        void settipoRiego(String^ tipoRiego);

        // Mtodos Getters y Setters para tiempoCosecha
        String^ gettiempoCosecha();
        void settiempoCosecha(String^ tiempoCosecha);

        // mtodos Getters y Setters para etapaMadurez
        String^ getetapaMadurez();
        void setetapaMadurez(String^ etapaMadurez);

        List<Requerimiento^>^ getListaRequerimientos();
        void setListaRequerimientos(List<Requerimiento^>^ listaRequerimientos);
    };

}