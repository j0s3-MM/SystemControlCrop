#pragma once
namespace SystemControlCropModel {

    using namespace System;
    ref class tuberia
    {
    protected:
        String^ material;

    public:

        // Constructores
        tuberia();
        tuberia(String^ material);

        // Mtodos Getters y Setters para material
        String^ getmaterial();
        void setmaterial(String^ material);
    };

}