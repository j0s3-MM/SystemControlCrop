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

		int setAltura();
		void getAltura(int altura);
		int setAncho();
		void getAncho(int ancho);
		int setLargo();
		void getLargo(int largo);

	};
}