#pragma once
#include "Invernadero.h"
#include "newUser.h"
#include "AccessAdmin.h"

namespace SystemControlCropView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace SystemControlCropController;
	using namespace SystemControlCropModel;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
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
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ acceder;
	private: System::Windows::Forms::Button^ registrarse;
	private: System::Windows::Forms::Button^ accesadmin;




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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->acceder = (gcnew System::Windows::Forms::Button());
			this->registrarse = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->accesadmin = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->acceder);
			this->groupBox1->Controls->Add(this->registrarse);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(443, 157);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(421, 393);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Login";
			// 
			// acceder
			// 
			this->acceder->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->acceder->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->acceder->Location = System::Drawing::Point(241, 298);
			this->acceder->Name = L"acceder";
			this->acceder->Size = System::Drawing::Size(103, 32);
			this->acceder->TabIndex = 5;
			this->acceder->Text = L"Acceder";
			this->acceder->UseVisualStyleBackColor = false;
			this->acceder->Click += gcnew System::EventHandler(this, &frmPrincipal::button2_Click);
			// 
			// registrarse
			// 
			this->registrarse->Location = System::Drawing::Point(72, 299);
			this->registrarse->Name = L"registrarse";
			this->registrarse->Size = System::Drawing::Size(103, 31);
			this->registrarse->TabIndex = 4;
			this->registrarse->Text = L"Registrarse";
			this->registrarse->UseVisualStyleBackColor = true;
			this->registrarse->Click += gcnew System::EventHandler(this, &frmPrincipal::registrarse_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(77, 207);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(267, 26);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(77, 98);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(267, 26);
			this->textBox1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(73, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Contraseña";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(73, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Usuario";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::IndianRed;
			this->label1->Location = System::Drawing::Point(511, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 82);
			this->label1->TabIndex = 1;
			this->label1->Text = L"TERRA";
			// 
			// accesadmin
			// 
			this->accesadmin->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->accesadmin->Location = System::Drawing::Point(528, 613);
			this->accesadmin->Name = L"accesadmin";
			this->accesadmin->Size = System::Drawing::Size(267, 28);
			this->accesadmin->TabIndex = 2;
			this->accesadmin->Text = L"Acceder Como Administrador";
			this->accesadmin->UseVisualStyleBackColor = true;
			this->accesadmin->Click += gcnew System::EventHandler(this, &frmPrincipal::accesadmin_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1531, 845);
			this->Controls->Add(this->accesadmin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmPrincipal";
			this->Text = L"frmPrincipal";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Invernadero^ ventanaInvernadero = gcnew Invernadero();
		ventanaInvernadero->Show();
	}
	private: System::Void registrarse_Click(System::Object^ sender, System::EventArgs^ e) {
		newUser^ ventanaRegistro = gcnew newUser();
		ventanaRegistro->Show();
		//String^ username = this->textBox1->Text;
		//String^ contrasena = this->textBox2->Text;
		//int verificado = verificarUser(username,contrasena);
		//if (verificado) {
		//	newUser^ ventanaRegistro = gcnew newUser();
		//	ventanaRegistro->Show();
		//}
		//else {
		//	MessageBox::Show("Acceso Denegado, Usuario no encontrado", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		//	return; // Salir del evento si no se encontro usuario registrado
		//}	
	}
	private: System::Void accesadmin_Click(System::Object^ sender, System::EventArgs^ e) {		
		AccessAdmin^ ventanaAdmin = gcnew AccessAdmin();
		ventanaAdmin->Show();
	}
};
}
