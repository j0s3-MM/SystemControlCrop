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
	/// Resumen de newSensor
	/// </summary>
	public ref class newSensor : public System::Windows::Forms::Form
	{
	public:
		newSensor(void)
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
		~newSensor()
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
	private: System::Windows::Forms::TextBox^ textId;
	private: System::Windows::Forms::ComboBox^ cmbCategoria;
	private: System::Windows::Forms::ComboBox^ cmbEstado;
	private: System::Windows::Forms::Button^ grabar;


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
			this->textId = (gcnew System::Windows::Forms::TextBox());
			this->cmbCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->cmbEstado = (gcnew System::Windows::Forms::ComboBox());
			this->grabar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(383, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nuevo Sensor";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(295, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Id:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(295, 209);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Categoria";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(295, 290);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Estado";
			// 
			// textId
			// 
			this->textId->Location = System::Drawing::Point(437, 142);
			this->textId->Name = L"textId";
			this->textId->Size = System::Drawing::Size(147, 26);
			this->textId->TabIndex = 4;
			// 
			// cmbCategoria
			// 
			this->cmbCategoria->FormattingEnabled = true;
			this->cmbCategoria->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Temperatura", L"Humedad", L"Gas" });
			this->cmbCategoria->Location = System::Drawing::Point(437, 206);
			this->cmbCategoria->Name = L"cmbCategoria";
			this->cmbCategoria->Size = System::Drawing::Size(147, 28);
			this->cmbCategoria->TabIndex = 5;
			// 
			// cmbEstado
			// 
			this->cmbEstado->FormattingEnabled = true;
			this->cmbEstado->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Malogrado", L"Operativo" });
			this->cmbEstado->Location = System::Drawing::Point(437, 282);
			this->cmbEstado->Name = L"cmbEstado";
			this->cmbEstado->Size = System::Drawing::Size(147, 28);
			this->cmbEstado->TabIndex = 6;
			// 
			// grabar
			// 
			this->grabar->Location = System::Drawing::Point(387, 368);
			this->grabar->Name = L"grabar";
			this->grabar->Size = System::Drawing::Size(75, 34);
			this->grabar->TabIndex = 7;
			this->grabar->Text = L"Grabar";
			this->grabar->UseVisualStyleBackColor = true;
			this->grabar->Click += gcnew System::EventHandler(this, &newSensor::grabar_Click);
			// 
			// newSensor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(903, 451);
			this->Controls->Add(this->grabar);
			this->Controls->Add(this->cmbEstado);
			this->Controls->Add(this->cmbCategoria);
			this->Controls->Add(this->textId);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"newSensor";
			this->Text = L"newSensor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void grabar_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt64(this->textId->Text);
		SensorController^ sensorController = gcnew  SensorController();
		List<Sensor^>^ listaSensores = sensorController->buscarId(id);
		if (listaSensores->Count == 0) {
			int idSensor = Convert::ToInt64(this->textId->Text);
			String^ categoria = this->cmbCategoria->Text;
			String^ estado = this->cmbEstado->Text;
			sensorController->agregarSensor(idSensor, categoria, estado);
			MessageBox::Show("El sensor ha sido registrado con exito");
		}
		else {

			MessageBox::Show("el id del sensor ya esta registrado");
		}
	}
};
}
