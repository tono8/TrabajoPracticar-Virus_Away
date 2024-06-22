#pragma once

namespace pryTrabajoFinalGrupoUno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pregunta8
	/// </summary>
	public ref class Pregunta8 : public System::Windows::Forms::Form
	{
	public:
		Pregunta8(void)
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
		~Pregunta8()
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
	private: System::Windows::Forms::Button^ btnC_Pregunta8_True;

	private: System::Windows::Forms::Button^ btnB_Pregutnta8_Falso;

	private: System::Windows::Forms::Button^ btnA_Pregunta8_Falso;

	private: System::Windows::Forms::Label^ lblTextPregunta8;


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
			this->btnC_Pregunta8_True = (gcnew System::Windows::Forms::Button());
			this->btnB_Pregutnta8_Falso = (gcnew System::Windows::Forms::Button());
			this->btnA_Pregunta8_Falso = (gcnew System::Windows::Forms::Button());
			this->lblTextPregunta8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(114, 257);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 24);
			this->label3->TabIndex = 55;
			this->label3->Text = L"Bolivar";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(114, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 24);
			this->label2->TabIndex = 54;
			this->label2->Text = L"Peso";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(114, 185);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 24);
			this->label1->TabIndex = 53;
			this->label1->Text = L"Real";
			// 
			// btnC_Pregunta8_True
			// 
			this->btnC_Pregunta8_True->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC_Pregunta8_True->Location = System::Drawing::Point(23, 236);
			this->btnC_Pregunta8_True->Name = L"btnC_Pregunta8_True";
			this->btnC_Pregunta8_True->Size = System::Drawing::Size(58, 54);
			this->btnC_Pregunta8_True->TabIndex = 52;
			this->btnC_Pregunta8_True->Text = L"C";
			this->btnC_Pregunta8_True->UseVisualStyleBackColor = true;
			// 
			// btnB_Pregutnta8_Falso
			// 
			this->btnB_Pregutnta8_Falso->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB_Pregutnta8_Falso->Location = System::Drawing::Point(23, 164);
			this->btnB_Pregutnta8_Falso->Name = L"btnB_Pregutnta8_Falso";
			this->btnB_Pregutnta8_Falso->Size = System::Drawing::Size(58, 54);
			this->btnB_Pregutnta8_Falso->TabIndex = 51;
			this->btnB_Pregutnta8_Falso->Text = L"B";
			this->btnB_Pregutnta8_Falso->UseVisualStyleBackColor = true;
			// 
			// btnA_Pregunta8_Falso
			// 
			this->btnA_Pregunta8_Falso->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA_Pregunta8_Falso->Location = System::Drawing::Point(23, 94);
			this->btnA_Pregunta8_Falso->Name = L"btnA_Pregunta8_Falso";
			this->btnA_Pregunta8_Falso->Size = System::Drawing::Size(58, 54);
			this->btnA_Pregunta8_Falso->TabIndex = 50;
			this->btnA_Pregunta8_Falso->Text = L"A";
			this->btnA_Pregunta8_Falso->UseVisualStyleBackColor = true;
			// 
			// lblTextPregunta8
			// 
			this->lblTextPregunta8->AutoSize = true;
			this->lblTextPregunta8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTextPregunta8->Location = System::Drawing::Point(19, 42);
			this->lblTextPregunta8->Name = L"lblTextPregunta8";
			this->lblTextPregunta8->Size = System::Drawing::Size(410, 24);
			this->lblTextPregunta8->TabIndex = 49;
			this->lblTextPregunta8->Text = L"¿Como se llama la moneda de Venezuela\?";
			// 
			// Pregunta8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(479, 332);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnC_Pregunta8_True);
			this->Controls->Add(this->btnB_Pregutnta8_Falso);
			this->Controls->Add(this->btnA_Pregunta8_Falso);
			this->Controls->Add(this->lblTextPregunta8);
			this->Name = L"Pregunta8";
			this->Text = L"Pregunta8";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
