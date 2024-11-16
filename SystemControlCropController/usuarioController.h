#pragma once
namespace SystemControlCropController {
	using namespace System;
	using namespace System::Data::SqlClient; /*Esta es la libreria que contiene al SqlConnection*/
	using namespace System::Collections::Generic;
	using namespace SystemControlCropModel;

	public ref class UsuarioController {
		private:
			SqlConnection^ objConexion;

		public:
			UsuarioController();
			void abrirConexion();
			void cerrarConexion();
			int verificarUser(int DNI, String^ Contraseña);
			int Registrarse(int DNI, String^ Contraseña);
	};
}