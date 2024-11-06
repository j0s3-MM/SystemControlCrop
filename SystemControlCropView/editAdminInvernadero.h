#pragma once
#include "newInvernadero.h"
#include "editInvernadero.h"
#include "frmGraficas.h"
#include "Componentes.h"
#include "Actuadores.h"
#include "cultivoInfo.h"
#include "sensores.h"

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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::TextBox^ textid;

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




	private: System::Windows::Forms::ToolStripMenuItem^ tanqueToolStripMenuItem;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ComboBox^ cmbUbicacion;
	private: System::Windows::Forms::ComboBox^ cmbCultivo;


	private: System::Windows::Forms::ToolStripMenuItem^ informacionToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ graficasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estadisticasToolStripMenuItem;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->sensoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->componentesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tanqueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cultivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graficasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estadisticasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actuadoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->cmbUbicacion = (gcnew System::Windows::Forms::ComboBox());
			this->cmbCultivo = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textid = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->sensoresToolStripMenuItem->Name = L"sensoresToolStripMenuItem";
			this->sensoresToolStripMenuItem->Size = System::Drawing::Size(99, 29);
			this->sensoresToolStripMenuItem->Text = L"Sensores";
			this->sensoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &editAdminInvernadero::sensoresToolStripMenuItem_Click);
			// 
			// componentesToolStripMenuItem
			// 
			this->componentesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tanqueToolStripMenuItem });
			this->componentesToolStripMenuItem->Name = L"componentesToolStripMenuItem";
			this->componentesToolStripMenuItem->Size = System::Drawing::Size(140, 29);
			this->componentesToolStripMenuItem->Text = L"Componentes";
			this->componentesToolStripMenuItem->Click += gcnew System::EventHandler(this, &editAdminInvernadero::componentesToolStripMenuItem_Click);
			// 
			// tanqueToolStripMenuItem
			// 
			this->tanqueToolStripMenuItem->Name = L"tanqueToolStripMenuItem";
			this->tanqueToolStripMenuItem->Size = System::Drawing::Size(170, 34);
			this->tanqueToolStripMenuItem->Text = L"Tanque";
			this->tanqueToolStripMenuItem->Click += gcnew System::EventHandler(this, &editAdminInvernadero::tanqueToolStripMenuItem_Click);
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
			this->cultivoToolStripMenuItem->Click += gcnew System::EventHandler(this, &editAdminInvernadero::cultivoToolStripMenuItem_Click);
			// 
			// informacionToolStripMenuItem
			// 
			this->informacionToolStripMenuItem->Name = L"informacionToolStripMenuItem";
			this->informacionToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->informacionToolStripMenuItem->Text = L"informacion";
			this->informacionToolStripMenuItem->Click += gcnew System::EventHandler(this, &editAdminInvernadero::informacionToolStripMenuItem_Click);
			// 
			// graficasToolStripMenuItem
			// 
			this->graficasToolStripMenuItem->Name = L"graficasToolStripMenuItem";
			this->graficasToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->graficasToolStripMenuItem->Text = L"Graficas";
			this->graficasToolStripMenuItem->Click += gcnew System::EventHandler(this, &editAdminInvernadero::graficasToolStripMenuItem_Click);
			// 
			// estadisticasToolStripMenuItem
			// 
			this->estadisticasToolStripMenuItem->Name = L"estadisticasToolStripMenuItem";
			this->estadisticasToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->estadisticasToolStripMenuItem->Text = L"Estadisticas";
			// 
			// actuadoresToolStripMenuItem
			// 
			this->actuadoresToolStripMenuItem->Name = L"actuadoresToolStripMenuItem";
			this->actuadoresToolStripMenuItem->Size = System::Drawing::Size(118, 29);
			this->actuadoresToolStripMenuItem->Text = L"Actuadores";
			this->actuadoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &editAdminInvernadero::actuadoresToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->cmbUbicacion);
			this->groupBox1->Controls->Add(this->cmbCultivo);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textid);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(74, 75);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1042, 523);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Invernadero";
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
			// cmbUbicacion
			// 
			this->cmbUbicacion->FormattingEnabled = true;
			this->cmbUbicacion->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Lima", L"Ica" });
			this->cmbUbicacion->Location = System::Drawing::Point(420, 51);
			this->cmbUbicacion->Name = L"cmbUbicacion";
			this->cmbUbicacion->Size = System::Drawing::Size(121, 28);
			this->cmbUbicacion->TabIndex = 9;
			// 
			// cmbCultivo
			// 
			this->cmbCultivo->FormattingEnabled = true;
			this->cmbCultivo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Fresa", L"Tomate", L"Cebolla" });
			this->cmbCultivo->Location = System::Drawing::Point(634, 48);
			this->cmbCultivo->Name = L"cmbCultivo";
			this->cmbCultivo->Size = System::Drawing::Size(169, 28);
			this->cmbCultivo->TabIndex = 8;
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(575, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"cultivo";
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
			this->button3->Location = System::Drawing::Point(840, 48);
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
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(55, 143);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(966, 289);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &editAdminInvernadero::dataGridView1_CellContentClick);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void sensoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		sensores^ ventanaSensor = gcnew sensores();
		ventanaSensor->Show();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		newInvernadero^ ventanaNuevoInvernadero = gcnew newInvernadero();
		ventanaNuevoInvernadero->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dataGridView1->SelectedRows->Count == 0) {
			MessageBox::Show("Por favor, seleccione un registro para editar.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return; // Salir del evento si no hay filas seleccionadas
		}

		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el �ndice de la �nica fila que he seleccionado*/
		int idEditar = Convert::ToInt64(this->dataGridView1->Rows[filaSeleccionada]->Cells[3]->Value->ToString());
		InvernaderoController^ invernaderoController = gcnew InvernaderoController();
		invernadero^ objInvernadero = invernaderoController->buscarIdEditar(idEditar);

		editInvernadero^ ventanaEditarMedico = gcnew editInvernadero(objInvernadero);
		ventanaEditarMedico->ShowDialog();

		this->dataGridView1->Rows->Clear();
		List<invernadero^>^ listaInvernaderos = invernaderoController->buscarAll();
		mostrarGrilla(listaInvernaderos);
	}
	private: System::Void actuadoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Actuadores^ ventanaActuador = gcnew Actuadores();
		ventanaActuador->Show();
	}
	private: System::Void componentesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void cultivoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void informacionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		cultivoInfo^ ventanaCultivo = gcnew cultivoInfo();
		ventanaCultivo->Show();
	}
	private: System::Void tanqueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		componentes^ ventanaComponente = gcnew componentes();
		ventanaComponente->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ idLote = this->textid->Text;
		String^ Ubicacion = this->cmbUbicacion->Text;
		String^ cultivo = this->cmbCultivo->Text;
		//
		// int idLotebuscar
		invernadero^ Invernadero = gcnew invernadero();
		List<invernadero^>^ listaInvernaderos;

		InvernaderoController^ invernaderoController = gcnew InvernaderoController();
		if (idLote->CompareTo("") == 0 && Ubicacion->CompareTo("") == 0 && cultivo->CompareTo("") == 0) {
			listaInvernaderos = invernaderoController->buscarAll();
		}

		if (idLote -> CompareTo("")  == 0 && Ubicacion->CompareTo("") != 0 && cultivo->CompareTo("") != 0) {
			listaInvernaderos = invernaderoController->buscarUbicacionxCultivo(Ubicacion, cultivo);

		}
		if(idLote->CompareTo("") != 0){
			int idbuscado2 = Convert::ToInt64(idLote);
			listaInvernaderos = invernaderoController->buscarId(idbuscado2);
		}

		mostrarGrilla(listaInvernaderos);
	}
	public: void mostrarGrilla(List<invernadero^>^ listaInvernaderos) {
		this->dataGridView1->Rows->Clear(); //eliminar de sus filas todo-borrar
		for (int i = 0; i < listaInvernaderos->Count; i++) { //recorrer los elementos de la lista
			invernadero^ Invernadero = listaInvernaderos[i];
			array<String^>^ filaGrilla = gcnew array<String^>(6);
			filaGrilla[0] = Invernadero->getUbicacion();
			filaGrilla[1] = Invernadero->getTipoDeSuelo();
			filaGrilla[2] = Invernadero->getCultivo();
			filaGrilla[3] = Convert::ToString(Invernadero->getIdLote());
			filaGrilla[4] = Invernadero->getSustrato();
			filaGrilla[5] = Convert::ToString(Invernadero->getArea());

			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		InvernaderoController^ invernaderoController = gcnew InvernaderoController();
		List<invernadero^>^ listaInvernaderos;
		for (int i = 0; i < this->dataGridView1->SelectedRows->Count; i++) {  // sirve para eliminar varios elementos seleccionados
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
			int idEliminar = Convert::ToInt64(this->dataGridView1->Rows[filaSeleccionada]->Cells[3]->Value->ToString());
			invernaderoController->eliminarInvernadero(idEliminar);

		}
		MessageBox::Show("El invernadero  ha sido eliminado");
		listaInvernaderos = invernaderoController->buscarAll();
		mostrarGrilla(listaInvernaderos);

	}
private: System::Void editAdminInvernadero_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void graficasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmGraficas^ ventanaConsumoAguaxInvernadero = gcnew frmGraficas();
	//ventanaConsumoAguaxInvernadero->MdiParent = this;
	ventanaConsumoAguaxInvernadero->Show();
}
};
}
