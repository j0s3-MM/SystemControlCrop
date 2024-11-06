#pragma once
namespace SystemControlCropController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SystemControlCropModel;
	public ref class ReporteConsumoAguaxInvernaderoController {
		public:
			ReporteConsumoAguaxInvernaderoController();
			List<GrafConsumoAguaXInvernadero^>^ generarReporte();
	};
}