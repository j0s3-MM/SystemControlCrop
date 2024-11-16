#pragma once
namespace SystemControlCropModel {

	using namespace System;

	public ref class estadistica
	{

	protected:
		String^ dato;
		String^ tipoDato;

	public:

		estadistica();
		estadistica(String^ dato, String^ tipoDato);
		String^ getDato();
		void setDato(String^ dato);
		String^ getTipoDato();
		void setTipoDato(String^ tipoDato);
	};
}