#pragma once
namespace SystemControlCropCcontroller {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SystemControlCropModel;

	public ref class UsuarioController {
		public:
			UsuarioController();
			int verificarUser(String^ usernanme, String^ contrasena);
	};
}