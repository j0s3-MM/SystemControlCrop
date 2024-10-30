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
	/// Resumen de Invernadero
	/// </summary>
	public ref class Invernadero : public System::Windows::Forms::Form
	{
	public:
		Invernadero(void)
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
		~Invernadero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dgvInvernadero;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ informacionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ graficasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estadisticasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ informacionToolStripMenuItem1;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dgvInvernadero = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->informacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graficasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estadisticasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informacionToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInvernadero))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dgvInvernadero);
			this->groupBox1->Location = System::Drawing::Point(183, 57);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(938, 547);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Invernadero";
			// 
			// dgvInvernadero
			// 
			this->dgvInvernadero->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvInvernadero->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dgvInvernadero->Location = System::Drawing::Point(18, 59);
			this->dgvInvernadero->Name = L"dgvInvernadero";
			this->dgvInvernadero->RowHeadersWidth = 62;
			this->dgvInvernadero->RowTemplate->Height = 28;
			this->dgvInvernadero->Size = System::Drawing::Size(914, 386);
			this->dgvInvernadero->TabIndex = 0;
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
			this->Column2->HeaderText = L"Tipo de Suelo";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"cultivo";
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
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->informacionToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1281, 33);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// informacionToolStripMenuItem
			// 
			this->informacionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->graficasToolStripMenuItem,
					this->estadisticasToolStripMenuItem, this->informacionToolStripMenuItem1
			});
			this->informacionToolStripMenuItem->Name = L"informacionToolStripMenuItem";
			this->informacionToolStripMenuItem->Size = System::Drawing::Size(83, 29);
			this->informacionToolStripMenuItem->Text = L"Cultivo";
			// 
			// graficasToolStripMenuItem
			// 
			this->graficasToolStripMenuItem->Name = L"graficasToolStripMenuItem";
			this->graficasToolStripMenuItem->Size = System::Drawing::Size(210, 34);
			this->graficasToolStripMenuItem->Text = L"Graficas";
			// 
			// estadisticasToolStripMenuItem
			// 
			this->estadisticasToolStripMenuItem->Name = L"estadisticasToolStripMenuItem";
			this->estadisticasToolStripMenuItem->Size = System::Drawing::Size(210, 34);
			this->estadisticasToolStripMenuItem->Text = L"Estadisticas";
			// 
			// informacionToolStripMenuItem1
			// 
			this->informacionToolStripMenuItem1->Name = L"informacionToolStripMenuItem1";
			this->informacionToolStripMenuItem1->Size = System::Drawing::Size(210, 34);
			this->informacionToolStripMenuItem1->Text = L"Informacion";
			// 
			// Invernadero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1281, 681);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Invernadero";
			this->Text = L"Invernadero";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInvernadero))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//revisar si esta bien
		public: void mostrarGrilla() {

			//List<invernadero^> listaInvernaderos = gcnew List<invernadero^>();
			List<invernadero^>^ listaInvernaderos;
			InvernaderoController^ invernaderoController = gcnew InvernaderoController();
			listaInvernaderos = invernaderoController->buscarAll();

			this->dgvInvernadero->Rows->Clear(); //eliminar de sus filas todo-borrar
			for (int i = 0; i < listaInvernaderos->Count; i++) { //recorrer los elementos de la lista
				invernadero^ Invernadero = listaInvernaderos[i];
				array<String^>^ filaGrilla = gcnew array<String^>(5);
				filaGrilla[0] = Invernadero->getUbicacion();
				filaGrilla[1] = Invernadero->getTipoDeSuelo();
				filaGrilla[2] = Invernadero->getCultivo();
				filaGrilla[3] = Convert::ToString(Invernadero->getIdLote());
				filaGrilla[4] = Invernadero->getSustrato();
				filaGrilla[5] = Convert::ToString(Invernadero->getArea());

				this->dgvInvernadero->Rows->Add(filaGrilla);
			}
		}
	};
}
