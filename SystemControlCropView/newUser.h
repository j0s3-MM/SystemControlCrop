#pragma once

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
	/// Resumen de newUser
	/// </summary>
	public ref class newUser : public System::Windows::Forms::Form
	{
	public:
		newUser(void)
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
		~newUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ edad;
	private: System::Windows::Forms::TextBox^ contraseña;



	private: System::Windows::Forms::TextBox^ nombre;
	private: System::Windows::Forms::TextBox^ txtdni;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ genero;


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
			this->genero = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->edad = (gcnew System::Windows::Forms::TextBox());
			this->contraseña = (gcnew System::Windows::Forms::TextBox());
			this->nombre = (gcnew System::Windows::Forms::TextBox());
			this->txtdni = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->genero);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->edad);
			this->groupBox1->Controls->Add(this->contraseña);
			this->groupBox1->Controls->Add(this->nombre);
			this->groupBox1->Controls->Add(this->txtdni);
			this->groupBox1->Location = System::Drawing::Point(281, 83);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(593, 486);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Registro";
			// 
			// genero
			// 
			this->genero->FormattingEnabled = true;
			this->genero->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Masculino", L"Femenino" });
			this->genero->Location = System::Drawing::Point(396, 176);
			this->genero->Name = L"genero";
			this->genero->Size = System::Drawing::Size(154, 28);
			this->genero->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(240, 388);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 37);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Registrar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &newUser::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(331, 179);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Sexo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(331, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Edad";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(50, 283);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Contraseña";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"DNI";
			this->label2->Click += gcnew System::EventHandler(this, &newUser::label2_Click);
			// 
			// edad
			// 
			this->edad->Location = System::Drawing::Point(396, 88);
			this->edad->Name = L"edad";
			this->edad->Size = System::Drawing::Size(154, 26);
			this->edad->TabIndex = 3;
			// 
			// contraseña
			// 
			this->contraseña->Location = System::Drawing::Point(148, 283);
			this->contraseña->Name = L"contraseña";
			this->contraseña->Size = System::Drawing::Size(146, 26);
			this->contraseña->TabIndex = 2;
			// 
			// nombre
			// 
			this->nombre->Location = System::Drawing::Point(148, 176);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(146, 26);
			this->nombre->TabIndex = 1;
			// 
			// txtdni
			// 
			this->txtdni->Location = System::Drawing::Point(148, 85);
			this->txtdni->Name = L"txtdni";
			this->txtdni->Size = System::Drawing::Size(146, 26);
			this->txtdni->TabIndex = 0;
			// 
			// newUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1147, 671);
			this->Controls->Add(this->groupBox1);
			this->Name = L"newUser";
			this->Text = L"newUser";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int idPersona = Convert::ToInt64(this->txtdni->Text);
		UsuarioController^ usuarioController = gcnew  UsuarioController();
		List<Usuario^>^ listaUsuarios = usuarioController->buscarXdni(idPersona);
		if (listaUsuarios->Count == 0) {
			int idPersona = Convert::ToInt64(this->txtdni->Text);
			String^ nombre = this->nombre->Text;
			int edad = Convert::ToInt64(this->edad->Text);
			String^ sexo = this->genero->Text;
			String^ contraseña = this->contraseña->Text;
			usuarioController->newUser(idPersona, nombre, edad, sexo, contraseña);
			MessageBox::Show("El usuario ha sido registrado con exito");
		}
		else {

			MessageBox::Show("el DNI del usuario ya esta registrado");
		}
	}
};
}
