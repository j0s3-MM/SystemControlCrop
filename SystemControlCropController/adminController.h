#pragma once
namespace SystemControlCropController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SystemControlCropModel;

	public ref class adminController {
	public:
		adminController();
		int verificarKeypass(String^ keypass);
	};
}