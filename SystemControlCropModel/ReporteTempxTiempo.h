#pragma once
namespace SystemControlCropModel {
	using namespace System;
	
	public ref class reporteTempxTiempo{
	private:
		int temperatura; 
		int tiempo;

	public:
		reporteTempxTiempo();
		reporteTempxTiempo(int temperatura, int tiempo);

		int getTemperatura();
		void setTempeatura(int temeperatura);

		int getTiempo();
		void setTiempo(int tiempo);

	};
		
}