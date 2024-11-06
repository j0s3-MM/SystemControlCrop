#pragma once

namespace SystemControlCropModel {
	using namespace System;

	public ref class GrafConsumoAguaXInvernadero {
		private:
			String^ invernadero;
			int consumoAgua;

		public:
			GrafConsumoAguaXInvernadero();
			GrafConsumoAguaXInvernadero(String^ invernadero, int consumoAgua);

			int getConsumoAgua();
			void setConsumoAgua(int consumoAgua);

			String^ getInvernadero();
			void setInvernadero(String^ invernadero);

	};


}