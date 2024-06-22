#pragma once

namespace pryTrabajoFinalGrupoUno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pregunta1
	/// </summary>
	public ref class Pregunta1 : public System::Windows::Forms::Form
	{
	public:
		Pregunta1(void)
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
		~Pregunta1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTextPregunta1;
	private: System::Windows::Forms::Button^ btnA_Pregunta1_True;
	private: System::Windows::Forms::Button^ btnB_Pregutnta1_False;
	private: System::Windows::Forms::Button^ btnC_Pregunta1_False;






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
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
			this->lblTextPregunta1 = (gcnew System::Windows::Forms::Label());
			this->btnA_Pregunta1_True = (gcnew System::Windows::Forms::Button());
			this->btnB_Pregutnta1_False = (gcnew System::Windows::Forms::Button());
			this->btnC_Pregunta1_False = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblTextPregunta1
			// 
			this->lblTextPregunta1->AutoSize = true;
			this->lblTextPregunta1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTextPregunta1->Location = System::Drawing::Point(26, 63);
			this->lblTextPregunta1->Name = L"lblTextPregunta1";
			this->lblTextPregunta1->Size = System::Drawing::Size(355, 24);
			this->lblTextPregunta1->TabIndex = 0;
			this->lblTextPregunta1->Text = L"¿Cuantos paises limitan con Mexico\?";
			// 
			// btnA_Pregunta1_True
			// 
			this->btnA_Pregunta1_True->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA_Pregunta1_True->Location = System::Drawing::Point(30, 106);
			this->btnA_Pregunta1_True->Name = L"btnA_Pregunta1_True";
			this->btnA_Pregunta1_True->Size = System::Drawing::Size(58, 54);
			this->btnA_Pregunta1_True->TabIndex = 1;
			this->btnA_Pregunta1_True->Text = L"A";
			this->btnA_Pregunta1_True->UseVisualStyleBackColor = true;
			// 
			// btnB_Pregutnta1_False
			// 
			this->btnB_Pregutnta1_False->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB_Pregutnta1_False->Location = System::Drawing::Point(30, 175);
			this->btnB_Pregutnta1_False->Name = L"btnB_Pregutnta1_False";
			this->btnB_Pregutnta1_False->Size = System::Drawing::Size(58, 54);
			this->btnB_Pregutnta1_False->TabIndex = 2;
			this->btnB_Pregutnta1_False->Text = L"B";
			this->btnB_Pregutnta1_False->UseVisualStyleBackColor = true;
			// 
			// btnC_Pregunta1_False
			// 
			this->btnC_Pregunta1_False->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC_Pregunta1_False->Location = System::Drawing::Point(30, 244);
			this->btnC_Pregunta1_False->Name = L"btnC_Pregunta1_False";
			this->btnC_Pregunta1_False->Size = System::Drawing::Size(58, 54);
			this->btnC_Pregunta1_False->TabIndex = 3;
			this->btnC_Pregunta1_False->Text = L"C";
			this->btnC_Pregunta1_False->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(114, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(114, 185);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(114, 255);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"6";
			// 
			// Pregunta1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 323);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnC_Pregunta1_False);
			this->Controls->Add(this->btnB_Pregutnta1_False);
			this->Controls->Add(this->btnA_Pregunta1_True);
			this->Controls->Add(this->lblTextPregunta1);
			this->Name = L"Pregunta1";
			this->Text = L"Pregunta1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
