#pragma once
#include "editAdminInvernadero.h"

namespace SystemControlCropView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SystemControlCropController;
	using namespace SystemControlCropModel;

	/// <summary>
	/// Resumen de AccessAdmin
	/// </summary>
	public ref class AccessAdmin : public System::Windows::Forms::Form
	{
	public:
		AccessAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AccessAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(150, 123);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Keypass";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(264, 123);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 26);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(243, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AccessAdmin::button1_Click);
			// 
			// AccessAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 312);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"AccessAdmin";
			this->Text = L"AccessAdmin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e){
		String^ keypass = this->textBox1->Text;
		int verificado = 0;
		adminController^ AdminController = gcnew adminController();
		verificado = AdminController->verificarKeypass(keypass);
		if (verificado) {
			editAdminInvernadero^ ventanaAdminInvernadero = gcnew editAdminInvernadero();
			ventanaAdminInvernadero->Show();
		}
		else {
			MessageBox::Show("Acceso Denegado, Usuario no encontrado", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return; // Salir del evento si no se encontro usuario registrado
		}
	}
	};
}
