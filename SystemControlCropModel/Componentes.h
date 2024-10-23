#pragma once

namespace SystemControlCropModel {

	using namespace System;

	public ref class Componentes {
	private:
		int idComponente;
	public:
		Componentes();
		Componentes(int idComponente);

		int getIdComponente();
		void setIdComponente(int idComponente);
	};
}