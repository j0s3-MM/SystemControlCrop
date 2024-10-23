#pragma once
#include "Usuario.h"

namespace SystemControlCropModel {

	using namespace System;

	public ref class observador : Usuario {
	private:
		String^ cargo;

	public:
		observador();
		observador(int idPersona, String^ nombre, int edad, String^ genero, String^ contrasena, String^ cargo);

		String^ getCargo();
		void setCargo(String^ cargo);
	};
}