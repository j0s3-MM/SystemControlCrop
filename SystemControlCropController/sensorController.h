#pragma once

namespace SystemControlCropController {
	using namespace System;
	using namespace System::Data::SqlClient; /*Esta es la libreria que contiene al SqlConnection*/
	using namespace System::Collections::Generic;
	using namespace SystemControlCropModel;

	public ref class SensorController {
	private:
		SqlConnection^ objConexion;
	public:
		SensorController();
		void abrirConexion();
		void cerrarConexion();

		List<Sensor^>^ buscarId(int id);
		List<Sensor^>^ buscarSensoresxCategoriaxEstado(String^ categoria, String^ estado);
		List<Sensor^>^ buscarAll();



		void agregarSensor( String^ modelo, String^ categoria, String^ nombre, String^ estado);
		void eliminarSensor(int id);
		void editarSensor(int id, String^ modelo, String^ categoria, String^ nombre, String^ estado);
		Sensor^ buscarIdEditar(int id);



	};
}