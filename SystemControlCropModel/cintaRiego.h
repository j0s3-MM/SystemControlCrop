#pragma once
#include "Componentes.h"

namespace SystemControlCropModel {

	using namespace System;

	ref class CintaRiego : Componentes {
	private:
		int numObstrucciones;
		int longitud;
	public:
		CintaRiego();
		CintaRiego(int idComponente, int numObstrucciones, int longitud);

		int getNumObstrucciones();
		void setNumObstrucciones(int numObstrucciones);
		int getLongitud();
		void getLongitud(int longitud);


	};
}