#pragma once

namespace pryTrabajoFinalGrupoUno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pregunta7
	/// </summary>
	public ref class Pregunta7 : public System::Windows::Forms::Form
	{
	public:
		Pregunta7(void)
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
		~Pregunta7()
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
	private: System::Windows::Forms::Button^ btnC_Pregunta7_True;
	private: System::Windows::Forms::Button^ btnB_Pregutnta7_Falso;
	private: System::Windows::Forms::Button^ btnA_Pregunta7_Falso;
	private: System::Windows::Forms::Label^ lblTextPregunta7;

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
			this->btnC_Pregunta7_True = (gcnew System::Windows::Forms::Button());
			this->btnB_Pregutnta7_Falso = (gcnew System::Windows::Forms::Button());
			this->btnA_Pregunta7_Falso = (gcnew System::Windows::Forms::Button());
			this->lblTextPregunta7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(98, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 24);
			this->label3->TabIndex = 48;
			this->label3->Text = L"Francia";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(98, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 24);
			this->label2->TabIndex = 47;
			this->label2->Text = L"Nueva Zelanda";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(98, 243);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 24);
			this->label1->TabIndex = 46;
			this->label1->Text = L"Australia";
			// 
			// btnC_Pregunta7_True
			// 
			this->btnC_Pregunta7_True->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC_Pregunta7_True->Location = System::Drawing::Point(18, 222);
			this->btnC_Pregunta7_True->Name = L"btnC_Pregunta7_True";
			this->btnC_Pregunta7_True->Size = System::Drawing::Size(58, 54);
			this->btnC_Pregunta7_True->TabIndex = 45;
			this->btnC_Pregunta7_True->Text = L"C";
			this->btnC_Pregunta7_True->UseVisualStyleBackColor = true;
			// 
			// btnB_Pregutnta7_Falso
			// 
			this->btnB_Pregutnta7_Falso->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB_Pregutnta7_Falso->Location = System::Drawing::Point(18, 150);
			this->btnB_Pregutnta7_Falso->Name = L"btnB_Pregutnta7_Falso";
			this->btnB_Pregutnta7_Falso->Size = System::Drawing::Size(58, 54);
			this->btnB_Pregutnta7_Falso->TabIndex = 44;
			this->btnB_Pregutnta7_Falso->Text = L"B";
			this->btnB_Pregutnta7_Falso->UseVisualStyleBackColor = true;
			// 
			// btnA_Pregunta7_Falso
			// 
			this->btnA_Pregunta7_Falso->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA_Pregunta7_Falso->Location = System::Drawing::Point(18, 80);
			this->btnA_Pregunta7_Falso->Name = L"btnA_Pregunta7_Falso";
			this->btnA_Pregunta7_Falso->Size = System::Drawing::Size(58, 54);
			this->btnA_Pregunta7_Falso->TabIndex = 43;
			this->btnA_Pregunta7_Falso->Text = L"A";
			this->btnA_Pregunta7_Falso->UseVisualStyleBackColor = true;
			// 
			// lblTextPregunta7
			// 
			this->lblTextPregunta7->AutoSize = true;
			this->lblTextPregunta7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTextPregunta7->Location = System::Drawing::Point(14, 28);
			this->lblTextPregunta7->Name = L"lblTextPregunta7";
			this->lblTextPregunta7->Size = System::Drawing::Size(441, 24);
			this->lblTextPregunta7->TabIndex = 42;
			this->lblTextPregunta7->Text = L"¿A que pais le pertenece la isla de Tasmania\?";
			// 
			// Pregunta7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(465, 305);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnC_Pregunta7_True);
			this->Controls->Add(this->btnB_Pregutnta7_Falso);
			this->Controls->Add(this->btnA_Pregunta7_Falso);
			this->Controls->Add(this->lblTextPregunta7);
			this->Name = L"Pregunta7";
			this->Text = L"Pregunta7";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
