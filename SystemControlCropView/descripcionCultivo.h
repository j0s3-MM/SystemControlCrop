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
	/// Resumen de descripcionCultivo
	/// </summary>
	public ref class descripcionCultivo : public System::Windows::Forms::Form
	{
	public:
		descripcionCultivo(void)
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
		~descripcionCultivo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtHA;
	private: System::Windows::Forms::TextBox^ txtHS;
	private: System::Windows::Forms::TextBox^ txtT;
	private: System::Windows::Forms::TextBox^ txtHL;
	protected:





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ Grabar;

	private: System::Windows::Forms::Button^ Salir;
	private: System::Windows::Forms::GroupBox^ Cultivo;


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
			this->txtHA = (gcnew System::Windows::Forms::TextBox());
			this->txtHS = (gcnew System::Windows::Forms::TextBox());
			this->txtT = (gcnew System::Windows::Forms::TextBox());
			this->txtHL = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Grabar = (gcnew System::Windows::Forms::Button());
			this->Salir = (gcnew System::Windows::Forms::Button());
			this->Cultivo = (gcnew System::Windows::Forms::GroupBox());
			this->Cultivo->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(165, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Requerimiento De Cultivo";
			// 
			// txtHA
			// 
			this->txtHA->Location = System::Drawing::Point(234, 147);
			this->txtHA->Name = L"txtHA";
			this->txtHA->Size = System::Drawing::Size(211, 26);
			this->txtHA->TabIndex = 1;
			// 
			// txtHS
			// 
			this->txtHS->Location = System::Drawing::Point(234, 224);
			this->txtHS->Name = L"txtHS";
			this->txtHS->Size = System::Drawing::Size(211, 26);
			this->txtHS->TabIndex = 2;
			// 
			// txtT
			// 
			this->txtT->Location = System::Drawing::Point(234, 306);
			this->txtT->Name = L"txtT";
			this->txtT->Size = System::Drawing::Size(211, 26);
			this->txtT->TabIndex = 3;
			this->txtT->TextChanged += gcnew System::EventHandler(this, &descripcionCultivo::textBox3_TextChanged);
			// 
			// txtHL
			// 
			this->txtHL->Location = System::Drawing::Point(234, 401);
			this->txtHL->Name = L"txtHL";
			this->txtHL->Size = System::Drawing::Size(211, 26);
			this->txtHL->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Humedad del Aire:";
			this->label2->Click += gcnew System::EventHandler(this, &descripcionCultivo::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 224);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Humedad del Suelo: ";
			this->label3->Click += gcnew System::EventHandler(this, &descripcionCultivo::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(37, 309);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Temperatura";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(37, 404);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Horas luz";
			// 
			// Grabar
			// 
			this->Grabar->Location = System::Drawing::Point(156, 492);
			this->Grabar->Name = L"Grabar";
			this->Grabar->Size = System::Drawing::Size(82, 37);
			this->Grabar->TabIndex = 10;
			this->Grabar->Text = L"Grabar";
			this->Grabar->UseVisualStyleBackColor = true;
			this->Grabar->Click += gcnew System::EventHandler(this, &descripcionCultivo::Grabar_Click);
			// 
			// Salir
			// 
			this->Salir->Location = System::Drawing::Point(295, 492);
			this->Salir->Name = L"Salir";
			this->Salir->Size = System::Drawing::Size(89, 37);
			this->Salir->TabIndex = 11;
			this->Salir->Text = L"Salir";
			this->Salir->UseVisualStyleBackColor = true;
			this->Salir->Click += gcnew System::EventHandler(this, &descripcionCultivo::Salir_Click);
			// 
			// Cultivo
			// 
			this->Cultivo->Controls->Add(this->Salir);
			this->Cultivo->Controls->Add(this->Grabar);
			this->Cultivo->Controls->Add(this->label5);
			this->Cultivo->Controls->Add(this->label4);
			this->Cultivo->Controls->Add(this->label3);
			this->Cultivo->Controls->Add(this->label2);
			this->Cultivo->Controls->Add(this->txtHL);
			this->Cultivo->Controls->Add(this->txtT);
			this->Cultivo->Controls->Add(this->txtHS);
			this->Cultivo->Controls->Add(this->txtHA);
			this->Cultivo->Controls->Add(this->label1);
			this->Cultivo->Location = System::Drawing::Point(33, 32);
			this->Cultivo->Name = L"Cultivo";
			this->Cultivo->Size = System::Drawing::Size(502, 554);
			this->Cultivo->TabIndex = 12;
			this->Cultivo->TabStop = false;
			this->Cultivo->Text = L"cultivo";
			this->Cultivo->Enter += gcnew System::EventHandler(this, &descripcionCultivo::groupBox1_Enter);
			// 
			// descripcionCultivo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(599, 627);
			this->Controls->Add(this->Cultivo);
			this->Name = L"descripcionCultivo";
			this->Text = L"descripcionCultivo";
			this->Cultivo->ResumeLayout(false);
			this->Cultivo->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Salir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Grabar_Click(System::Object^ sender, System::EventArgs^ e) {
		int humedadAire = Convert::ToInt32(this->txtHA->Text);
		int humedadSuelo = Convert::ToInt32(this->txtHS->Text);
		int temperatura = Convert::ToInt32(this->txtT->Text);
		int horasLuz = Convert::ToInt32(this->txtHL->Text);


		CultivoController^ cultivoController = gcnew CultivoController();
		cultivoController->actualizarRequerimiento(humedadAire,humedadSuelo,temperatura, horasLuz);
		MessageBox::Show("La información de la hoa se ha actualizado", "Grabación Exitosa",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
