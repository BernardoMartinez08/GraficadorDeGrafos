#pragma once
#include "Grafo.h"
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include "Arista.h"
#include "Vertice.h"
#include "ConjuntoAristas.h"
#include "ConjuntoVertices.h"

using namespace std;

namespace ProyectoGraficadorDeGrafos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de GrafoDisplay
	/// </summary>
	public ref class GrafoDisplay : public System::Windows::Forms::Form
	{
	public:
		GrafoDisplay(void)
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
		~GrafoDisplay()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Panel^ plGrafo;
	private:

	protected:

	private: System::Windows::Forms::GroupBox^ gbDatosGrafo;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btLimpiarAristas;
	private: System::Windows::Forms::Button^ btLimpiarVertices;
	private: System::Windows::Forms::RichTextBox^ txtAristas;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ txtVertices;
	private: System::Windows::Forms::Button^ btImportar;

	private: System::Windows::Forms::Button^ btManual;
	private: System::Windows::Forms::Button^ btInsetar;


	private: System::Windows::Forms::RichTextBox^ txtGrafoTexto;
	private: System::Windows::Forms::RichTextBox^ txtGrafoConexiones;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cboTipo;
	private: System::Windows::Forms::Button^ btNuevo;
	private: System::Windows::Forms::GroupBox^ gbOperaciones;
	private: System::Windows::Forms::Button^ ejecutarOperacion;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::RichTextBox^ txtVerticesOperaciones;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ cboTipoOperaciones;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button2;







	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->plGrafo = (gcnew System::Windows::Forms::Panel());
			this->gbDatosGrafo = (gcnew System::Windows::Forms::GroupBox());
			this->btInsetar = (gcnew System::Windows::Forms::Button());
			this->btLimpiarAristas = (gcnew System::Windows::Forms::Button());
			this->btLimpiarVertices = (gcnew System::Windows::Forms::Button());
			this->txtAristas = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtVertices = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btImportar = (gcnew System::Windows::Forms::Button());
			this->btManual = (gcnew System::Windows::Forms::Button());
			this->txtGrafoTexto = (gcnew System::Windows::Forms::RichTextBox());
			this->txtGrafoConexiones = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cboTipo = (gcnew System::Windows::Forms::ComboBox());
			this->btNuevo = (gcnew System::Windows::Forms::Button());
			this->gbOperaciones = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cboTipoOperaciones = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtVerticesOperaciones = (gcnew System::Windows::Forms::RichTextBox());
			this->ejecutarOperacion = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->gbDatosGrafo->SuspendLayout();
			this->gbOperaciones->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(249, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"GRAFICADOR DE GRAFOS.";
			// 
			// plGrafo
			// 
			this->plGrafo->AutoScroll = true;
			this->plGrafo->AutoSize = true;
			this->plGrafo->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plGrafo->Location = System::Drawing::Point(350, 12);
			this->plGrafo->Name = L"plGrafo";
			this->plGrafo->Size = System::Drawing::Size(1247, 651);
			this->plGrafo->TabIndex = 1;
			// 
			// gbDatosGrafo
			// 
			this->gbDatosGrafo->Controls->Add(this->btInsetar);
			this->gbDatosGrafo->Controls->Add(this->btLimpiarAristas);
			this->gbDatosGrafo->Controls->Add(this->btLimpiarVertices);
			this->gbDatosGrafo->Controls->Add(this->txtAristas);
			this->gbDatosGrafo->Controls->Add(this->label3);
			this->gbDatosGrafo->Controls->Add(this->txtVertices);
			this->gbDatosGrafo->Controls->Add(this->label2);
			this->gbDatosGrafo->Enabled = false;
			this->gbDatosGrafo->Font = (gcnew System::Drawing::Font(L"Candara", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->gbDatosGrafo->ForeColor = System::Drawing::Color::Navy;
			this->gbDatosGrafo->Location = System::Drawing::Point(17, 210);
			this->gbDatosGrafo->Name = L"gbDatosGrafo";
			this->gbDatosGrafo->Size = System::Drawing::Size(314, 455);
			this->gbDatosGrafo->TabIndex = 2;
			this->gbDatosGrafo->TabStop = false;
			this->gbDatosGrafo->Text = L"Ingreso del Grafo:";
			this->gbDatosGrafo->Visible = false;
			// 
			// btInsetar
			// 
			this->btInsetar->Location = System::Drawing::Point(165, 400);
			this->btInsetar->Name = L"btInsetar";
			this->btInsetar->Size = System::Drawing::Size(129, 36);
			this->btInsetar->TabIndex = 7;
			this->btInsetar->Text = L"INSERTAR GRAFO";
			this->btInsetar->UseVisualStyleBackColor = true;
			this->btInsetar->Click += gcnew System::EventHandler(this, &GrafoDisplay::btInsetar_Click);
			// 
			// btLimpiarAristas
			// 
			this->btLimpiarAristas->Location = System::Drawing::Point(219, 206);
			this->btLimpiarAristas->Name = L"btLimpiarAristas";
			this->btLimpiarAristas->Size = System::Drawing::Size(75, 26);
			this->btLimpiarAristas->TabIndex = 6;
			this->btLimpiarAristas->Text = L"LIMPIAR";
			this->btLimpiarAristas->UseVisualStyleBackColor = true;
			this->btLimpiarAristas->Click += gcnew System::EventHandler(this, &GrafoDisplay::btLimpiarAristas_Click);
			// 
			// btLimpiarVertices
			// 
			this->btLimpiarVertices->Location = System::Drawing::Point(219, 21);
			this->btLimpiarVertices->Name = L"btLimpiarVertices";
			this->btLimpiarVertices->Size = System::Drawing::Size(75, 26);
			this->btLimpiarVertices->TabIndex = 5;
			this->btLimpiarVertices->Text = L"LIMPIAR";
			this->btLimpiarVertices->UseVisualStyleBackColor = true;
			this->btLimpiarVertices->Click += gcnew System::EventHandler(this, &GrafoDisplay::btLimpiarVertices_Click);
			// 
			// txtAristas
			// 
			this->txtAristas->BackColor = System::Drawing::Color::SkyBlue;
			this->txtAristas->Location = System::Drawing::Point(19, 239);
			this->txtAristas->Name = L"txtAristas";
			this->txtAristas->Size = System::Drawing::Size(275, 138);
			this->txtAristas->TabIndex = 4;
			this->txtAristas->Text = L"Ejemplo: {(1,2),(2,3).....}";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 209);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 23);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Aristas:";
			// 
			// txtVertices
			// 
			this->txtVertices->BackColor = System::Drawing::Color::SkyBlue;
			this->txtVertices->Location = System::Drawing::Point(19, 50);
			this->txtVertices->Name = L"txtVertices";
			this->txtVertices->Size = System::Drawing::Size(275, 136);
			this->txtVertices->TabIndex = 2;
			this->txtVertices->Text = L"Ejemplo: {1,2,....}";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 23);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Vertices:";
			// 
			// btImportar
			// 
			this->btImportar->Font = (gcnew System::Drawing::Font(L"Candara", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btImportar->ForeColor = System::Drawing::Color::Navy;
			this->btImportar->Location = System::Drawing::Point(69, 52);
			this->btImportar->Name = L"btImportar";
			this->btImportar->Size = System::Drawing::Size(208, 23);
			this->btImportar->TabIndex = 7;
			this->btImportar->Text = L"IMPORTAR DE ARCHIVOS";
			this->btImportar->UseVisualStyleBackColor = true;
			this->btImportar->Click += gcnew System::EventHandler(this, &GrafoDisplay::btImportar_Click);
			// 
			// btManual
			// 
			this->btManual->Font = (gcnew System::Drawing::Font(L"Candara", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btManual->ForeColor = System::Drawing::Color::Navy;
			this->btManual->Location = System::Drawing::Point(69, 81);
			this->btManual->Name = L"btManual";
			this->btManual->Size = System::Drawing::Size(208, 23);
			this->btManual->TabIndex = 8;
			this->btManual->Text = L"INSERTAR MANUALMENTE";
			this->btManual->UseVisualStyleBackColor = true;
			this->btManual->Click += gcnew System::EventHandler(this, &GrafoDisplay::btManual_Click);
			// 
			// txtGrafoTexto
			// 
			this->txtGrafoTexto->BackColor = System::Drawing::Color::SkyBlue;
			this->txtGrafoTexto->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtGrafoTexto->Location = System::Drawing::Point(17, 868);
			this->txtGrafoTexto->Name = L"txtGrafoTexto";
			this->txtGrafoTexto->ReadOnly = true;
			this->txtGrafoTexto->Size = System::Drawing::Size(1580, 88);
			this->txtGrafoTexto->TabIndex = 9;
			this->txtGrafoTexto->Text = L"Ejemplo: G = ({1,2,3......},{(1,2),(2,3).....})";
			// 
			// txtGrafoConexiones
			// 
			this->txtGrafoConexiones->BackColor = System::Drawing::Color::SkyBlue;
			this->txtGrafoConexiones->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtGrafoConexiones->Location = System::Drawing::Point(627, 692);
			this->txtGrafoConexiones->Name = L"txtGrafoConexiones";
			this->txtGrafoConexiones->ReadOnly = true;
			this->txtGrafoConexiones->Size = System::Drawing::Size(970, 140);
			this->txtGrafoConexiones->TabIndex = 10;
			this->txtGrafoConexiones->Text = L"Ejemplo: \n1----> [2]\n2----> [1] [3]\n......";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Navy;
			this->label4->Location = System::Drawing::Point(13, 842);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(204, 23);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Grafo en Formato Texto:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Navy;
			this->label5->Location = System::Drawing::Point(623, 666);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(182, 23);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Conexiones del Grafo:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label6->Location = System::Drawing::Point(13, 128);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 23);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Tipo:";
			// 
			// cboTipo
			// 
			this->cboTipo->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboTipo->FormattingEnabled = true;
			this->cboTipo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"DIRIGIDO", L"NO DIRIGIDO" });
			this->cboTipo->Location = System::Drawing::Point(89, 128);
			this->cboTipo->Name = L"cboTipo";
			this->cboTipo->Size = System::Drawing::Size(242, 23);
			this->cboTipo->TabIndex = 14;
			this->cboTipo->Text = L"DIRIGIDO";
			// 
			// btNuevo
			// 
			this->btNuevo->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btNuevo->Font = (gcnew System::Drawing::Font(L"Candara", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btNuevo->ForeColor = System::Drawing::Color::Navy;
			this->btNuevo->Location = System::Drawing::Point(17, 157);
			this->btNuevo->Name = L"btNuevo";
			this->btNuevo->Size = System::Drawing::Size(114, 36);
			this->btNuevo->TabIndex = 9;
			this->btNuevo->Text = L"NUEVO GRAFO";
			this->btNuevo->UseVisualStyleBackColor = false;
			this->btNuevo->Click += gcnew System::EventHandler(this, &GrafoDisplay::btNuevo_Click);
			// 
			// gbOperaciones
			// 
			this->gbOperaciones->Controls->Add(this->button2);
			this->gbOperaciones->Controls->Add(this->groupBox1);
			this->gbOperaciones->Controls->Add(this->cboTipoOperaciones);
			this->gbOperaciones->Controls->Add(this->label9);
			this->gbOperaciones->Controls->Add(this->txtVerticesOperaciones);
			this->gbOperaciones->Controls->Add(this->ejecutarOperacion);
			this->gbOperaciones->Controls->Add(this->label8);
			this->gbOperaciones->Enabled = false;
			this->gbOperaciones->Font = (gcnew System::Drawing::Font(L"Candara", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->gbOperaciones->ForeColor = System::Drawing::Color::Navy;
			this->gbOperaciones->Location = System::Drawing::Point(17, 684);
			this->gbOperaciones->Name = L"gbOperaciones";
			this->gbOperaciones->Size = System::Drawing::Size(600, 148);
			this->gbOperaciones->TabIndex = 8;
			this->gbOperaciones->TabStop = false;
			this->gbOperaciones->Text = L"Operaciones del Grafo:";
			this->gbOperaciones->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(431, 33);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 26);
			this->button2->TabIndex = 18;
			this->button2->Text = L"LIMPIAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GrafoDisplay::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Enabled = false;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Candara", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Navy;
			this->groupBox1->Location = System::Drawing::Point(20, 589);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(600, 148);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Operaciones del Grafo:";
			this->groupBox1->Visible = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::SkyBlue;
			this->richTextBox1->Location = System::Drawing::Point(20, 94);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(368, 40);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Candara", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(431, 94);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 40);
			this->button1->TabIndex = 7;
			this->button1->Text = L"EJECUTAR OPERACION";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(16, 68);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 23);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Vertices:";
			// 
			// cboTipoOperaciones
			// 
			this->cboTipoOperaciones->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboTipoOperaciones->FormattingEnabled = true;
			this->cboTipoOperaciones->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"OBTENER GRADO", L"VERIFICAR CAMINO",
					L"EXISTEN CICLOS"
			});
			this->cboTipoOperaciones->Location = System::Drawing::Point(180, 33);
			this->cboTipoOperaciones->Name = L"cboTipoOperaciones";
			this->cboTipoOperaciones->Size = System::Drawing::Size(208, 23);
			this->cboTipoOperaciones->TabIndex = 17;
			this->cboTipoOperaciones->Text = L"OBTENER GRADO";
			this->cboTipoOperaciones->SelectedIndexChanged += gcnew System::EventHandler(this, &GrafoDisplay::cboTipoOperaciones_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label9->Location = System::Drawing::Point(16, 33);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(158, 23);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Tipo de Operacion:";
			// 
			// txtVerticesOperaciones
			// 
			this->txtVerticesOperaciones->BackColor = System::Drawing::Color::SkyBlue;
			this->txtVerticesOperaciones->Location = System::Drawing::Point(20, 94);
			this->txtVerticesOperaciones->Name = L"txtVerticesOperaciones";
			this->txtVerticesOperaciones->Size = System::Drawing::Size(368, 40);
			this->txtVerticesOperaciones->TabIndex = 8;
			this->txtVerticesOperaciones->Text = L"Escriba los identificadores separados por coma, Ejemplo: 1,2,3.";
			// 
			// ejecutarOperacion
			// 
			this->ejecutarOperacion->Font = (gcnew System::Drawing::Font(L"Candara", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ejecutarOperacion->Location = System::Drawing::Point(431, 94);
			this->ejecutarOperacion->Name = L"ejecutarOperacion";
			this->ejecutarOperacion->Size = System::Drawing::Size(146, 40);
			this->ejecutarOperacion->TabIndex = 7;
			this->ejecutarOperacion->Text = L"EJECUTAR OPERACION";
			this->ejecutarOperacion->UseVisualStyleBackColor = true;
			this->ejecutarOperacion->Click += gcnew System::EventHandler(this, &GrafoDisplay::ejecutarOperacion_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(16, 68);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 23);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Vertices:";
			// 
			// GrafoDisplay
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1622, 968);
			this->Controls->Add(this->txtGrafoConexiones);
			this->Controls->Add(this->gbOperaciones);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btNuevo);
			this->Controls->Add(this->cboTipo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtGrafoTexto);
			this->Controls->Add(this->btManual);
			this->Controls->Add(this->btImportar);
			this->Controls->Add(this->gbDatosGrafo);
			this->Controls->Add(this->plGrafo);
			this->Controls->Add(this->label1);
			this->Name = L"GrafoDisplay";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GrafoDisplay";
			this->gbDatosGrafo->ResumeLayout(false);
			this->gbDatosGrafo->PerformLayout();
			this->gbOperaciones->ResumeLayout(false);
			this->gbOperaciones->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Atributos Globales
		Graph* grafo;

		//Para importar grafo desde un archivo
		string importGraph() {
			string nombreArchivo = "grafo.txt";

			ifstream archivo(nombreArchivo.c_str());
			string linea;
			string grafo = "";

			if (archivo.fail()) {
				cout << "\n\nTexto entrada grafo.txt no existe" << endl;
			}
			else {
				while (!archivo.eof()) {
					archivo >> linea;
					grafo += linea;
				}
			}

			archivo.close();

			return grafo;
		}

		//Funcion para convertir String^ a string
		void MarshalString(String^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

		Graphics^ nodo;

		//Funcion para graficar Vertices
		void drawVertex() {
			if (grafo->getVertexSet()->size() == 0) {
				return;
			}

			nodo = plGrafo->CreateGraphics();

			Vertex* actual = grafo->getVertexSet()->getFirst();
			do {

				int coordenadasX = actual->posicionX;
				int coordenadasY = actual->posicionY;

				String^ tag = gcnew String(actual->getValue());

				nodo->FillEllipse(Brushes::DarkBlue, coordenadasX, coordenadasY, 40, 40);
				nodo->DrawString(tag, plGrafo->Font, Brushes::White, coordenadasX + 5, coordenadasY + 10);

				actual = actual->getNext();

			} while (actual != grafo->getVertexSet()->getFirst());
		}

		//Funcion para graficar Aristas
		void drawEdges() {
			if (grafo->getEdgesSet()->size() == 0) {
				return;
			}

			nodo = plGrafo->CreateGraphics();

			Pen^ lapizFlecha = gcnew Pen(Color::DeepSkyBlue, 7.5);
			Pen^ lapiz = gcnew Pen(Color::DeepSkyBlue, 3.5);

			if (cboTipo->SelectedItem != "DIRIGIDO") {
				lapizFlecha->StartCap = Drawing2D::LineCap::ArrowAnchor;
				lapizFlecha->EndCap = Drawing2D::LineCap::ArrowAnchor;
			}
			else {
				lapizFlecha->StartCap = Drawing2D::LineCap::NoAnchor;
				lapizFlecha->EndCap = Drawing2D::LineCap::ArrowAnchor;
			}

			Edge* actual = grafo->getEdgesSet()->getFirst();
			do {
				Vertex* X = grafo->getVertexSet()->getVertex(actual->getValueX());
				Vertex* Y = grafo->getVertexSet()->getVertex(actual->getValueY());

				int x1 = 0;
				int x2 = 0;

				int y1 = 0;
				int y2 = 0;

				if (X != nullptr && Y != nullptr) {
					x1 = X->posicionX;
					x2 = Y->posicionX;

					y1 = X->posicionY;
					y2 = Y->posicionY;
				}

				//nodo->DrawLine(Pens::Red, x1 + 17, y1 + 17, x2 + 17, y2 + 17);
				nodo->DrawLine(lapizFlecha, x1 + 20, y1 + 20, x2 + 20, y2 + 20);
				//nodo->DrawLine(lapizFlecha, x2 + 17, y2 + 17, x1 + 17, y1 + 17);

				actual = actual->getNext();

			} while (actual != grafo->getEdgesSet()->getFirst());
		}

		//Funcion para resultar Aristas de un camino
		void resaltarAristas(string _expr) {
			vector<string> vertices = grafo->convertToList(_expr);

			nodo = plGrafo->CreateGraphics();

			Pen^ lapizFlecha = gcnew Pen(Color::Red, 7.5);
			Pen^ lapiz = gcnew Pen(Color::Red, 3.5);

			if (cboTipo->SelectedItem != "DIRIGIDO") {
				lapizFlecha->StartCap = Drawing2D::LineCap::ArrowAnchor;
				lapizFlecha->EndCap = Drawing2D::LineCap::ArrowAnchor;
			}
			else {
				lapizFlecha->StartCap = Drawing2D::LineCap::NoAnchor;
				lapizFlecha->EndCap = Drawing2D::LineCap::ArrowAnchor;
			}

			for (int i = 0; i < vertices.size(); i++) {
				if ((i + 1) < vertices.size()) {
					if (grafo->getEdgesSet()->belong(vertices[i].c_str(), vertices[i + 1].c_str())) {
						Vertex* X = grafo->getVertexSet()->getVertex(vertices[i].c_str());
						Vertex* Y = grafo->getVertexSet()->getVertex(vertices[i+1].c_str());

						int x1 = 0;
						int x2 = 0;

						int y1 = 0;
						int y2 = 0;

						if (X != nullptr && Y != nullptr) {
							x1 = X->posicionX;
							x2 = Y->posicionX;

							y1 = X->posicionY;
							y2 = Y->posicionY;
						}

						nodo->DrawLine(lapizFlecha, x1 + 20, y1 + 20, x2 + 20, y2 + 20);
					}
				}
			}
		}


	private: System::Void btImportar_Click(System::Object^ sender, System::EventArgs^ e) {
		gbDatosGrafo->Visible = false;
		gbDatosGrafo->Enabled = false;
		btImportar->Enabled = false;
		btManual->Enabled = true;
		txtGrafoConexiones->Text = "";
		txtGrafoTexto->Text = "";

		string grafotxt;

		grafotxt = importGraph();

		bool _dirigido = false;

		if (cboTipo->SelectedItem == "DIRIGIDO")
			_dirigido = true;
		else
			_dirigido = false;

		grafo = new Graph(grafotxt, _dirigido);

		String^ impresion = gcnew String(grafo->print().c_str());
		String^ impresionConexiones = gcnew String(grafo->printAdjacencyMatrix().c_str());

		txtGrafoTexto->Text = impresion;
		txtGrafoConexiones->Text = impresionConexiones;

		cboTipo->Enabled = false;
		drawVertex();
		drawEdges();
		gbOperaciones->Visible = true;
		gbOperaciones->Enabled = true;
	}


	private: System::Void btManual_Click(System::Object^ sender, System::EventArgs^ e) {
		gbDatosGrafo->Visible = true;
		gbDatosGrafo->Enabled = true;
		btManual->Enabled = false;
		btImportar->Enabled = true;
		txtGrafoConexiones->Text = "";
		txtGrafoTexto->Text = "";

		cboTipo->Enabled = false;
	}


	private: System::Void btLimpiarVertices_Click(System::Object^ sender, System::EventArgs^ e) {
		txtVertices->Text = "Ejemplo: {1,2,....}";
	}


	private: System::Void btLimpiarAristas_Click(System::Object^ sender, System::EventArgs^ e) {
		txtAristas->Text = "Ejemplo: {(1,2),(2,3).....}";
	}


	private: System::Void btInsetar_Click(System::Object^ sender, System::EventArgs^ e) {
		string grafotxt;

		string vertices = "";
		MarshalString(txtVertices->Text, vertices);

		string aristas = "";
		MarshalString(txtAristas->Text, aristas);

		grafotxt = "(" + vertices + "," + aristas + ")";

		bool _dirigido = false;

		if (cboTipo->SelectedItem == "DIRIGIDO")
			_dirigido = true;
		else
			_dirigido = false;

		grafo = new Graph(grafotxt, _dirigido);

		String^ impresion = gcnew String(grafo->print().c_str());
		String^ impresionConexiones = gcnew String(grafo->printAdjacencyMatrix().c_str());

		txtGrafoTexto->Text = impresion;
		txtGrafoConexiones->Text = impresionConexiones;

		drawVertex();
		drawEdges();

		gbOperaciones->Visible = true;
		gbOperaciones->Enabled = true;
	}


	private: System::Void btNuevo_Click(System::Object^ sender, System::EventArgs^ e) {
		grafo = nullptr;
		txtVertices->Text = "Ejemplo: {1,2,....}";
		txtAristas->Text = "Ejemplo: {(1,2),(2,3).....}";
		txtGrafoConexiones->Text = "Ejemplo:\n1---- > [2]\n2---- > [1][3]\n......";
		txtGrafoTexto->Text = "Ejemplo: G = ({1,2,3......},{(1,2),(2,3).....})";
		btImportar->Enabled = true;
		nodo = plGrafo->CreateGraphics();
		nodo->Clear(Color::SkyBlue);
		cboTipo->Enabled = true;
		gbOperaciones->Visible = false;
		gbOperaciones->Enabled = false;
	}

	private: System::Void cboTipoOperaciones_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cboTipoOperaciones->SelectedItem == "OBTENER GRADO"){
			txtVerticesOperaciones->Text = "Escriba el identificador de un vertice.";
		}
		else if (cboTipoOperaciones->SelectedItem == "VERIFICAR CAMINO") {
			txtVerticesOperaciones->Text = "Escriba los identificadores separados por coma, Ejemplo: 1,2,3.";
		}
		else if (cboTipoOperaciones->SelectedItem == "EXISTEN CICLOS") {
			txtVerticesOperaciones->Text = "";
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		txtVerticesOperaciones->Text = "";
	}

	private: System::Void ejecutarOperacion_Click(System::Object^ sender, System::EventArgs^ e) {
		if (cboTipoOperaciones->SelectedItem == "OBTENER GRADO") {
			string vertice = " ";
			MarshalString(txtVerticesOperaciones->Text, vertice);

			int grado = 0;

			if(grafo != nullptr)
				grado = grafo->getVertexGrade(vertice.c_str());

			string txt = "";
			if(grado != -1)
				txt = "EL VERTICE: " + vertice + "\n\nTIENE UN GRADO: " + to_string(grado);
			else
				txt = "EL VERTICE: " + vertice + "\n\nNO EXISTE";

			String^ texto = gcnew String(txt.c_str());
			MessageBox::Show(texto, "RESULTADO");
		}
		else if (cboTipoOperaciones->SelectedItem == "VERIFICAR CAMINO") {
			string vertices = " ";
			MarshalString(txtVerticesOperaciones->Text, vertices);

			bool existeCamino = false;

			if (grafo != nullptr)
				existeCamino = grafo->verifyVertexWay(vertices.c_str());

			string txt = "";
			
			if (existeCamino) {
				txt = "LOS VERTICES:     " + vertices + "\n\nSI ESTAN CONECTADOS POR UN CAMINO";
				resaltarAristas(vertices);
			}
			else
				txt = "LOS VERTICES:     " + vertices + "\n\nNO ESTAN CONECTADOS POR UN CAMINO";

			String^ texto = gcnew String(txt.c_str());
			MessageBox::Show(texto, "RESULTADO");
		}
		else if (cboTipoOperaciones->SelectedItem == "EXISTEN CICLOS") {
			string txt = "";

			if (grafo->getVertexCicle()) {
				txt = "EL GRAFO SI POSEE CICLOS";
			}else
				txt = "EL GRAFO NO POSEE CICLOS";

			String^ texto = gcnew String(txt.c_str());
			MessageBox::Show(texto, "RESULTADO");
		}
	}
};
}

