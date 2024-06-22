#pragma once

namespace pryTrabajoFinalGrupoUno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pregunta6
	/// </summary>
	public ref class Pregunta6 : public System::Windows::Forms::Form
	{
	public:
		Pregunta6(void)
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
		~Pregunta6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnC_Pregunta6_False;
	private: System::Windows::Forms::Button^ btnB_Pregutnta6_True;
	private: System::Windows::Forms::Button^ btnA_Pregunta6_Falso;
	private: System::Windows::Forms::Label^ lblTextPregunta6;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnC_Pregunta6_False = (gcnew System::Windows::Forms::Button());
			this->btnB_Pregutnta6_True = (gcnew System::Windows::Forms::Button());
			this->btnA_Pregunta6_Falso = (gcnew System::Windows::Forms::Button());
			this->lblTextPregunta6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(104, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 24);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Negro y rojo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(104, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 24);
			this->label2->TabIndex = 40;
			this->label2->Text = L"Amarillo y rojo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(104, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 24);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Blanco y rojo";
			// 
			// btnC_Pregunta6_False
			// 
			this->btnC_Pregunta6_False->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC_Pregunta6_False->Location = System::Drawing::Point(24, 239);
			this->btnC_Pregunta6_False->Name = L"btnC_Pregunta6_False";
			this->btnC_Pregunta6_False->Size = System::Drawing::Size(58, 54);
			this->btnC_Pregunta6_False->TabIndex = 38;
			this->btnC_Pregunta6_False->Text = L"C";
			this->btnC_Pregunta6_False->UseVisualStyleBackColor = true;
			// 
			// btnB_Pregutnta6_True
			// 
			this->btnB_Pregutnta6_True->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB_Pregutnta6_True->Location = System::Drawing::Point(24, 167);
			this->btnB_Pregutnta6_True->Name = L"btnB_Pregutnta6_True";
			this->btnB_Pregutnta6_True->Size = System::Drawing::Size(58, 54);
			this->btnB_Pregutnta6_True->TabIndex = 37;
			this->btnB_Pregutnta6_True->Text = L"B";
			this->btnB_Pregutnta6_True->UseVisualStyleBackColor = true;
			// 
			// btnA_Pregunta6_Falso
			// 
			this->btnA_Pregunta6_Falso->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA_Pregunta6_Falso->Location = System::Drawing::Point(24, 97);
			this->btnA_Pregunta6_Falso->Name = L"btnA_Pregunta6_Falso";
			this->btnA_Pregunta6_Falso->Size = System::Drawing::Size(58, 54);
			this->btnA_Pregunta6_Falso->TabIndex = 36;
			this->btnA_Pregunta6_Falso->Text = L"A";
			this->btnA_Pregunta6_Falso->UseVisualStyleBackColor = true;
			// 
			// lblTextPregunta6
			// 
			this->lblTextPregunta6->AutoSize = true;
			this->lblTextPregunta6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTextPregunta6->Location = System::Drawing::Point(20, 45);
			this->lblTextPregunta6->Name = L"lblTextPregunta6";
			this->lblTextPregunta6->Size = System::Drawing::Size(406, 24);
			this->lblTextPregunta6->TabIndex = 35;
			this->lblTextPregunta6->Text = L"¿Que colores posee la bandera de China\?";
			// 
			// Pregunta6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(439, 332);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnC_Pregunta6_False);
			this->Controls->Add(this->btnB_Pregutnta6_True);
			this->Controls->Add(this->btnA_Pregunta6_Falso);
			this->Controls->Add(this->lblTextPregunta6);
			this->Name = L"Pregunta6";
			this->Text = L"Pregunta6";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
