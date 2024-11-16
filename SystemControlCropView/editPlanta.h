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
	/// Resumen de editPlanta
	/// </summary>
	public ref class editPlanta : public System::Windows::Forms::Form
	{
	private:
		planta^ objPlanta;
	public:
		editPlanta(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		editPlanta(planta^ objPlanta) {
			InitializeComponent();
			this->objPlanta = objPlanta;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~editPlanta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtTipo;
	protected:

	private: System::Windows::Forms::TextBox^ txtNombre;

	private: System::Windows::Forms::TextBox^ txtId;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cmbEstado;

	private: System::Windows::Forms::ComboBox^ cmbMadurez;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtTipo = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cmbEstado = (gcnew System::Windows::Forms::ComboBox());
			this->cmbMadurez = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(230, 499);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 34);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &editPlanta::button1_Click);
			// 
			// txtTipo
			// 
			this->txtTipo->Location = System::Drawing::Point(343, 278);
			this->txtTipo->Name = L"txtTipo";
			this->txtTipo->Size = System::Drawing::Size(173, 26);
			this->txtTipo->TabIndex = 20;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(343, 212);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(173, 26);
			this->txtNombre->TabIndex = 19;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(343, 141);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(173, 26);
			this->txtId->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(167, 281);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 20);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Tipo:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(167, 215);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 20);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(167, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 20);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Id:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(276, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 20);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Editar Planta";
			this->label1->Click += gcnew System::EventHandler(this, &editPlanta::label1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(167, 355);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 20);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Maduracion: ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(372, 499);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 34);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &editPlanta::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cmbEstado);
			this->groupBox1->Controls->Add(this->cmbMadurez);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->txtTipo);
			this->groupBox1->Controls->Add(this->txtNombre);
			this->groupBox1->Controls->Add(this->txtId);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(234, 69);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(688, 560);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Planta";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &editPlanta::groupBox1_Enter);
			// 
			// cmbEstado
			// 
			this->cmbEstado->FormattingEnabled = true;
			this->cmbEstado->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Vivo", L"Muerto" });
			this->cmbEstado->Location = System::Drawing::Point(343, 426);
			this->cmbEstado->Name = L"cmbEstado";
			this->cmbEstado->Size = System::Drawing::Size(173, 28);
			this->cmbEstado->TabIndex = 27;
			// 
			// cmbMadurez
			// 
			this->cmbMadurez->FormattingEnabled = true;
			this->cmbMadurez->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Verde", L"Pinton", L"Maduro" });
			this->cmbMadurez->Location = System::Drawing::Point(343, 355);
			this->cmbMadurez->Name = L"cmbMadurez";
			this->cmbMadurez->Size = System::Drawing::Size(173, 28);
			this->cmbMadurez->TabIndex = 26;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(167, 426);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 20);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Estado";
			// 
			// editPlanta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1150, 761);
			this->Controls->Add(this->groupBox1);
			this->Name = L"editPlanta";
			this->Text = L"editPlanta";
			this->Load += gcnew System::EventHandler(this, &editPlanta::Datos);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Datos(System::Object^ sender, System::EventArgs^ e) {
		this->txtId->Text = Convert::ToString(this->objPlanta->getidplanta());
		this->txtNombre->Text = this->objPlanta->getNombre();
		this->txtTipo->Text = this->objPlanta->getTipoPlanta();
		this->cmbMadurez->Text = this->objPlanta->getetapaMadurez();
		this->cmbEstado->Text = this->objPlanta->getEstado();

	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(this->txtId->Text);
		String^ nombre = this->txtNombre->Text;
		String^ tipo = this->txtTipo->Text;
		String^ madurez = this->cmbMadurez->Text;
		String^ estado = this->cmbEstado->Text;

		plantaController^ PlantaController = gcnew plantaController();
		PlantaController->editarPlanta(id, madurez, estado,tipo,nombre);
		MessageBox::Show("La información de la planta ha sido actualizado con éxito...!", "Actualización Exitosa",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
