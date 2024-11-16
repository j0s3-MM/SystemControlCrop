#pragma once
#include "frmGraficas.h"
//#include "frmEstadisticas.h"
#include "sensores.h"
#include "editPlanta.h"
#include "newPlanta.h"
#include "descripcionCultivo.h"

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

	private: System::Windows::Forms::ToolStripMenuItem^ cultivoToolStripMenuItem;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dgvPlantas;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textid;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;













	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ComboBox^ cmbMadurez;

	private: System::Windows::Forms::ComboBox^ cmbNombre;










	private: System::Windows::Forms::ToolStripMenuItem^ estadisticasToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ graficasToolStripMenuItem1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::ToolStripMenuItem^ grafico1ToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;







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
			this->cultivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estadisticasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graficasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grafico1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->cmbMadurez = (gcnew System::Windows::Forms::ComboBox());
			this->cmbNombre = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textid = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dgvPlantas = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPlantas))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->sensoresToolStripMenuItem,
					this->cultivoToolStripMenuItem, this->estadisticasToolStripMenuItem1, this->graficasToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1172, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// sensoresToolStripMenuItem
			// 
			this->sensoresToolStripMenuItem->Name = L"sensoresToolStripMenuItem";
			this->sensoresToolStripMenuItem->Size = System::Drawing::Size(99, 29);
			this->sensoresToolStripMenuItem->Text = L"Sensores";
			this->sensoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &editAdminInvernadero::sensoresToolStripMenuItem_Click);
			// 
			// cultivoToolStripMenuItem
			// 
			this->cultivoToolStripMenuItem->Name = L"cultivoToolStripMenuItem";
			this->cultivoToolStripMenuItem->Size = System::Drawing::Size(143, 29);
			this->cultivoToolStripMenuItem->Text = L"Requerimiento";
			this->cultivoToolStripMenuItem->Click += gcnew System::EventHandler(this, &editAdminInvernadero::cultivoToolStripMenuItem_Click);
			// 
			// estadisticasToolStripMenuItem1
			// 
			this->estadisticasToolStripMenuItem1->Name = L"estadisticasToolStripMenuItem1";
			this->estadisticasToolStripMenuItem1->Size = System::Drawing::Size(118, 29);
			this->estadisticasToolStripMenuItem1->Text = L"Estadisticas";
			this->estadisticasToolStripMenuItem1->Click += gcnew System::EventHandler(this, &editAdminInvernadero::estadisticasToolStripMenuItem1_Click);
			// 
			// graficasToolStripMenuItem1
			// 
			this->graficasToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->grafico1ToolStripMenuItem });
			this->graficasToolStripMenuItem1->Name = L"graficasToolStripMenuItem1";
			this->graficasToolStripMenuItem1->Size = System::Drawing::Size(90, 29);
			this->graficasToolStripMenuItem1->Text = L"Graficas";
			// 
			// grafico1ToolStripMenuItem
			// 
			this->grafico1ToolStripMenuItem->Name = L"grafico1ToolStripMenuItem";
			this->grafico1ToolStripMenuItem->Size = System::Drawing::Size(180, 34);
			this->grafico1ToolStripMenuItem->Text = L"Grafico1";
			this->grafico1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &editAdminInvernadero::grafico1ToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->cmbMadurez);
			this->groupBox1->Controls->Add(this->cmbNombre);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textid);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->dgvPlantas);
			this->groupBox1->Location = System::Drawing::Point(74, 75);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1042, 523);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Estado de las plantas";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &editAdminInvernadero::groupBox1_Enter);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(311, 448);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 36);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Nuevo";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &editAdminInvernadero::button4_Click);
			// 
			// cmbMadurez
			// 
			this->cmbMadurez->FormattingEnabled = true;
			this->cmbMadurez->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Maduro", L"Pinton", L"Verde" });
			this->cmbMadurez->Location = System::Drawing::Point(688, 48);
			this->cmbMadurez->Name = L"cmbMadurez";
			this->cmbMadurez->Size = System::Drawing::Size(121, 28);
			this->cmbMadurez->TabIndex = 9;
			// 
			// cmbNombre
			// 
			this->cmbNombre->FormattingEnabled = true;
			this->cmbNombre->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Fresa", L"Tomate", L"Cebolla" });
			this->cmbNombre->Location = System::Drawing::Point(400, 48);
			this->cmbNombre->Name = L"cmbNombre";
			this->cmbNombre->Size = System::Drawing::Size(169, 28);
			this->cmbNombre->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(322, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(594, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Madurez";
			// 
			// textid
			// 
			this->textid->Location = System::Drawing::Point(127, 48);
			this->textid->Name = L"textid";
			this->textid->Size = System::Drawing::Size(169, 26);
			this->textid->TabIndex = 5;
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
			// button3
			// 
			this->button3->Location = System::Drawing::Point(898, 48);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 36);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &editAdminInvernadero::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(598, 448);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 36);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &editAdminInvernadero::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(466, 448);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Editar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &editAdminInvernadero::button1_Click);
			// 
			// dgvPlantas
			// 
			this->dgvPlantas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPlantas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5
			});
			this->dgvPlantas->Location = System::Drawing::Point(76, 124);
			this->dgvPlantas->Name = L"dgvPlantas";
			this->dgvPlantas->RowHeadersWidth = 62;
			this->dgvPlantas->RowTemplate->Height = 28;
			this->dgvPlantas->Size = System::Drawing::Size(852, 289);
			this->dgvPlantas->TabIndex = 0;
			this->dgvPlantas->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &editAdminInvernadero::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Tipo";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Maduracion";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Estado";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
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
			this->Load += gcnew System::EventHandler(this, &editAdminInvernadero::editAdminInvernadero_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPlantas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void sensoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		sensores^ ventanaSensor = gcnew sensores();
		ventanaSensor->Show();
	}
	/*private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}*/
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		newPlanta^ ventanaNuevaPlanta = gcnew newPlanta();
		ventanaNuevaPlanta->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dgvPlantas->SelectedRows->Count == 0) {
			MessageBox::Show("Por favor, seleccione un registro para editar.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return; // Salir del evento si no hay filas seleccionadas
		}

		int filaSeleccionada = this->dgvPlantas->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el índice de la única fila que he seleccionado*/
		int idEditar = Convert::ToInt64(this->dgvPlantas->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		plantaController^ PlantaController = gcnew plantaController();
		planta^ objPlanta = PlantaController->buscarIdEditar(idEditar);

		editPlanta^ ventanaEditarPlanta = gcnew editPlanta(objPlanta);
		ventanaEditarPlanta->ShowDialog();

		this->dgvPlantas->Rows->Clear();
		List<planta^>^ listaPlantas = PlantaController->buscarAll();
		mostrarGrilla(listaPlantas);
	}
	private: System::Void actuadoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void componentesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void cultivoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		descripcionCultivo^ ventanaRequerimiento = gcnew descripcionCultivo();
		ventanaRequerimiento->Show();
	}
	private: System::Void informacionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tanqueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ id = this->textid->Text;
		String^ nombre = this->cmbNombre->Text;
		String^ madurez = this->cmbMadurez->Text;
		
		planta^ Planta = gcnew planta();
		List<planta^>^ listaPlantas;

		plantaController^ PlantaController = gcnew plantaController();
		if (id->CompareTo("") == 0 && nombre->CompareTo("") == 0 && madurez->CompareTo("") == 0) {
			listaPlantas = PlantaController->buscarAll();
		}
		if (id->CompareTo("") != 0 && nombre->CompareTo("") == 0 && madurez->CompareTo("") == 0) {
			int idbuscado2 = Convert::ToInt64(id);
			listaPlantas = PlantaController->buscarId(idbuscado2);
		}
		if (id->CompareTo("") == 0 && (nombre->CompareTo("") != 0 || madurez->CompareTo("") != 0)) {
			listaPlantas = PlantaController->buscarPlantaxNombrexMadurez(nombre, madurez);
		}
		
		
	

		mostrarGrilla(listaPlantas);
	}
	public: void mostrarGrilla(List<planta^>^ listaPlantas) {
		this->dgvPlantas->Rows->Clear(); //eliminar de sus filas todo-borrar
		for (int i = 0; i < listaPlantas->Count; i++) { //recorrer los elementos de la lista
			planta^ Plantacion = listaPlantas[i];
			array<String^>^ filaGrilla = gcnew array<String^>(6);
			filaGrilla[0] = Convert::ToString(Plantacion->getidplanta());
			filaGrilla[1] = Plantacion->getNombre();
			filaGrilla[2] = Plantacion->getTipoPlanta();
			filaGrilla[3] = Plantacion->getetapaMadurez();
			filaGrilla[4] = Plantacion->getEstado();
			//filaGrilla[5] = Plantacion->getListaRequerimientos();

			this->dgvPlantas->Rows->Add(filaGrilla);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		plantaController^ PlantaController = gcnew plantaController();
		List<planta^>^ listaPlantas;
		for (int i = 0; i < this->dgvPlantas->SelectedRows->Count; i++) {  // sirve para eliminar varios elementos seleccionados
			int filaSeleccionada = this->dgvPlantas->SelectedRows[0]->Index;
			int idEliminar = Convert::ToInt64(this->dgvPlantas->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			PlantaController->eliminarPlanta(idEliminar);

		}
		MessageBox::Show("La planta ha sido eliminada");
		listaPlantas = PlantaController->buscarAll();
		mostrarGrilla(listaPlantas);

	}

	private: System::Void editAdminInvernadero_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void graficasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmGraficas^ ventanaTiempoXHHT = gcnew frmGraficas();
		//ventanaConsumoAguaxInvernadero->MdiParent = this;
		ventanaTiempoXHHT->Show();
	}
	private: System::Void estadisticasToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		//frmEstadisticas^ ventanaEstadisticas = gcnew frmEstadisticas();
		////ventanaConsumoAguaxInvernadero->MdiParent = this;
		//ventanaEstadisticas->Show();

		////guardar los datos de las estadisticas
	}
	private: System::Void grafico1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		/*frmGraficas^ ventanaGrafico1 = gcnew frmGraficas();
		ventanaGrafico1->MdiParent = this;
		ventanaGrafico1->Show();*/
	}
	
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {




	}

};
}
