#pragma once
namespace SystemControlCropModel {

	using namespace System;

	public ref class Dimensiones
	{

	protected:
		int altura;
		int ancho;
		int largo;

	public:

		Dimensiones();
		Dimensiones(int altura, int ancho, int largo);

		int getAltura();
		void setAltura(int altura);
		int getAncho();
		void setAncho(int ancho);
		int getLargo();
		void setLargo(int largo);

	};
}