#pragma once
#include "Grafo.h"
#include <iostream>
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
	private: System::Windows::Forms::Panel^ plGrafo;
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
			this->gbDatosGrafo->SuspendLayout();
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
			this->plGrafo->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plGrafo->Location = System::Drawing::Point(350, 12);
			this->plGrafo->Name = L"plGrafo";
			this->plGrafo->Size = System::Drawing::Size(970, 651);
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
			this->gbDatosGrafo->Location = System::Drawing::Point(17, 222);
			this->gbDatosGrafo->Name = L"gbDatosGrafo";
			this->gbDatosGrafo->Size = System::Drawing::Size(314, 572);
			this->gbDatosGrafo->TabIndex = 2;
			this->gbDatosGrafo->TabStop = false;
			this->gbDatosGrafo->Text = L"Ingreso del Grafo:";
			this->gbDatosGrafo->Visible = false;
			// 
			// btInsetar
			// 
			this->btInsetar->Location = System::Drawing::Point(166, 511);
			this->btInsetar->Name = L"btInsetar";
			this->btInsetar->Size = System::Drawing::Size(129, 36);
			this->btInsetar->TabIndex = 7;
			this->btInsetar->Text = L"INSERTAR GRAFO";
			this->btInsetar->UseVisualStyleBackColor = true;
			this->btInsetar->Click += gcnew System::EventHandler(this, &GrafoDisplay::btInsetar_Click);
			// 
			// btLimpiarAristas
			// 
			this->btLimpiarAristas->Location = System::Drawing::Point(220, 269);
			this->btLimpiarAristas->Name = L"btLimpiarAristas";
			this->btLimpiarAristas->Size = System::Drawing::Size(75, 26);
			this->btLimpiarAristas->TabIndex = 6;
			this->btLimpiarAristas->Text = L"LIMPIAR";
			this->btLimpiarAristas->UseVisualStyleBackColor = true;
			this->btLimpiarAristas->Click += gcnew System::EventHandler(this, &GrafoDisplay::btLimpiarAristas_Click);
			// 
			// btLimpiarVertices
			// 
			this->btLimpiarVertices->Location = System::Drawing::Point(220, 30);
			this->btLimpiarVertices->Name = L"btLimpiarVertices";
			this->btLimpiarVertices->Size = System::Drawing::Size(75, 26);
			this->btLimpiarVertices->TabIndex = 5;
			this->btLimpiarVertices->Text = L"LIMPIAR";
			this->btLimpiarVertices->UseVisualStyleBackColor = true;
			this->btLimpiarVertices->Click += gcnew System::EventHandler(this, &GrafoDisplay::btLimpiarVertices_Click);
			// 
			// txtAristas
			// 
			this->txtAristas->BackColor = System::Drawing::Color::Azure;
			this->txtAristas->Location = System::Drawing::Point(20, 298);
			this->txtAristas->Name = L"txtAristas";
			this->txtAristas->Size = System::Drawing::Size(275, 187);
			this->txtAristas->TabIndex = 4;
			this->txtAristas->Text = L"Ejemplo: {(1,2),(2,3).....}";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 272);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 23);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Aristas:";
			// 
			// txtVertices
			// 
			this->txtVertices->BackColor = System::Drawing::Color::Azure;
			this->txtVertices->Location = System::Drawing::Point(20, 59);
			this->txtVertices->Name = L"txtVertices";
			this->txtVertices->Size = System::Drawing::Size(275, 187);
			this->txtVertices->TabIndex = 2;
			this->txtVertices->Text = L"Ejemplo: {1,2,....}";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 33);
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
			this->btImportar->Location = System::Drawing::Point(41, 52);
			this->btImportar->Name = L"btImportar";
			this->btImportar->Size = System::Drawing::Size(275, 23);
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
			this->btManual->Location = System::Drawing::Point(41, 81);
			this->btManual->Name = L"btManual";
			this->btManual->Size = System::Drawing::Size(275, 23);
			this->btManual->TabIndex = 8;
			this->btManual->Text = L"INSERTAR MANUALMENTE";
			this->btManual->UseVisualStyleBackColor = true;
			this->btManual->Click += gcnew System::EventHandler(this, &GrafoDisplay::btManual_Click);
			// 
			// txtGrafoTexto
			// 
			this->txtGrafoTexto->BackColor = System::Drawing::Color::Azure;
			this->txtGrafoTexto->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtGrafoTexto->Location = System::Drawing::Point(350, 692);
			this->txtGrafoTexto->Name = L"txtGrafoTexto";
			this->txtGrafoTexto->ReadOnly = true;
			this->txtGrafoTexto->Size = System::Drawing::Size(970, 88);
			this->txtGrafoTexto->TabIndex = 9;
			this->txtGrafoTexto->Text = L"Ejemplo: G = ({1,2,3......},{(1,2),(2,3).....})";
			// 
			// txtGrafoConexiones
			// 
			this->txtGrafoConexiones->BackColor = System::Drawing::Color::Azure;
			this->txtGrafoConexiones->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtGrafoConexiones->Location = System::Drawing::Point(350, 814);
			this->txtGrafoConexiones->Name = L"txtGrafoConexiones";
			this->txtGrafoConexiones->ReadOnly = true;
			this->txtGrafoConexiones->Size = System::Drawing::Size(970, 131);
			this->txtGrafoConexiones->TabIndex = 10;
			this->txtGrafoConexiones->Text = L"Ejemplo: \n1----> [2]\n2----> [1] [3]\n......";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Navy;
			this->label4->Location = System::Drawing::Point(346, 663);
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
			this->label5->Location = System::Drawing::Point(346, 785);
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
			this->label6->Location = System::Drawing::Point(13, 125);
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
			this->cboTipo->Location = System::Drawing::Point(89, 125);
			this->cboTipo->Name = L"cboTipo";
			this->cboTipo->Size = System::Drawing::Size(242, 23);
			this->cboTipo->TabIndex = 14;
			// 
			// btNuevo
			// 
			this->btNuevo->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btNuevo->Font = (gcnew System::Drawing::Font(L"Candara", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btNuevo->ForeColor = System::Drawing::Color::Navy;
			this->btNuevo->Location = System::Drawing::Point(17, 166);
			this->btNuevo->Name = L"btNuevo";
			this->btNuevo->Size = System::Drawing::Size(114, 36);
			this->btNuevo->TabIndex = 9;
			this->btNuevo->Text = L"NUEVO GRAFO";
			this->btNuevo->UseVisualStyleBackColor = false;
			this->btNuevo->Click += gcnew System::EventHandler(this, &GrafoDisplay::btNuevo_Click);
			// 
			// GrafoDisplay
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1340, 968);
			this->Controls->Add(this->btNuevo);
			this->Controls->Add(this->cboTipo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtGrafoConexiones);
			this->Controls->Add(this->txtGrafoTexto);
			this->Controls->Add(this->btManual);
			this->Controls->Add(this->btImportar);
			this->Controls->Add(this->gbDatosGrafo);
			this->Controls->Add(this->plGrafo);
			this->Controls->Add(this->label1);
			this->Name = L"GrafoDisplay";
			this->Text = L"GrafoDisplay";
			this->gbDatosGrafo->ResumeLayout(false);
			this->gbDatosGrafo->PerformLayout();
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


	//Funcion para graficar Vertices
		void drawVertex() {
			if (grafo->getVertexSet()->size() == 0) {
				return;
			}

			Vertex* actual = grafo->getVertexSet()->getFirst();
			do {
				Graphics^ nodo;
				nodo = plGrafo->CreateGraphics();

				int coordenadasX = actual->posicionX;
				int coordenadasY = actual->posicionY;

				String^ tag = gcnew String(actual->getValue());

				nodo->FillEllipse(Brushes::DarkBlue, coordenadasX, coordenadasY, 35, 35);
				nodo->DrawString(tag, Font, Brushes::White, coordenadasX + 5, coordenadasY + 10);
				
				actual = actual->getNext();

			} while (actual != grafo->getVertexSet()->getFirst());
		}

	//Funcion para graficar Aristas
		void drawEdges() {
			if (grafo->getEdgesSet()->size() == 0) {
				return;
			}

			Edge* actual = grafo->getEdgesSet()->getFirst();
			do {
				Graphics^ nodo;
				nodo = plGrafo->CreateGraphics();

				Vertex* X = grafo->getVertexSet()->getVertex(actual->getValueX());
				Vertex* Y = grafo->getVertexSet()->getVertex(actual->getValueY());

				int x1 = 0;
				int x2 = 0;

				int y1 = 0;
				int y2 = 0;

				if (X != nullptr && Y != nullptr) {
					cout << "aqui";
					x1 = X->posicionX;
				    x2 = Y->posicionX;

					y1 = X->posicionY;
					y2 = Y->posicionY;
				}
				else {
					cout << "aqui 2";
				}

				nodo->DrawLine(Pens::Red, x1 + 17, y1 + 17, x2 + 17, y2 + 17);

				actual = actual->getNext();

			} while (actual != grafo->getEdgesSet()->getFirst());
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

		drawEdges();
		drawVertex();
	}


	private: System::Void btManual_Click(System::Object^ sender, System::EventArgs^ e) {
		gbDatosGrafo->Visible = true;
		gbDatosGrafo->Enabled = true;
		btManual->Enabled = false;
		btImportar->Enabled = true;
		txtGrafoConexiones->Text = "";
		txtGrafoTexto->Text = "";
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
	}


	private: System::Void btNuevo_Click(System::Object^ sender, System::EventArgs^ e) {
		grafo = nullptr;
		txtVertices->Text = "Ejemplo: {1,2,....}";
		txtAristas->Text = "Ejemplo: {(1,2),(2,3).....}";
		txtGrafoConexiones->Text = "Ejemplo:\n1---- > [2]\n2---- > [1][3]\n......";
		txtGrafoTexto->Text = "Ejemplo: G = ({1,2,3......},{(1,2),(2,3).....})";

	}

};
}
