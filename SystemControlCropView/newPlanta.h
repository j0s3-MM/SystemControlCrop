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
	/// Resumen de newPlanta
	/// </summary>
	public ref class newPlanta : public System::Windows::Forms::Form
	{
	public:
		newPlanta(void)
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
		~newPlanta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;








	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cmbTipo;
	private: System::Windows::Forms::ComboBox^ cmbNombre;

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
			this->cmbTipo = (gcnew System::Windows::Forms::ComboBox());
			this->cmbNombre = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cmbTipo);
			this->groupBox1->Controls->Add(this->cmbNombre);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(51, 57);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(459, 553);
			this->groupBox1->TabIndex = 26;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Planta";
			// 
			// cmbTipo
			// 
			this->cmbTipo->FormattingEnabled = true;
			this->cmbTipo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Fruta", L"Verdura" });
			this->cmbTipo->Location = System::Drawing::Point(216, 219);
			this->cmbTipo->Name = L"cmbTipo";
			this->cmbTipo->Size = System::Drawing::Size(192, 28);
			this->cmbTipo->TabIndex = 26;
			// 
			// cmbNombre
			// 
			this->cmbNombre->FormattingEnabled = true;
			this->cmbNombre->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Fresa", L"Lechuga" });
			this->cmbNombre->Location = System::Drawing::Point(216, 149);
			this->cmbNombre->Name = L"cmbNombre";
			this->cmbNombre->Size = System::Drawing::Size(192, 28);
			this->cmbNombre->TabIndex = 25;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(246, 436);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 34);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &newPlanta::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(103, 436);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 34);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &newPlanta::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(43, 222);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 20);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Tipo:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(43, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 20);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Nombre:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(147, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 20);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Nueva Planta";
			// 
			// newPlanta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 602);
			this->Controls->Add(this->groupBox1);
			this->Name = L"newPlanta";
			this->Text = L"newPlanta";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = this->cmbNombre->Text;
		String^ tipo = this->cmbTipo->Text;

		plantaController^ PlantaController = gcnew plantaController();
		PlantaController->agregarPlanta("verde", "vivo", tipo,nombre);
		MessageBox::Show("La información de la planta se ha registrado con éxito...!", "Grabación Exitosa",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
};
}
