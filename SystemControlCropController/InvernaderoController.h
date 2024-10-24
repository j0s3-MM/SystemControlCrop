#pragma once
namespace SystemControlCropController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SystemControlCropModel;

	public ref class InvernaderoController{
	public:
		InvernaderoController();
		int buscarInvernaderos(String^ id, String^ cultivo, String^ ubicacion);
		void editarInvernadero(String^ ubicacion, String^ suelo, String^ cultivo, int idlote, String^ sustrato, int area);
		invernadero^ buscarIdEditar(int idlote);

	};
}