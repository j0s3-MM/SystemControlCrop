#pragma once
#include "newSensor.h"
#include "editSensor.h"
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
	/// Resumen de sensores
	/// </summary>
	public ref class sensores : public System::Windows::Forms::Form
	{
	public:
		sensores(void)
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
		~sensores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ idsensor;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ editar;

	private: System::Windows::Forms::Button^ nuevo;
	private: System::Windows::Forms::DataGridView^ dgvSensores;




	private: System::Windows::Forms::Button^ buscar;


	private: System::Windows::Forms::Button^ eliminar;
	private: System::Windows::Forms::ComboBox^ cmbCategoria;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Modelo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::ComboBox^ cmbEstado;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


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
			this->cmbEstado = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cmbCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->eliminar = (gcnew System::Windows::Forms::Button());
			this->editar = (gcnew System::Windows::Forms::Button());
			this->nuevo = (gcnew System::Windows::Forms::Button());
			this->dgvSensores = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Modelo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buscar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->idsensor = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSensores))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cmbEstado);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->cmbCategoria);
			this->groupBox1->Controls->Add(this->eliminar);
			this->groupBox1->Controls->Add(this->editar);
			this->groupBox1->Controls->Add(this->nuevo);
			this->groupBox1->Controls->Add(this->dgvSensores);
			this->groupBox1->Controls->Add(this->buscar);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->idsensor);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(38, 68);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1013, 632);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sensores";
			// 
			// cmbEstado
			// 
			this->cmbEstado->FormattingEnabled = true;
			this->cmbEstado->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Activado", L"Desactivado" });
			this->cmbEstado->Location = System::Drawing::Point(653, 91);
			this->cmbEstado->Name = L"cmbEstado";
			this->cmbEstado->Size = System::Drawing::Size(141, 28);
			this->cmbEstado->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(700, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 20);
			this->label4->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(533, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Estado";
			// 
			// cmbCategoria
			// 
			this->cmbCategoria->FormattingEnabled = true;
			this->cmbCategoria->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Temperatura", L"Gas", L"Humedad" });
			this->cmbCategoria->Location = System::Drawing::Point(361, 91);
			this->cmbCategoria->Name = L"cmbCategoria";
			this->cmbCategoria->Size = System::Drawing::Size(141, 28);
			this->cmbCategoria->TabIndex = 10;
			// 
			// eliminar
			// 
			this->eliminar->Location = System::Drawing::Point(620, 551);
			this->eliminar->Name = L"eliminar";
			this->eliminar->Size = System::Drawing::Size(93, 36);
			this->eliminar->TabIndex = 9;
			this->eliminar->Text = L"eliminar";
			this->eliminar->UseVisualStyleBackColor = true;
			this->eliminar->Click += gcnew System::EventHandler(this, &sensores::eliminar_Click);
			// 
			// editar
			// 
			this->editar->Location = System::Drawing::Point(464, 551);
			this->editar->Name = L"editar";
			this->editar->Size = System::Drawing::Size(93, 36);
			this->editar->TabIndex = 8;
			this->editar->Text = L"Editar";
			this->editar->UseVisualStyleBackColor = true;
			this->editar->Click += gcnew System::EventHandler(this, &sensores::button2_Click);
			// 
			// nuevo
			// 
			this->nuevo->Location = System::Drawing::Point(315, 551);
			this->nuevo->Name = L"nuevo";
			this->nuevo->Size = System::Drawing::Size(93, 36);
			this->nuevo->TabIndex = 7;
			this->nuevo->Text = L"Nuevo";
			this->nuevo->UseVisualStyleBackColor = true;
			this->nuevo->Click += gcnew System::EventHandler(this, &sensores::nuevo_Click);
			// 
			// dgvSensores
			// 
			this->dgvSensores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSensores->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Modelo, this->Column2, this->Column3
			});
			this->dgvSensores->Location = System::Drawing::Point(170, 154);
			this->dgvSensores->Name = L"dgvSensores";
			this->dgvSensores->RowHeadersWidth = 62;
			this->dgvSensores->RowTemplate->Height = 28;
			this->dgvSensores->Size = System::Drawing::Size(667, 375);
			this->dgvSensores->TabIndex = 6;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Modelo
			// 
			this->Modelo->HeaderText = L"Modelo";
			this->Modelo->MinimumWidth = 8;
			this->Modelo->Name = L"Modelo";
			this->Modelo->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Categoria";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Estado";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// buscar
			// 
			this->buscar->Location = System::Drawing::Point(856, 91);
			this->buscar->Name = L"buscar";
			this->buscar->Size = System::Drawing::Size(88, 35);
			this->buscar->TabIndex = 5;
			this->buscar->Text = L"buscar";
			this->buscar->UseVisualStyleBackColor = true;
			this->buscar->Click += gcnew System::EventHandler(this, &sensores::buscar_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(408, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(241, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Categoria";
			// 
			// idsensor
			// 
			this->idsensor->Location = System::Drawing::Point(72, 91);
			this->idsensor->Name = L"idsensor";
			this->idsensor->Size = System::Drawing::Size(150, 26);
			this->idsensor->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"id";
			// 
			// sensores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1080, 743);
			this->Controls->Add(this->groupBox1);
			this->Name = L"sensores";
			this->Text = L"sensores";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSensores))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvSensores->SelectedRows->Count == 0) {
			MessageBox::Show("Por favor, seleccione un registro para editar.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return; // Salir del evento si no hay filas seleccionadas
		}

		int filaSeleccionada = this->dgvSensores->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el índice de la única fila que he seleccionado*/
		int idEditar = Convert::ToInt64(this->dgvSensores->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		SensorController^ sensorController = gcnew SensorController();
		Sensor^ objSensor = sensorController->buscarIdEditar(idEditar);

		editSensor^ ventanaEditarSensor = gcnew editSensor(objSensor);
		ventanaEditarSensor->ShowDialog();

		this->dgvSensores->Rows->Clear();
		List<Sensor^>^ listaSensores = sensorController->buscarAll();
		mostrarGrilla(listaSensores);
	}
	private: System::Void buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ idSensor = this->idsensor->Text;
		String^ categoria = this->cmbCategoria->Text;
		String^ estado = this->cmbEstado->Text;

		Sensor^ sensor = gcnew Sensor();
		List<Sensor^>^ listaSensores;


		SensorController^ sensorController = gcnew SensorController();
		if (idSensor->CompareTo("") == 0 && categoria->CompareTo("") == 0 && estado->CompareTo("") == 0) {
			listaSensores = sensorController->buscarAll();
		}
		if (idSensor->CompareTo("") != 0 && categoria->CompareTo("") == 0 && estado->CompareTo("") == 0) {
			int idbuscado2 = Convert::ToInt64(idSensor);
			listaSensores = sensorController->buscarId(idbuscado2);
		}
		if (idSensor->CompareTo("") == 0 && (categoria->CompareTo("") != 0 || estado->CompareTo("") != 0)) {
			listaSensores = sensorController->buscarSensoresxCategoriaxEstado(categoria, estado);

		}
		mostrarGrilla(listaSensores);
	}
	public: void mostrarGrilla(List<Sensor^>^ listaSensores) {
		this->dgvSensores->Rows->Clear(); //eliminar de sus filas todo-borrar
		for (int i = 0; i < listaSensores->Count; i++) { //recorrer los elementos de la lista
			Sensor^ sensor = listaSensores[i];
			array<String^>^ filaGrilla = gcnew array<String^>(4);
			filaGrilla[0] = Convert::ToString(sensor->getId());
			filaGrilla[1] = sensor->getModelo();
			filaGrilla[2] = sensor->getcategoria();
			filaGrilla[3] = sensor->getEstado();
				
			this->dgvSensores->Rows->Add(filaGrilla);
		}
	}
	private: System::Void eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		SensorController^ sensorController = gcnew SensorController();
		List<Sensor^>^ listaSensores;
		for (int i = 0; i < this->dgvSensores->SelectedRows->Count; i++) {  // sirve para eliminar varios elementos seleccionados
			int filaSeleccionada = this->dgvSensores->SelectedRows[0]->Index;
			int idEliminar = Convert::ToInt64(this->dgvSensores->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			sensorController->eliminarSensor(idEliminar);
			
		}
		MessageBox::Show("El sensor  ha sido eliminado");
		listaSensores = sensorController->buscarAll();
		mostrarGrilla(listaSensores);
	}
	private: System::Void nuevo_Click(System::Object^ sender, System::EventArgs^ e) {
		newSensor^ ventanaNuevoSensor = gcnew newSensor();
		ventanaNuevoSensor->Show();
		this->dgvSensores->Rows->Clear();
		SensorController^ sensorController = gcnew SensorController();
		List<Sensor^>^ listaSensores = sensorController->buscarAll();
		mostrarGrilla(listaSensores);
	}
};
}
