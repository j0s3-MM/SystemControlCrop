#pragma once

namespace SystemControlCropModel {

	using namespace System;

	ref class Usuario {
	private:
		int idPersona;
		String^ nombre;
		int edad;
		String^ genero;
		String^ contrasena;

	public:
		Usuario();
		Usuario(int idPersona, String^ nombre, int edad, String^ genero, String^ contrasena);

		int getIdPersona();
		void setIdPersona(int idPersona);

		String^ getNombre();
		void setNombre(String^ nombre);

		int getEdad();
		void setEdad(int edad);

		String^ getGenero();
		void setGenero(String^ genero);

		String^ getContrasena();
		void setContrasena(String^ contrasena);
	};
}