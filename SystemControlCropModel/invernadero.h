#pragma once
#include "dimensiones.h"
#include "Componentes.h"
namespace SystemControlCropModel {
	// test1
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class invernadero {
	private:
		String^ ubicacion;
		String^ tipoDeSuelo;
		String^ cultivo;
		int IdLote;
		String^ Sustrato;
		int area;
		Dimensiones^ dimensiones;
		List<Componentes^>^ listaComponentes;

	public:
		invernadero();
		invernadero(String^ ubicacion, String^ tipoDeSuelo, String^ cultivo, int IdLote, String^ Sustrato, int area, Dimensiones^ dimensiones, List<Componentes^>^ listaComponentes);

		String^ getUbicacion();
		void setUbicacion(String^ ubicacion);
		String^ getTipoDeSuelo();
		void setTipoDeSuelo(String^ tipoDeSuelo);
		String^ getCultivo();
		void setCultivo(String^ cultivo);
		int getIdLote();
		void setIdLote(int IdLote);
		String^ getSustrato();
		void setSustrato(String^ Sustrato);
		int getArea();
		void setArea(int area);


		Dimensiones^ getDimensiones();
		void setDimensiones(Dimensiones^ dimensiones);
		List<Componentes^>^ getListaComponentes();
		void setListaComponentes(List<Componentes^>^ listaComponentes);

	};


}