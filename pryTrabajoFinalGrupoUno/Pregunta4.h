#pragma once

namespace pryTrabajoFinalGrupoUno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pregunta4
	/// </summary>
	public ref class Pregunta4 : public System::Windows::Forms::Form
	{
	public:
		Pregunta4(void)
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
		~Pregunta4()
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
	private: System::Windows::Forms::Button^ btnC_Pregunta4_False;
	private: System::Windows::Forms::Button^ btnB_Pregutnta4_False;
	private: System::Windows::Forms::Button^ btnA_Pregunta4_True;
	private: System::Windows::Forms::Label^ lblTextPregunta4;


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
			this->btnC_Pregunta4_False = (gcnew System::Windows::Forms::Button());
			this->btnB_Pregutnta4_False = (gcnew System::Windows::Forms::Button());
			this->btnA_Pregunta4_True = (gcnew System::Windows::Forms::Button());
			this->lblTextPregunta4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(143, 272);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 24);
			this->label3->TabIndex = 27;
			this->label3->Text = L"1901";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(143, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 24);
			this->label2->TabIndex = 26;
			this->label2->Text = L"1861";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(143, 200);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 24);
			this->label1->TabIndex = 25;
			this->label1->Text = L"1944";
			// 
			// btnC_Pregunta4_False
			// 
			this->btnC_Pregunta4_False->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC_Pregunta4_False->Location = System::Drawing::Point(63, 251);
			this->btnC_Pregunta4_False->Name = L"btnC_Pregunta4_False";
			this->btnC_Pregunta4_False->Size = System::Drawing::Size(58, 54);
			this->btnC_Pregunta4_False->TabIndex = 24;
			this->btnC_Pregunta4_False->Text = L"C";
			this->btnC_Pregunta4_False->UseVisualStyleBackColor = true;
			// 
			// btnB_Pregutnta4_False
			// 
			this->btnB_Pregutnta4_False->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB_Pregutnta4_False->Location = System::Drawing::Point(63, 179);
			this->btnB_Pregutnta4_False->Name = L"btnB_Pregutnta4_False";
			this->btnB_Pregutnta4_False->Size = System::Drawing::Size(58, 54);
			this->btnB_Pregutnta4_False->TabIndex = 23;
			this->btnB_Pregutnta4_False->Text = L"B";
			this->btnB_Pregutnta4_False->UseVisualStyleBackColor = true;
			// 
			// btnA_Pregunta4_True
			// 
			this->btnA_Pregunta4_True->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA_Pregunta4_True->Location = System::Drawing::Point(63, 109);
			this->btnA_Pregunta4_True->Name = L"btnA_Pregunta4_True";
			this->btnA_Pregunta4_True->Size = System::Drawing::Size(58, 54);
			this->btnA_Pregunta4_True->TabIndex = 22;
			this->btnA_Pregunta4_True->Text = L"A";
			this->btnA_Pregunta4_True->UseVisualStyleBackColor = true;
			// 
			// lblTextPregunta4
			// 
			this->lblTextPregunta4->AutoSize = true;
			this->lblTextPregunta4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTextPregunta4->Location = System::Drawing::Point(35, 51);
			this->lblTextPregunta4->Name = L"lblTextPregunta4";
			this->lblTextPregunta4->Size = System::Drawing::Size(481, 24);
			this->lblTextPregunta4->TabIndex = 21;
			this->lblTextPregunta4->Text = L"¿En que año se tomo la primera fotografia a color\?";
			// 
			// Pregunta4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(549, 326);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnC_Pregunta4_False);
			this->Controls->Add(this->btnB_Pregutnta4_False);
			this->Controls->Add(this->btnA_Pregunta4_True);
			this->Controls->Add(this->lblTextPregunta4);
			this->Name = L"Pregunta4";
			this->Text = L"Pregunta4";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
