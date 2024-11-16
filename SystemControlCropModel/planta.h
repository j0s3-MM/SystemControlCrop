#pragma once
#include "requerimiento.h"
namespace SystemControlCropModel {

    using namespace System;
    using namespace System::Collections::Generic;
    public ref class planta
    {
    protected:
        int idplanta;
        String^ etapaMadurez;
        String^ tipoPlanta;
        String^ nombre;
        String^ estado;
        Requerimiento^ Requerimientos;

    public:

        // Constructores
        planta();
        planta(int idplanta, String^ etapaMadurez, String^ tipoPlanta, String^ nombre, String^ estado);

        //Requerimiento^ Requerimientos

        // Mtodos Getters y Setters para idplanta
        int getidplanta();
        void setidplanta(int idplanta);


        // mtodos Getters y Setters para etapaMadurez
        String^ getetapaMadurez();
        void setetapaMadurez(String^ etapaMadurez);

        String^ getEstado();
        void setEstado(String^ estado);


        String^ getNombre();
        void setNombre(String^ nombre);

        String^ getTipoPlanta();
        void setTipoPlanta(String^ tipoPlanta);

        Requerimiento^ getRequerimientos();
        void setRequerimientos(Requerimiento^ Requerimientos);
    };

}