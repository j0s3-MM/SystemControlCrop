#pragma once
namespace SystemControlCropController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SystemControlCropModel;

	public ref class UsuarioController {
		public:
			UsuarioController();
			int verificarUser(String^ usernanme, String^ contrasena);
			void newUser(int idPersona, String^ nombre, int edad, String^ sexo, String^ contraseña);
			void escribirArchivo(List<Usuario^>^ listaUsuarios);
			List<Usuario^>^ buscarAll();
			List<Usuario^>^ buscarXdni(int idPersonabuscado);
	};
}