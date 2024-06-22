#pragma once

namespace pryTrabajoFinalGrupoUno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pregunta9
	/// </summary>
	public ref class Pregunta9 : public System::Windows::Forms::Form
	{
	public:
		Pregunta9(void)
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
		~Pregunta9()
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
	private: System::Windows::Forms::Button^ btnC_Pregunta9_False;

	private: System::Windows::Forms::Button^ btnB_Pregutnta9_Falso;

	private: System::Windows::Forms::Button^ btnA_Pregunta9_True;

	private: System::Windows::Forms::Label^ lblTextPregunta9;


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
			this->btnC_Pregunta9_False = (gcnew System::Windows::Forms::Button());
			this->btnB_Pregutnta9_Falso = (gcnew System::Windows::Forms::Button());
			this->btnA_Pregunta9_True = (gcnew System::Windows::Forms::Button());
			this->lblTextPregunta9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(181, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 24);
			this->label3->TabIndex = 62;
			this->label3->Text = L"Corazon";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(181, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 24);
			this->label2->TabIndex = 61;
			this->label2->Text = L"Cerebro";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(181, 181);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 24);
			this->label1->TabIndex = 60;
			this->label1->Text = L"Higado";
			// 
			// btnC_Pregunta9_False
			// 
			this->btnC_Pregunta9_False->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC_Pregunta9_False->Location = System::Drawing::Point(55, 232);
			this->btnC_Pregunta9_False->Name = L"btnC_Pregunta9_False";
			this->btnC_Pregunta9_False->Size = System::Drawing::Size(58, 54);
			this->btnC_Pregunta9_False->TabIndex = 59;
			this->btnC_Pregunta9_False->Text = L"C";
			this->btnC_Pregunta9_False->UseVisualStyleBackColor = true;
			// 
			// btnB_Pregutnta9_Falso
			// 
			this->btnB_Pregutnta9_Falso->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB_Pregutnta9_Falso->Location = System::Drawing::Point(55, 160);
			this->btnB_Pregutnta9_Falso->Name = L"btnB_Pregutnta9_Falso";
			this->btnB_Pregutnta9_Falso->Size = System::Drawing::Size(58, 54);
			this->btnB_Pregutnta9_Falso->TabIndex = 58;
			this->btnB_Pregutnta9_Falso->Text = L"B";
			this->btnB_Pregutnta9_Falso->UseVisualStyleBackColor = true;
			// 
			// btnA_Pregunta9_True
			// 
			this->btnA_Pregunta9_True->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA_Pregunta9_True->Location = System::Drawing::Point(55, 90);
			this->btnA_Pregunta9_True->Name = L"btnA_Pregunta9_True";
			this->btnA_Pregunta9_True->Size = System::Drawing::Size(58, 54);
			this->btnA_Pregunta9_True->TabIndex = 57;
			this->btnA_Pregunta9_True->Text = L"A";
			this->btnA_Pregunta9_True->UseVisualStyleBackColor = true;
			// 
			// lblTextPregunta9
			// 
			this->lblTextPregunta9->AutoSize = true;
			this->lblTextPregunta9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTextPregunta9->Location = System::Drawing::Point(3, 38);
			this->lblTextPregunta9->Name = L"lblTextPregunta9";
			this->lblTextPregunta9->Size = System::Drawing::Size(559, 24);
			this->lblTextPregunta9->TabIndex = 56;
			this->lblTextPregunta9->Text = L"¿Cual es el organo del cuerpo que consume mas energia\?";
			// 
			// Pregunta9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 325);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnC_Pregunta9_False);
			this->Controls->Add(this->btnB_Pregutnta9_Falso);
			this->Controls->Add(this->btnA_Pregunta9_True);
			this->Controls->Add(this->lblTextPregunta9);
			this->Name = L"Pregunta9";
			this->Text = L"Pregunta9";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
