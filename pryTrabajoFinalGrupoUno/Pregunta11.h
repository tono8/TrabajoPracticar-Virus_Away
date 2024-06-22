#pragma once

namespace pryTrabajoFinalGrupoUno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pregunta11
	/// </summary>
	public ref class Pregunta11 : public System::Windows::Forms::Form
	{
	public:
		Pregunta11(void)
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
		~Pregunta11()
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
	private: System::Windows::Forms::Button^ btnC_Pregunta10_False;
	private: System::Windows::Forms::Button^ btnB_Pregutnta10_True;
	private: System::Windows::Forms::Button^ btnA_Pregunta10_Falso;
	private: System::Windows::Forms::Label^ lblTextPregunta11;


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
			this->btnC_Pregunta10_False = (gcnew System::Windows::Forms::Button());
			this->btnB_Pregutnta10_True = (gcnew System::Windows::Forms::Button());
			this->btnA_Pregunta10_Falso = (gcnew System::Windows::Forms::Button());
			this->lblTextPregunta11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(144, 259);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 24);
			this->label3->TabIndex = 76;
			this->label3->Text = L"Cultura Chavin";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(144, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 24);
			this->label2->TabIndex = 75;
			this->label2->Text = L"Cultura Paracas";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(144, 187);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 24);
			this->label1->TabIndex = 74;
			this->label1->Text = L"Cultura Caral";
			// 
			// btnC_Pregunta10_False
			// 
			this->btnC_Pregunta10_False->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC_Pregunta10_False->Location = System::Drawing::Point(47, 238);
			this->btnC_Pregunta10_False->Name = L"btnC_Pregunta10_False";
			this->btnC_Pregunta10_False->Size = System::Drawing::Size(58, 54);
			this->btnC_Pregunta10_False->TabIndex = 73;
			this->btnC_Pregunta10_False->Text = L"C";
			this->btnC_Pregunta10_False->UseVisualStyleBackColor = true;
			// 
			// btnB_Pregutnta10_True
			// 
			this->btnB_Pregutnta10_True->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB_Pregutnta10_True->Location = System::Drawing::Point(47, 166);
			this->btnB_Pregutnta10_True->Name = L"btnB_Pregutnta10_True";
			this->btnB_Pregutnta10_True->Size = System::Drawing::Size(58, 54);
			this->btnB_Pregutnta10_True->TabIndex = 72;
			this->btnB_Pregutnta10_True->Text = L"B";
			this->btnB_Pregutnta10_True->UseVisualStyleBackColor = true;
			// 
			// btnA_Pregunta10_Falso
			// 
			this->btnA_Pregunta10_Falso->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA_Pregunta10_Falso->Location = System::Drawing::Point(47, 96);
			this->btnA_Pregunta10_Falso->Name = L"btnA_Pregunta10_Falso";
			this->btnA_Pregunta10_Falso->Size = System::Drawing::Size(58, 54);
			this->btnA_Pregunta10_Falso->TabIndex = 71;
			this->btnA_Pregunta10_Falso->Text = L"A";
			this->btnA_Pregunta10_Falso->UseVisualStyleBackColor = true;
			// 
			// lblTextPregunta11
			// 
			this->lblTextPregunta11->AutoSize = true;
			this->lblTextPregunta11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTextPregunta11->Location = System::Drawing::Point(12, 41);
			this->lblTextPregunta11->Name = L"lblTextPregunta11";
			this->lblTextPregunta11->Size = System::Drawing::Size(396, 24);
			this->lblTextPregunta11->TabIndex = 70;
			this->lblTextPregunta11->Text = L"¿Cual es la cultura mas antigua del Peru\?";
			// 
			// Pregunta11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(421, 336);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnC_Pregunta10_False);
			this->Controls->Add(this->btnB_Pregutnta10_True);
			this->Controls->Add(this->btnA_Pregunta10_Falso);
			this->Controls->Add(this->lblTextPregunta11);
			this->Name = L"Pregunta11";
			this->Text = L"Pregunta11";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
