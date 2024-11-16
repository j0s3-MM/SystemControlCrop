#pragma once
#include "planta.h"
namespace SystemControlCropModel {

	using namespace System;

	public ref class Sensor
	{
	protected:

		String^ categoria;
		//planta^ plantas;
		String^ estado;
		String^ nombre;
		String^ modelo;
		int idSensor;

	public:

		Sensor();
		Sensor(String^ categoria, String^ modelo, String^ estado, String^ nombre, int idSensor);

		String^ getModelo();
		void setModelo(String^ proposito);

		String^ getNombre();
		void setNombre(String^ nombre);

		String^ getcategoria();
		void setcategoria(String^ proposito);

		//planta^ getPlanta();
		//void setPlanta(planta^ planta);

		String^ getEstado();
		void setEstado(String^ estado);

		int getId();
		void setId(int idSensor);
	};

}