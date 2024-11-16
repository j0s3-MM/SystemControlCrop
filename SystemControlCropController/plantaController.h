#pragma once
namespace SystemControlCropController {
	using namespace System;
	using namespace System::Data::SqlClient; /*Esta es la libreria que contiene al SqlConnection*/
	using namespace System::Collections::Generic;
	using namespace SystemControlCropModel;

	public ref class plantaController {
	private:
		SqlConnection^ objConexion;
	public:
		plantaController();
		void abrirConexion();
		void cerrarConexion();

		List<planta^>^ buscarAll();
		List<planta^>^ buscarPlantaxNombrexMadurez(String^ nombre, String^ madurez);
		List<planta^>^ buscarId(int id);
		void eliminarPlanta(int id);
		void agregarPlanta(String^ etapaMadurez, String^ estado, String^ tipoPlanta, String^ nombre);
		void editarPlanta(int id, String^ etapaMadurez, String^ estado, String^ tipoPlanta, String^ nombre);
		planta^ buscarIdEditar(int id);



	};
}