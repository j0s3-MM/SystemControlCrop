#pragma once

namespace SystemControlCropController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SystemControlCropModel;

	public ref class CultivoController{
	public:
		CultivoController();
		void actualizarRequerimiento(int humedadAire, int humedadSuelo, int temperatura, int horasLuz);
	};
}