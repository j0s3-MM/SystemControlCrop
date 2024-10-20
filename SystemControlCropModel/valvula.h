#pragma once
#include "actuador.h"
namespace SystemControlCropModel {

	using namespace System;

	ref class valvula:actuador
	{
	private:
		String^ material;

	public:
		valvula();
		valvula(String^ estado, int duracion, int cantidad, int potenciaConsumida, String^ material);

		String^ getMaterial();
		void setMaterial(String^ material);
	};
}
