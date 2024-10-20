#pragma once

namespace SystemControlCropView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de editAdminInvernadero
	/// </summary>
	public ref class editAdminInvernadero : public System::Windows::Forms::Form
	{
	public:
		editAdminInvernadero(void)
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
		~editAdminInvernadero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ sensoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ componentesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cultivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ actuadoresToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::ToolStripMenuItem^ temperaturaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ humedadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tuberiasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tanqueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cintaRiegoToolStripMenuItem;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ informacionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ bombaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ventiladorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ledsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ valvulaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ graficasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estadisticasToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->sensoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->componentesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cultivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actuadoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->temperaturaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->humedadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tuberiasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tanqueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cintaRiegoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bombaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ventiladorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ledsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->valvulaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graficasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estadisticasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->sensoresToolStripMenuItem,
					this->componentesToolStripMenuItem, this->cultivoToolStripMenuItem, this->actuadoresToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1172, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// sensoresToolStripMenuItem
			// 
			this->sensoresToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->temperaturaToolStripMenuItem,
					this->humedadToolStripMenuItem, this->gasToolStripMenuItem
			});
			this->sensoresToolStripMenuItem->Name = L"sensoresToolStripMenuItem";
			this->sensoresToolStripMenuItem->Size = System::Drawing::Size(99, 29);
			this->sensoresToolStripMenuItem->Text = L"Sensores";
			this->sensoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &editAdminInvernadero::sensoresToolStripMenuItem_Click);
			// 
			// componentesToolStripMenuItem
			// 
			this->componentesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->tuberiasToolStripMenuItem,
					this->tanqueToolStripMenuItem, this->cintaRiegoToolStripMenuItem
			});
			this->componentesToolStripMenuItem->Name = L"componentesToolStripMenuItem";
			this->componentesToolStripMenuItem->Size = System::Drawing::Size(140, 29);
			this->componentesToolStripMenuItem->Text = L"Componentes";
			// 
			// cultivoToolStripMenuItem
			// 
			this->cultivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->informacionToolStripMenuItem,
					this->graficasToolStripMenuItem, this->estadisticasToolStripMenuItem
			});
			this->cultivoToolStripMenuItem->Name = L"cultivoToolStripMenuItem";
			this->cultivoToolStripMenuItem->Size = System::Drawing::Size(83, 29);
			this->cultivoToolStripMenuItem->Text = L"Cultivo";
			// 
			// actuadoresToolStripMenuItem
			// 
			this->actuadoresToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->bombaToolStripMenuItem,
					this->ventiladorToolStripMenuItem, this->ledsToolStripMenuItem, this->valvulaToolStripMenuItem
			});
			this->actuadoresToolStripMenuItem->Name = L"actuadoresToolStripMenuItem";
			this->actuadoresToolStripMenuItem->Size = System::Drawing::Size(118, 29);
			this->actuadoresToolStripMenuItem->Text = L"Actuadores";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(74, 75);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(970, 523);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Invernadero";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(55, 129);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(891, 289);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Ubicacion";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Suelo";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Cultivo";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Idlote";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Sustrato";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Area";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(466, 448);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Editar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(598, 448);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 36);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(840, 48);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 36);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Id";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(127, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(169, 26);
			this->textBox1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(575, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"cultivo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(322, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Ubicacion";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(634, 48);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(169, 28);
			this->comboBox1->TabIndex = 8;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(420, 51);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 28);
			this->comboBox2->TabIndex = 9;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(311, 448);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 36);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Nuevo";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// temperaturaToolStripMenuItem
			// 
			this->temperaturaToolStripMenuItem->Name = L"temperaturaToolStripMenuItem";
			this->temperaturaToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->temperaturaToolStripMenuItem->Text = L"Temperatura";
			// 
			// humedadToolStripMenuItem
			// 
			this->humedadToolStripMenuItem->Name = L"humedadToolStripMenuItem";
			this->humedadToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->humedadToolStripMenuItem->Text = L"Humedad";
			// 
			// gasToolStripMenuItem
			// 
			this->gasToolStripMenuItem->Name = L"gasToolStripMenuItem";
			this->gasToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->gasToolStripMenuItem->Text = L"Gas";
			// 
			// tuberiasToolStripMenuItem
			// 
			this->tuberiasToolStripMenuItem->Name = L"tuberiasToolStripMenuItem";
			this->tuberiasToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->tuberiasToolStripMenuItem->Text = L"Tuberias";
			// 
			// tanqueToolStripMenuItem
			// 
			this->tanqueToolStripMenuItem->Name = L"tanqueToolStripMenuItem";
			this->tanqueToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->tanqueToolStripMenuItem->Text = L"Tanque";
			// 
			// cintaRiegoToolStripMenuItem
			// 
			this->cintaRiegoToolStripMenuItem->Name = L"cintaRiegoToolStripMenuItem";
			this->cintaRiegoToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->cintaRiegoToolStripMenuItem->Text = L"CintaRiego";
			// 
			// informacionToolStripMenuItem
			// 
			this->informacionToolStripMenuItem->Name = L"informacionToolStripMenuItem";
			this->informacionToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->informacionToolStripMenuItem->Text = L"informacion";
			// 
			// bombaToolStripMenuItem
			// 
			this->bombaToolStripMenuItem->Name = L"bombaToolStripMenuItem";
			this->bombaToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->bombaToolStripMenuItem->Text = L"bomba";
			// 
			// ventiladorToolStripMenuItem
			// 
			this->ventiladorToolStripMenuItem->Name = L"ventiladorToolStripMenuItem";
			this->ventiladorToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->ventiladorToolStripMenuItem->Text = L"ventilador";
			// 
			// ledsToolStripMenuItem
			// 
			this->ledsToolStripMenuItem->Name = L"ledsToolStripMenuItem";
			this->ledsToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->ledsToolStripMenuItem->Text = L"Leds";
			// 
			// valvulaToolStripMenuItem
			// 
			this->valvulaToolStripMenuItem->Name = L"valvulaToolStripMenuItem";
			this->valvulaToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->valvulaToolStripMenuItem->Text = L"Valvula";
			// 
			// graficasToolStripMenuItem
			// 
			this->graficasToolStripMenuItem->Name = L"graficasToolStripMenuItem";
			this->graficasToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->graficasToolStripMenuItem->Text = L"Graficas";
			// 
			// estadisticasToolStripMenuItem
			// 
			this->estadisticasToolStripMenuItem->Name = L"estadisticasToolStripMenuItem";
			this->estadisticasToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->estadisticasToolStripMenuItem->Text = L"Estadisticas";
			// 
			// editAdminInvernadero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1172, 659);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"editAdminInvernadero";
			this->Text = L"editAdminInvernadero";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void sensoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
