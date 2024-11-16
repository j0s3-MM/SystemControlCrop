#pragma once
#include "invernadero.h"
namespace SystemControlCropModel {

	using namespace System;

	public ref class Usuario
	{
	protected:
		int idPersona; //DNI
		String^ nombre;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		int edad;
		String^ genero;
		String^ cargo;
		String^ contraseña;
		invernadero^ invernaderos;
	public:
		Usuario();
		Usuario(int idPersona, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, int edad, String^ genero, String^ cargo, String^ contraseña, invernadero^ invernaderos);

		int getidpersona();
		void setidpersona(int idPersona);

		String^ getNombre();
		void setNombre(String^ nombre);

		String^ getApellidoPaterno();
		void setApellidoPaterno(String^ apellidoPaterno);

		String^ getApellidoMaterno();
		void setApellidoMaterno(String^ apellidoMaterno);

		int getEdad();
		void setEdad(int edad);

		String^ getGenero();
		void setGenero(String^ genero);

		String^ getCargo();
		void setCargo(String^ cargo);

		String^ getContraseña();
		void setContraseña(String^ contraseña);


		invernadero^ getInvernadero();
		void setInvernadero(invernadero^ invernaderos);
	};
}


