#pragma once
#include "dimensiones.h"
#include "Componentes.h"
namespace SystemControlCropModel {

	using namespace System;
	using namespace System::Collections::Generic;

	ref class invernadero {
	private:
		String^ ubicacion;
		String^ tipoDeSuelo;
		String^ cultivo;
		int IdLote;
		int SuperficieSustrato;
		Dimensiones^ dimensiones;
		List<Componentes^>^ listaComponentes;

	public:
		invernadero();
		invernadero(String^ ubicacion, String^ tipoDeSuelo, String^ cultivo, int IdLote, int SuperficieSustrato, Dimensiones^ dimensiones, List<Componentes^>^ listaComponentes);

		String^ getUbicacion();
		void setUbicacion(String^ ubicacion);
		String^ getTipoDeSuelo();
		void setTipoDeSuelo(String^ tipoDeSuelo);
		String^ getCultivo();
		void setCultivo(String^ cultivo);
		int getIdLote();
		void setIdLote(int IdLote);
		int getSuperficieSustrato();
		void setSuperficieSustrato(int SuperficieSustrato);
		Dimensiones^ getDimensiones();
		void setDimensiones(Dimensiones^ dimensiones);
		List<Componentes^>^ getListaComponentes();
		void setListaComponentes(List<Componentes^>^ listaComponentes);

	};


}