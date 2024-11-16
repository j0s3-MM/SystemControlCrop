#pragma once
#include "dimensiones.h"
#include "planta.h"
namespace SystemControlCropModel {
	// test1
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class invernadero {
	private:
		String^ ubicacion; //paint
		List<planta^>^ listaPlantas; 
		int densidad; //paint
		Dimensiones^ dimensiones; //paint 3d mostrando las dimensioens
	


	public:
		invernadero();
		invernadero(String^ ubicacion, int densidad, Dimensiones^ dimensiones);

		String^ getUbicacion();
		void setUbicacion(String^ ubicacion);

		int getDensidad();
		void setDensidad(int densidad);

		Dimensiones^ getDimensiones();
		void setDimensiones(Dimensiones^ dimensiones);


		/*List<planta^>^ getListaPlanta();
		void setListaPlanta(List<planta^>^ listaPlantas);*/
	};


}