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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtModelo;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtNombre;

	private: System::Windows::Forms::Label^ label6;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtModelo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(171, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nuevo Sensor";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(105, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Id:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(105, 235);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Categoria:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(105, 317);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Estado:";
			// 
			// textId
			// 
			this->textId->Location = System::Drawing::Point(250, 123);
			this->textId->Name = L"textId";
			this->textId->Size = System::Drawing::Size(147, 26);
			this->textId->TabIndex = 4;
			// 
			// cmbCategoria
			// 
			this->cmbCategoria->FormattingEnabled = true;
			this->cmbCategoria->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Temperatura", L"Humedad", L"Gas" });
			this->cmbCategoria->Location = System::Drawing::Point(250, 232);
			this->cmbCategoria->Name = L"cmbCategoria";
			this->cmbCategoria->Size = System::Drawing::Size(147, 28);
			this->cmbCategoria->TabIndex = 5;
			// 
			// cmbEstado
			// 
			this->cmbEstado->FormattingEnabled = true;
			this->cmbEstado->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Malogrado", L"Operativo" });
			this->cmbEstado->Location = System::Drawing::Point(250, 314);
			this->cmbEstado->Name = L"cmbEstado";
			this->cmbEstado->Size = System::Drawing::Size(147, 28);
			this->cmbEstado->TabIndex = 6;
			// 
			// grabar
			// 
			this->grabar->Location = System::Drawing::Point(141, 399);
			this->grabar->Name = L"grabar";
			this->grabar->Size = System::Drawing::Size(75, 34);
			this->grabar->TabIndex = 7;
			this->grabar->Text = L"Grabar";
			this->grabar->UseVisualStyleBackColor = true;
			this->grabar->Click += gcnew System::EventHandler(this, &newSensor::grabar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtNombre);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->txtModelo);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->grabar);
			this->groupBox1->Controls->Add(this->cmbEstado);
			this->groupBox1->Controls->Add(this->cmbCategoria);
			this->groupBox1->Controls->Add(this->textId);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(97, 50);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(485, 510);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sensor";
			// 
			// txtModelo
			// 
			this->txtModelo->Location = System::Drawing::Point(250, 176);
			this->txtModelo->Name = L"txtModelo";
			this->txtModelo->Size = System::Drawing::Size(147, 26);
			this->txtModelo->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(105, 176);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Modelo:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(266, 399);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 37);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &newSensor::button1_Click);
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(250, 282);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(147, 26);
			this->txtNombre->TabIndex = 12;
			this->txtNombre->TextChanged += gcnew System::EventHandler(this, &newSensor::textBox1_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(105, 282);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Nombre:";
			this->label6->Click += gcnew System::EventHandler(this, &newSensor::label6_Click);
			// 
			// newSensor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 606);
			this->Controls->Add(this->groupBox1);
			this->Name = L"newSensor";
			this->Text = L"newSensor";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void grabar_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt64(this->textId->Text);
		String^ modelo = this->txtModelo->Text;
		String^ nombre = this->txtNombre->Text;
		String^ categoria = this->cmbCategoria->Text;
		String^ estado = this->cmbEstado->Text;

		SensorController^ objSensor = gcnew SensorController();
		objSensor->agregarSensor(modelo, categoria, nombre, estado);
		MessageBox::Show("La información del Sensor se ha registrado con éxito...!", "Grabación Exitosa",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
