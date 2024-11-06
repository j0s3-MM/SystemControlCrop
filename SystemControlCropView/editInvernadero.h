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
	/// Resumen de editInvernadero
	/// </summary>
	public ref class editInvernadero : public System::Windows::Forms::Form
	{
	private: 
		invernadero^ objInvernadero; 
	public:
		editInvernadero(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		editInvernadero(invernadero^ objInvernadero)
		{
			InitializeComponent();
			this->objInvernadero = objInvernadero;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~editInvernadero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textUbicacion;

	private: System::Windows::Forms::TextBox^ textSuelo;
	private: System::Windows::Forms::TextBox^ textCultivo;
	private: System::Windows::Forms::TextBox^ textId;
	private: System::Windows::Forms::TextBox^ textSustrato;





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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textUbicacion = (gcnew System::Windows::Forms::TextBox());
			this->textSuelo = (gcnew System::Windows::Forms::TextBox());
			this->textCultivo = (gcnew System::Windows::Forms::TextBox());
			this->textId = (gcnew System::Windows::Forms::TextBox());
			this->textSustrato = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(400, 111);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Editar Propiedades";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(291, 194);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ubicacion";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(291, 265);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Suelo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(291, 331);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Cultivo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(291, 405);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Idlote";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(291, 484);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Sustrato";
			// 
			// textUbicacion
			// 
			this->textUbicacion->Location = System::Drawing::Point(467, 191);
			this->textUbicacion->Name = L"textUbicacion";
			this->textUbicacion->Size = System::Drawing::Size(173, 26);
			this->textUbicacion->TabIndex = 6;
			// 
			// textSuelo
			// 
			this->textSuelo->Location = System::Drawing::Point(467, 262);
			this->textSuelo->Name = L"textSuelo";
			this->textSuelo->Size = System::Drawing::Size(173, 26);
			this->textSuelo->TabIndex = 7;
			this->textSuelo->TextChanged += gcnew System::EventHandler(this, &editInvernadero::textSuelo_TextChanged);
			// 
			// textCultivo
			// 
			this->textCultivo->Location = System::Drawing::Point(467, 328);
			this->textCultivo->Name = L"textCultivo";
			this->textCultivo->Size = System::Drawing::Size(173, 26);
			this->textCultivo->TabIndex = 8;
			// 
			// textId
			// 
			this->textId->Location = System::Drawing::Point(467, 399);
			this->textId->Name = L"textId";
			this->textId->Size = System::Drawing::Size(173, 26);
			this->textId->TabIndex = 9;
			// 
			// textSustrato
			// 
			this->textSustrato->Location = System::Drawing::Point(467, 478);
			this->textSustrato->Name = L"textSustrato";
			this->textSustrato->Size = System::Drawing::Size(173, 26);
			this->textSustrato->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(429, 578);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 34);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &editInvernadero::button1_Click);
			// 
			// editInvernadero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1010, 765);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textSustrato);
			this->Controls->Add(this->textId);
			this->Controls->Add(this->textCultivo);
			this->Controls->Add(this->textSuelo);
			this->Controls->Add(this->textUbicacion);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"editInvernadero";
			this->Text = L"editInvernadero";
			this->Load += gcnew System::EventHandler(this, &editInvernadero::DatosInvernadero);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DatosInvernadero(System::Object^ sender, System::EventArgs^ e) {
		this->textUbicacion->Text = this->objInvernadero->getUbicacion();
		this->textSuelo->Text = this->objInvernadero->getTipoDeSuelo();
		this->textCultivo->Text = this->objInvernadero->getCultivo();
		this->textId->Text = Convert::ToString(this->objInvernadero->getIdLote());
		this->textSustrato->Text = this->objInvernadero->getSustrato();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int idLote = Convert::ToInt32(this->textId->Text);
		String^ ubicacion = this->textUbicacion->Text;
		String^ suelo = this->textSuelo->Text;
		String^ cultivo = this->textCultivo->Text;
		String^ sustrato = this->textSustrato->Text;

		InvernaderoController^ invernadero = gcnew InvernaderoController();
		invernadero->editarInvernadero(ubicacion, suelo, cultivo, idLote, sustrato, 400);
		MessageBox::Show("La información del Médico ha sido actualizado con éxito...!", "Actualización Exitosa",
		MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}


private: System::Void textSuelo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
