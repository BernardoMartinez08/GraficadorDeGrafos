#pragma once

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
	protected:
	private: System::Windows::Forms::Panel^ panel1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Fluent Icons", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(229, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"GRAFICADOR DE GRAFOS.";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(360, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(960, 619);
			this->panel1->TabIndex = 1;
			// 
			// GrafoDisplay
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1332, 643);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Name = L"GrafoDisplay";
			this->Text = L"GrafoDisplay";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
