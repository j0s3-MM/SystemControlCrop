#pragma once
#include "actuador.h"
#include "Sensor.h"

namespace SystemControlCropModel {
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class microcontrolador {
	protected:
		List<Sensor^>^ listasensores;
		List<actuador^>^ listactuadores;


	public:
		microcontrolador();
		microcontrolador(List<Sensor^>^ listasensores, List<actuador^>^ listactuadores);

		List<actuador^>^ getlistactuadores();
		void setlistadeactuadores(List<actuador^>^ listactuadores);


		List<Sensor^>^ getlistasensores();
		void setlistasensores(List<Sensor^>^ listactuadores);
	};
}