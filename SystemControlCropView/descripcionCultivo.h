#pragma once

namespace SystemControlCropView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~descripcionCultivo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ Grabar;

	private: System::Windows::Forms::Button^ Salir;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Grabar = (gcnew System::Windows::Forms::Button());
			this->Salir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(418, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Requerimiento De Cultivo";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(487, 187);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(211, 26);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(487, 264);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(211, 26);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(487, 346);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(211, 26);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(487, 441);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(211, 26);
			this->textBox4->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(326, 187);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Volumen de agua";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(326, 264);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Humedad Ideal";
			this->label3->Click += gcnew System::EventHandler(this, &descripcionCultivo::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(326, 352);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Temperatura Ideal";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(326, 447);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Horas luz";
			// 
			// Grabar
			// 
			this->Grabar->Location = System::Drawing::Point(409, 532);
			this->Grabar->Name = L"Grabar";
			this->Grabar->Size = System::Drawing::Size(75, 37);
			this->Grabar->TabIndex = 10;
			this->Grabar->Text = L"Grabar";
			this->Grabar->UseVisualStyleBackColor = true;
			// 
			// Salir
			// 
			this->Salir->Location = System::Drawing::Point(548, 532);
			this->Salir->Name = L"Salir";
			this->Salir->Size = System::Drawing::Size(75, 37);
			this->Salir->TabIndex = 11;
			this->Salir->Text = L"Salir";
			this->Salir->UseVisualStyleBackColor = true;
			// 
			// descripcionCultivo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1062, 726);
			this->Controls->Add(this->Salir);
			this->Controls->Add(this->Grabar);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"descripcionCultivo";
			this->Text = L"descripcionCultivo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
