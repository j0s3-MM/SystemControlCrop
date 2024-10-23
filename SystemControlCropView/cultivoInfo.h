#pragma once

namespace SystemControlCropView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de cultivoInfo
	/// </summary>
	public ref class cultivoInfo : public System::Windows::Forms::Form
	{
	public:
		cultivoInfo(void)
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
		~cultivoInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buscar;
	private: System::Windows::Forms::Button^ nuevo;


	private: System::Windows::Forms::Button^ editar;

	private: System::Windows::Forms::Button^ eliminar;

	private: System::Windows::Forms::DataGridView^ dgvCultivo;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::Button^ descripcion;


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
			this->buscar = (gcnew System::Windows::Forms::Button());
			this->nuevo = (gcnew System::Windows::Forms::Button());
			this->editar = (gcnew System::Windows::Forms::Button());
			this->eliminar = (gcnew System::Windows::Forms::Button());
			this->dgvCultivo = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->descripcion = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCultivo))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(152, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(401, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Cultivo";
			// 
			// buscar
			// 
			this->buscar->Location = System::Drawing::Point(811, 91);
			this->buscar->Name = L"buscar";
			this->buscar->Size = System::Drawing::Size(75, 29);
			this->buscar->TabIndex = 2;
			this->buscar->Text = L"Buscar";
			this->buscar->UseVisualStyleBackColor = true;
			// 
			// nuevo
			// 
			this->nuevo->Location = System::Drawing::Point(286, 557);
			this->nuevo->Name = L"nuevo";
			this->nuevo->Size = System::Drawing::Size(72, 31);
			this->nuevo->TabIndex = 3;
			this->nuevo->Text = L"Nuevo";
			this->nuevo->UseVisualStyleBackColor = true;
			// 
			// editar
			// 
			this->editar->Location = System::Drawing::Point(426, 557);
			this->editar->Name = L"editar";
			this->editar->Size = System::Drawing::Size(82, 31);
			this->editar->TabIndex = 4;
			this->editar->Text = L"Editar";
			this->editar->UseVisualStyleBackColor = true;
			// 
			// eliminar
			// 
			this->eliminar->Location = System::Drawing::Point(577, 557);
			this->eliminar->Name = L"eliminar";
			this->eliminar->Size = System::Drawing::Size(75, 31);
			this->eliminar->TabIndex = 5;
			this->eliminar->Text = L"Eliminar";
			this->eliminar->UseVisualStyleBackColor = true;
			this->eliminar->Click += gcnew System::EventHandler(this, &cultivoInfo::button4_Click);
			// 
			// dgvCultivo
			// 
			this->dgvCultivo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCultivo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dgvCultivo->Location = System::Drawing::Point(109, 182);
			this->dgvCultivo->Name = L"dgvCultivo";
			this->dgvCultivo->RowHeadersWidth = 62;
			this->dgvCultivo->RowTemplate->Height = 28;
			this->dgvCultivo->Size = System::Drawing::Size(851, 335);
			this->dgvCultivo->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(229, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 7;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(511, 92);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(94, 28);
			this->comboBox1->TabIndex = 8;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"id";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"cultivo";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"fase";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"categoria";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Sector";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Riego";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"plaga";
			this->Column7->MinimumWidth = 8;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 150;
			// 
			// descripcion
			// 
			this->descripcion->Location = System::Drawing::Point(718, 557);
			this->descripcion->Name = L"descripcion";
			this->descripcion->Size = System::Drawing::Size(103, 31);
			this->descripcion->TabIndex = 9;
			this->descripcion->Text = L"descripcion";
			this->descripcion->UseVisualStyleBackColor = true;
			// 
			// cultivoInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1046, 673);
			this->Controls->Add(this->descripcion);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dgvCultivo);
			this->Controls->Add(this->eliminar);
			this->Controls->Add(this->editar);
			this->Controls->Add(this->nuevo);
			this->Controls->Add(this->buscar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"cultivoInfo";
			this->Text = L"cultivoInfo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCultivo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
