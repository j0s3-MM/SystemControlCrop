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
	/// Resumen de newInvernadero
	/// </summary>
	public ref class newInvernadero : public System::Windows::Forms::Form
	{
	public:
		newInvernadero(void)
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
		~newInvernadero()
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
	private: System::Windows::Forms::TextBox^ textArea;



	private: System::Windows::Forms::Label^ label7;
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
			this->textArea = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(225, 159);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ubicacion";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(225, 362);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"idLote";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(225, 297);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Cultivo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(225, 227);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Suelo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(225, 424);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Sustrato";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(225, 492);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Area";
			// 
			// textUbicacion
			// 
			this->textUbicacion->Location = System::Drawing::Point(374, 159);
			this->textUbicacion->Name = L"textUbicacion";
			this->textUbicacion->Size = System::Drawing::Size(190, 26);
			this->textUbicacion->TabIndex = 6;
			// 
			// textSuelo
			// 
			this->textSuelo->Location = System::Drawing::Point(374, 221);
			this->textSuelo->Name = L"textSuelo";
			this->textSuelo->Size = System::Drawing::Size(190, 26);
			this->textSuelo->TabIndex = 7;
			// 
			// textCultivo
			// 
			this->textCultivo->Location = System::Drawing::Point(374, 297);
			this->textCultivo->Name = L"textCultivo";
			this->textCultivo->Size = System::Drawing::Size(190, 26);
			this->textCultivo->TabIndex = 8;
			// 
			// textId
			// 
			this->textId->Location = System::Drawing::Point(374, 362);
			this->textId->Name = L"textId";
			this->textId->Size = System::Drawing::Size(190, 26);
			this->textId->TabIndex = 9;
			// 
			// textSustrato
			// 
			this->textSustrato->Location = System::Drawing::Point(374, 424);
			this->textSustrato->Name = L"textSustrato";
			this->textSustrato->Size = System::Drawing::Size(190, 26);
			this->textSustrato->TabIndex = 10;
			// 
			// textArea
			// 
			this->textArea->Location = System::Drawing::Point(374, 492);
			this->textArea->Name = L"textArea";
			this->textArea->Size = System::Drawing::Size(190, 26);
			this->textArea->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(319, 76);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(143, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Nuevo Invernadero";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(323, 571);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 40);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &newInvernadero::button1_Click);
			// 
			// newInvernadero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(862, 681);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textArea);
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
			this->Name = L"newInvernadero";
			this->Text = L"newInvernadero";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int idLote = Convert::ToInt64(this->textId->Text);
		InvernaderoController^ invernaderoController = gcnew  InvernaderoController();
		List<invernadero^>^ listaInvernaderos = invernaderoController->buscarId(idLote);
		if (listaInvernaderos->Count == 0) {
			int idLote = Convert::ToInt64(this->textId->Text);
			String^ ubicacion = this->textUbicacion->Text;
			String^ tipodesuelo = this->textSuelo->Text;
			String^ sustrato = this->textSustrato->Text;
			String^ cultivo = this->textCultivo->Text;
			int area = Convert::ToInt64(this->textArea->Text);
			invernaderoController->agregarInvernadero(ubicacion, tipodesuelo, cultivo, idLote, sustrato, area);
			MessageBox::Show("El invernadero ha sido registrado con exito");
		}
		else {

			MessageBox::Show("el id del invernadero ya esta registrado");
		}

	}
};
}
