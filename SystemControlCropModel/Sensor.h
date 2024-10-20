#pragma once
#include "planta.h"
namespace SystemControlCropModel {

	using namespace System;

	ref class Sensor
	{
	protected:

		String^ categoria;
		double valorActual;
		int frecuencia;
		int voltajeOperacion;
		String^ fechaInstalacion;
		String^ proposito;
		planta^ plantas;


	public:

		Sensor();
		Sensor(String^ categoria, double valorActual, int frecuencia, int voltajeOperacion, String^ fechaInstalacion, String^ proposito, planta^ plantas);


		double getvalorActual();
		void setvalorActual(double valorActual);

		int getfrecuencia();
		void setfrecuencia(int frecuencia);

		int getvoltajeOperacion();
		void setvoltajeOperacion(int voltajeOperacion);

		String^ getfechaInstalacion();
		void setfechaInstalacion(String^ fechaInstalacion);

		String^ getproposito();
		void setproposito(String^ proposito);

		String^ getcategoria();
		void setcategoria(String^ proposito);

		planta^ getPlanta();
		void setPlanta(planta^ planta);
	};

}