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
	private: System::Windows::Forms::TextBox^ textId;
	private: System::Windows::Forms::ComboBox^ cmbCategoria;
	private: System::Windows::Forms::ComboBox^ cmbEstado;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			this->textId = (gcnew System::Windows::Forms::TextBox());
			this->cmbCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->cmbEstado = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(314, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Editar Sensor";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(227, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Id:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(227, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Categoria";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(227, 299);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Estado";
			// 
			// textId
			// 
			this->textId->Location = System::Drawing::Point(351, 151);
			this->textId->Name = L"textId";
			this->textId->Size = System::Drawing::Size(143, 26);
			this->textId->TabIndex = 4;
			// 
			// cmbCategoria
			// 
			this->cmbCategoria->FormattingEnabled = true;
			this->cmbCategoria->Location = System::Drawing::Point(351, 220);
			this->cmbCategoria->Name = L"cmbCategoria";
			this->cmbCategoria->Size = System::Drawing::Size(143, 28);
			this->cmbCategoria->TabIndex = 5;
			// 
			// cmbEstado
			// 
			this->cmbEstado->FormattingEnabled = true;
			this->cmbEstado->Location = System::Drawing::Point(351, 291);
			this->cmbEstado->Name = L"cmbEstado";
			this->cmbEstado->Size = System::Drawing::Size(143, 28);
			this->cmbEstado->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(274, 392);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 36);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Editar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &editSensor::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(388, 392);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 36);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// editSensor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(759, 478);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cmbEstado);
			this->Controls->Add(this->cmbCategoria);
			this->Controls->Add(this->textId);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"editSensor";
			this->Text = L"editSensor";
			this->Load += gcnew System::EventHandler(this, &editSensor::Datos);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Datos(System::Object^ sender, System::EventArgs^ e) {
		this->textId->Text = Convert::ToString(this->objSensor->getId());
		this->cmbCategoria->Text = this->objSensor->getcategoria();
		this->cmbEstado->Text = this->objSensor->getEstado();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int idLote = Convert::ToInt32(this->textId->Text);
		String^ categoria = this->cmbCategoria->Text;
		String^ estado = this->cmbEstado->Text;

		SensorController^ sensor = gcnew SensorController();
		sensor->editarSensor(idLote, categoria, estado);
		MessageBox::Show("La información del sensor ha sido actualizado con éxito...!", "Actualización Exitosa",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
};
}
