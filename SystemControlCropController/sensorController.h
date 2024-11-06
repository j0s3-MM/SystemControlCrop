#pragma once

namespace SystemControlCropController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SystemControlCropModel;

	public ref class SensorController {
	public:
		SensorController();

		List<Sensor^>^ buscarAll();
		List<Sensor^>^ buscarCategoria(String^categoriaBuscar);
		List<Sensor^>^ buscarId(int idLotebuscar);
		void agregarSensor(int IdSensor, String^ categoria, String^ Estado);
		void escribirArchivo(List<Sensor^>^ listaSensores);
		void eliminarSensor(int idBuscar);
		void SensorController::editarSensor(int IdLote, String^ categoria, String^ Estado);
		Sensor^ buscarIdEditar(int idLote);



	};
}