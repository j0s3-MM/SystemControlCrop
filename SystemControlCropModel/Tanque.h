#pragma once
#include "Componentes.h"

namespace SystemControlCropModel {

	using namespace System;

	ref class Tanque : Componentes {

	private:
		float volumen;
		float capacidadLitros;
		float porcentajeFertilizante;
		float nivelFluido;
		String^ fertilizante;
	public:
		Tanque();
		Tanque(int idComponente, float volumen, float  capacidadLitros, float porcentajeFertilizante, float nivelFluido, String^ fertilizante);

		float getVolumen();
		void setVolumen(float volumen);
		float getCapacidadLitros();
		void setCapacidadLitros(float capacidadLitros);
		float getPorcentajeFertilizante();
		void setPorcentajeFertilizante(float porcentajeFertilizante);
		float getNivelFluido();
		void setNivelFluido(float nivelFluido);
	};
}