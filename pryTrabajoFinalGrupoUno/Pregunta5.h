#pragma once

namespace pryTrabajoFinalGrupoUno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pregunta5
	/// </summary>
	public ref class Pregunta5 : public System::Windows::Forms::Form
	{
	public:
		Pregunta5(void)
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
		~Pregunta5()
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
	private: System::Windows::Forms::Button^ btnC_Pregunta5_False;
	private: System::Windows::Forms::Button^ btnB_Pregutnta5_False;
	private: System::Windows::Forms::Button^ btnA_Pregunta5_True;
	private: System::Windows::Forms::Label^ lblTextPregunta5;

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
			this->btnC_Pregunta5_False = (gcnew System::Windows::Forms::Button());
			this->btnB_Pregutnta5_False = (gcnew System::Windows::Forms::Button());
			this->btnA_Pregunta5_True = (gcnew System::Windows::Forms::Button());
			this->lblTextPregunta5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(154, 267);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 24);
			this->label3->TabIndex = 34;
			this->label3->Text = L"7 de Octubre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(154, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 24);
			this->label2->TabIndex = 33;
			this->label2->Text = L"7 de Junio";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(154, 195);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 24);
			this->label1->TabIndex = 32;
			this->label1->Text = L"7 de Julio";
			// 
			// btnC_Pregunta5_False
			// 
			this->btnC_Pregunta5_False->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC_Pregunta5_False->Location = System::Drawing::Point(74, 246);
			this->btnC_Pregunta5_False->Name = L"btnC_Pregunta5_False";
			this->btnC_Pregunta5_False->Size = System::Drawing::Size(58, 54);
			this->btnC_Pregunta5_False->TabIndex = 31;
			this->btnC_Pregunta5_False->Text = L"C";
			this->btnC_Pregunta5_False->UseVisualStyleBackColor = true;
			// 
			// btnB_Pregutnta5_False
			// 
			this->btnB_Pregutnta5_False->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB_Pregutnta5_False->Location = System::Drawing::Point(74, 174);
			this->btnB_Pregutnta5_False->Name = L"btnB_Pregutnta5_False";
			this->btnB_Pregutnta5_False->Size = System::Drawing::Size(58, 54);
			this->btnB_Pregutnta5_False->TabIndex = 30;
			this->btnB_Pregutnta5_False->Text = L"B";
			this->btnB_Pregutnta5_False->UseVisualStyleBackColor = true;
			// 
			// btnA_Pregunta5_True
			// 
			this->btnA_Pregunta5_True->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA_Pregunta5_True->Location = System::Drawing::Point(74, 104);
			this->btnA_Pregunta5_True->Name = L"btnA_Pregunta5_True";
			this->btnA_Pregunta5_True->Size = System::Drawing::Size(58, 54);
			this->btnA_Pregunta5_True->TabIndex = 29;
			this->btnA_Pregunta5_True->Text = L"A";
			this->btnA_Pregunta5_True->UseVisualStyleBackColor = true;
			// 
			// lblTextPregunta5
			// 
			this->lblTextPregunta5->AutoSize = true;
			this->lblTextPregunta5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTextPregunta5->Location = System::Drawing::Point(46, 46);
			this->lblTextPregunta5->Name = L"lblTextPregunta5";
			this->lblTextPregunta5->Size = System::Drawing::Size(571, 24);
			this->lblTextPregunta5->TabIndex = 28;
			this->lblTextPregunta5->Text = L"¿Que dia del año se celebra en Peru el \'Dia de la Bandera\'\?";
			// 
			// Pregunta5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(648, 346);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnC_Pregunta5_False);
			this->Controls->Add(this->btnB_Pregutnta5_False);
			this->Controls->Add(this->btnA_Pregunta5_True);
			this->Controls->Add(this->lblTextPregunta5);
			this->Name = L"Pregunta5";
			this->Text = L"Pregunta5";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
