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
	/// Resumen de editSensor
	/// </summary>
	public ref class editSensor : public System::Windows::Forms::Form
	{
	private:
		Sensor^ objSensor;
	public:
		editSensor(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		editSensor(Sensor^ objSensor) {
			InitializeComponent();
			this->objSensor = objSensor;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~editSensor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtId;

	private: System::Windows::Forms::ComboBox^ cmbCategoria;
	private: System::Windows::Forms::ComboBox^ cmbEstado;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtModelo;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtNombre;
	protected:

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
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->cmbCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->cmbEstado = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtModelo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(315, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Editar Sensor";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(202, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Id:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(202, 273);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Categoria";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(202, 352);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Estado";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(389, 119);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(143, 26);
			this->txtId->TabIndex = 4;
			// 
			// cmbCategoria
			// 
			this->cmbCategoria->FormattingEnabled = true;
			this->cmbCategoria->Location = System::Drawing::Point(389, 270);
			this->cmbCategoria->Name = L"cmbCategoria";
			this->cmbCategoria->Size = System::Drawing::Size(143, 28);
			this->cmbCategoria->TabIndex = 5;
			// 
			// cmbEstado
			// 
			this->cmbEstado->FormattingEnabled = true;
			this->cmbEstado->Location = System::Drawing::Point(389, 349);
			this->cmbEstado->Name = L"cmbEstado";
			this->cmbEstado->Size = System::Drawing::Size(143, 28);
			this->cmbEstado->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(261, 435);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 36);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Editar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &editSensor::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(375, 435);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 36);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &editSensor::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtNombre);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->txtModelo);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->cmbEstado);
			this->groupBox1->Controls->Add(this->cmbCategoria);
			this->groupBox1->Controls->Add(this->txtId);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(90, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(710, 510);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sensor";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(389, 223);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(143, 26);
			this->txtNombre->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(202, 223);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Nombre";
			// 
			// txtModelo
			// 
			this->txtModelo->Location = System::Drawing::Point(389, 174);
			this->txtModelo->Name = L"txtModelo";
			this->txtModelo->Size = System::Drawing::Size(143, 26);
			this->txtModelo->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(202, 174);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Modelo";
			// 
			// editSensor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(883, 601);
			this->Controls->Add(this->groupBox1);
			this->Name = L"editSensor";
			this->Text = L"editSensor";
			this->Load += gcnew System::EventHandler(this, &editSensor::Datos);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Datos(System::Object^ sender, System::EventArgs^ e) {
		this->txtId->Text = Convert::ToString(this->objSensor->getId());
		this->txtModelo->Text = this->objSensor->getModelo();
		this->txtNombre->Text = this->objSensor->getNombre();
		this->cmbCategoria->Text = this->objSensor->getcategoria();
		this->cmbEstado->Text = this->objSensor->getEstado();

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt64(this->txtId->Text);
		String^ categoria = this->cmbCategoria->Text;
		String^ estado = this->cmbEstado->Text;
		String^ nombre = this->txtNombre->Text;
		String^ modelo = this->txtModelo->Text;

		SensorController^ sensor = gcnew SensorController();
		sensor->editarSensor(id, categoria, modelo, nombre, estado);
		MessageBox::Show("La información del sensor ha sido actualizado con éxito...!", "Actualización Exitosa",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
