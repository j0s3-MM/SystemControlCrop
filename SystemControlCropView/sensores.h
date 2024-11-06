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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Button^ buscar;


	private: System::Windows::Forms::Button^ eliminar;
	private: System::Windows::Forms::ComboBox^ cmbCategoria;


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
			this->cmbCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->eliminar = (gcnew System::Windows::Forms::Button());
			this->editar = (gcnew System::Windows::Forms::Button());
			this->nuevo = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buscar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->idsensor = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cmbCategoria);
			this->groupBox1->Controls->Add(this->eliminar);
			this->groupBox1->Controls->Add(this->editar);
			this->groupBox1->Controls->Add(this->nuevo);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->buscar);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->idsensor);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(102, 68);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(873, 596);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sensores";
			// 
			// cmbCategoria
			// 
			this->cmbCategoria->FormattingEnabled = true;
			this->cmbCategoria->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Temperatura", L"Gas", L"Humedad" });
			this->cmbCategoria->Location = System::Drawing::Point(484, 104);
			this->cmbCategoria->Name = L"cmbCategoria";
			this->cmbCategoria->Size = System::Drawing::Size(141, 28);
			this->cmbCategoria->TabIndex = 10;
			// 
			// eliminar
			// 
			this->eliminar->Location = System::Drawing::Point(559, 554);
			this->eliminar->Name = L"eliminar";
			this->eliminar->Size = System::Drawing::Size(93, 36);
			this->eliminar->TabIndex = 9;
			this->eliminar->Text = L"eliminar";
			this->eliminar->UseVisualStyleBackColor = true;
			this->eliminar->Click += gcnew System::EventHandler(this, &sensores::eliminar_Click);
			// 
			// editar
			// 
			this->editar->Location = System::Drawing::Point(403, 554);
			this->editar->Name = L"editar";
			this->editar->Size = System::Drawing::Size(93, 36);
			this->editar->TabIndex = 8;
			this->editar->Text = L"Editar";
			this->editar->UseVisualStyleBackColor = true;
			this->editar->Click += gcnew System::EventHandler(this, &sensores::button2_Click);
			// 
			// nuevo
			// 
			this->nuevo->Location = System::Drawing::Point(254, 554);
			this->nuevo->Name = L"nuevo";
			this->nuevo->Size = System::Drawing::Size(93, 36);
			this->nuevo->TabIndex = 7;
			this->nuevo->Text = L"Nuevo";
			this->nuevo->UseVisualStyleBackColor = true;
			this->nuevo->Click += gcnew System::EventHandler(this, &sensores::nuevo_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(52, 164);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(777, 375);
			this->dataGridView1->TabIndex = 6;
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
			this->buscar->Location = System::Drawing::Point(717, 104);
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
			this->label3->Location = System::Drawing::Point(531, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(364, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Categoria";
			// 
			// idsensor
			// 
			this->idsensor->Location = System::Drawing::Point(134, 104);
			this->idsensor->Name = L"idsensor";
			this->idsensor->Size = System::Drawing::Size(150, 26);
			this->idsensor->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(87, 104);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count == 0) {
			MessageBox::Show("Por favor, seleccione un registro para editar.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return; // Salir del evento si no hay filas seleccionadas
		}

		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el índice de la única fila que he seleccionado*/
		int idEditar = Convert::ToInt64(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		SensorController^ sensorController = gcnew SensorController();
		Sensor^ objSensor = sensorController->buscarIdEditar(idEditar);

		editSensor^ ventanaEditarSensor = gcnew editSensor(objSensor);
		ventanaEditarSensor->ShowDialog();

		this->dataGridView1->Rows->Clear();
		List<Sensor^>^ listaSensores = sensorController->buscarAll();
		mostrarGrilla(listaSensores);
	}
	private: System::Void buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ idSensor = this->idsensor->Text;
		String^ categoria = this->cmbCategoria->Text;
		// int idLotebuscar
		Sensor^ sensor = gcnew Sensor();
		List<Sensor^>^ listaSensores;

		SensorController^ sensorController = gcnew SensorController();
		if (idSensor->CompareTo("") == 0 && categoria->CompareTo("") == 0) {
			listaSensores = sensorController->buscarAll();
		}
		if (idSensor->CompareTo("") == 0 && categoria->CompareTo("") != 0) {
			listaSensores = sensorController->buscarCategoria(categoria);
		}
		if (idSensor->CompareTo("") != 0) {
			int idbuscado2 = Convert::ToInt64(idSensor);
			listaSensores = sensorController->buscarId(idbuscado2);
		}

		mostrarGrilla(listaSensores);
	}
	public: void mostrarGrilla(List<Sensor^>^ listaSensores) {
		this->dataGridView1->Rows->Clear(); //eliminar de sus filas todo-borrar
		for (int i = 0; i < listaSensores->Count; i++) { //recorrer los elementos de la lista
			Sensor^ sensor = listaSensores[i];
			array<String^>^ filaGrilla = gcnew array<String^>(3);
			filaGrilla[0] = Convert::ToString(sensor->getId());
			filaGrilla[1] = sensor->getcategoria();
			filaGrilla[2] = sensor->getEstado();
				
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		SensorController^ sensorController = gcnew SensorController();
		List<Sensor^>^ listaSensores;
		for (int i = 0; i < this->dataGridView1->SelectedRows->Count; i++) {  // sirve para eliminar varios elementos seleccionados
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
			int idEliminar = Convert::ToInt64(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			sensorController->eliminarSensor(idEliminar);

		}
		MessageBox::Show("El invernadero  ha sido eliminado");
		listaSensores = sensorController->buscarAll();
		mostrarGrilla(listaSensores);
	}
	private: System::Void nuevo_Click(System::Object^ sender, System::EventArgs^ e) {
		newSensor^ ventanaNuevoSensor = gcnew newSensor();
		ventanaNuevoSensor->Show();
	}
};
}
