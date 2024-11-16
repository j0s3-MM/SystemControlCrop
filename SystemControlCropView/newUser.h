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



	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label2;






	private: System::Windows::Forms::TextBox^ txtdni;



	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::TextBox^ txtContraseña;


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
			this->txtContraseña = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtdni = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtContraseña);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txtdni);
			this->groupBox1->Location = System::Drawing::Point(72, 83);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(999, 486);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Registro";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &newUser::groupBox1_Enter);
			// 
			// txtContraseña
			// 
			this->txtContraseña->Location = System::Drawing::Point(496, 259);
			this->txtContraseña->Name = L"txtContraseña";
			this->txtContraseña->Size = System::Drawing::Size(154, 26);
			this->txtContraseña->TabIndex = 19;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(529, 385);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 37);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &newUser::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(360, 385);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 37);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Registrar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &newUser::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(356, 259);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Contraseña";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(356, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"DNI";
			this->label2->Click += gcnew System::EventHandler(this, &newUser::label2_Click);
			// 
			// txtdni
			// 
			this->txtdni->Location = System::Drawing::Point(504, 157);
			this->txtdni->Name = L"txtdni";
			this->txtdni->Size = System::Drawing::Size(146, 26);
			this->txtdni->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(474, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(135, 20);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Inserte sus Datos";
			// 
			// newUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1147, 671);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->groupBox1);
			this->Name = L"newUser";
			this->Text = L"newUser";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int username = Convert::ToInt64(this->txtdni->Text);
		String^ password = this->txtContraseña->Text;
		UsuarioController^ usuarioController = gcnew UsuarioController();
		int validado = usuarioController->Registrarse(username, password);
		if (validado) {

			MessageBox::Show("El usuario ha sido registrado con exito");
		}
		else {

			MessageBox::Show("No se encontraron usuarios con ese username y contraseña");
		}
		}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
