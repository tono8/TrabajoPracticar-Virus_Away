#pragma once

namespace pryTrabajoFinalGrupoUno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pregunta12
	/// </summary>
	public ref class Pregunta12 : public System::Windows::Forms::Form
	{
	public:
		Pregunta12(void)
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
		~Pregunta12()
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
	private: System::Windows::Forms::Button^ btnC_Pregunta12_False;

	private: System::Windows::Forms::Button^ btnB_Pregutnta12_Falso;


	private: System::Windows::Forms::Button^ btnA_Pregunta12_True;
	private: System::Windows::Forms::Label^ lblTextPregunta12;





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
			this->btnC_Pregunta12_False = (gcnew System::Windows::Forms::Button());
			this->btnB_Pregutnta12_Falso = (gcnew System::Windows::Forms::Button());
			this->btnA_Pregunta12_True = (gcnew System::Windows::Forms::Button());
			this->lblTextPregunta12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(206, 249);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 24);
			this->label3->TabIndex = 83;
			this->label3->Text = L"Callao";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(206, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 24);
			this->label2->TabIndex = 82;
			this->label2->Text = L"Cusco";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(206, 177);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 24);
			this->label1->TabIndex = 81;
			this->label1->Text = L"Cajamarca";
			// 
			// btnC_Pregunta12_False
			// 
			this->btnC_Pregunta12_False->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC_Pregunta12_False->Location = System::Drawing::Point(114, 228);
			this->btnC_Pregunta12_False->Name = L"btnC_Pregunta12_False";
			this->btnC_Pregunta12_False->Size = System::Drawing::Size(58, 54);
			this->btnC_Pregunta12_False->TabIndex = 80;
			this->btnC_Pregunta12_False->Text = L"C";
			this->btnC_Pregunta12_False->UseVisualStyleBackColor = true;
			// 
			// btnB_Pregutnta12_Falso
			// 
			this->btnB_Pregutnta12_Falso->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB_Pregutnta12_Falso->Location = System::Drawing::Point(114, 156);
			this->btnB_Pregutnta12_Falso->Name = L"btnB_Pregutnta12_Falso";
			this->btnB_Pregutnta12_Falso->Size = System::Drawing::Size(58, 54);
			this->btnB_Pregutnta12_Falso->TabIndex = 79;
			this->btnB_Pregutnta12_Falso->Text = L"B";
			this->btnB_Pregutnta12_Falso->UseVisualStyleBackColor = true;
			// 
			// btnA_Pregunta12_True
			// 
			this->btnA_Pregunta12_True->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA_Pregunta12_True->Location = System::Drawing::Point(114, 86);
			this->btnA_Pregunta12_True->Name = L"btnA_Pregunta12_True";
			this->btnA_Pregunta12_True->Size = System::Drawing::Size(58, 54);
			this->btnA_Pregunta12_True->TabIndex = 78;
			this->btnA_Pregunta12_True->Text = L"A";
			this->btnA_Pregunta12_True->UseVisualStyleBackColor = true;
			// 
			// lblTextPregunta12
			// 
			this->lblTextPregunta12->AutoSize = true;
			this->lblTextPregunta12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTextPregunta12->Location = System::Drawing::Point(12, 36);
			this->lblTextPregunta12->Name = L"lblTextPregunta12";
			this->lblTextPregunta12->Size = System::Drawing::Size(581, 24);
			this->lblTextPregunta12->TabIndex = 77;
			this->lblTextPregunta12->Text = L"¿En que departamento de Peru se encuentra Machu Picchu\?";
			// 
			// Pregunta12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 319);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnC_Pregunta12_False);
			this->Controls->Add(this->btnB_Pregutnta12_Falso);
			this->Controls->Add(this->btnA_Pregunta12_True);
			this->Controls->Add(this->lblTextPregunta12);
			this->Name = L"Pregunta12";
			this->Text = L"Pregunta12";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
