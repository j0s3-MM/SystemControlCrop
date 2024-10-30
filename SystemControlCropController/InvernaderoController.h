#pragma once
namespace SystemControlCropController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SystemControlCropModel;

	public ref class InvernaderoController{
	public:
		InvernaderoController();

		List<invernadero^>^ buscarAll();
		List<invernadero^>^ buscarUbicacionxCultivo(String^ Ubicacionbuscar, String^ cultivobuscar);
		List<invernadero^>^ buscarId(int idLotebuscar );
		void agregarInvernadero(String^ ubicacion, String^ tipoDeSuelo, String^ cultivo, int IdLote, String^ Sustrato, int area);
		void escribirArchivo(List<invernadero^>^ listaInvernaderos);
		void eliminarInvernadero(int idLote);
		void InvernaderoController::editarInvernadero(String^ ubicacion, String^ tipoDeSuelo, String^ cultivo, int IdLote, String^ Sustrato, int area);
		invernadero^ buscarIdEditar(int idLote);



	};
}