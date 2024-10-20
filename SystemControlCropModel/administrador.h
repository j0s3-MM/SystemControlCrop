#pragma once
#include "Usuario.h"
#include "Invernadero.h"
namespace SystemControlCropModel {

	using namespace System;

	ref class Administrador :Usuario
	{
	protected:
		invernadero^ invernaderos;

	public:
		Administrador();
		Administrador(int idPersona, String^ nombre, int edad, String^ genero, String^ contrasena, invernadero^ invernaderos);

		invernadero^ getInvernaderos();
		void setInvernaderos(invernadero^ invernaderos);
	};
}


