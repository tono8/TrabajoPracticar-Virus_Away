#pragma once

namespace pryTrabajoFinalGrupoUno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pregunta2
	/// </summary>
	public ref class Pregunta2 : public System::Windows::Forms::Form
	{
	public:
		Pregunta2(void)
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
		~Pregunta2()
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
	private: System::Windows::Forms::Button^ btnC_Pregunta2_False;

	private: System::Windows::Forms::Button^ btnB_Pregutnta2_True;

	private: System::Windows::Forms::Button^ btnA_Pregunta2_False;

	private: System::Windows::Forms::Label^ lblTextPregunta1;

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
			this->btnC_Pregunta2_False = (gcnew System::Windows::Forms::Button());
			this->btnB_Pregutnta2_True = (gcnew System::Windows::Forms::Button());
			this->btnA_Pregunta2_False = (gcnew System::Windows::Forms::Button());
			this->lblTextPregunta1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(154, 232);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 24);
			this->label3->TabIndex = 13;
			this->label3->Text = L"4";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(154, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 24);
			this->label2->TabIndex = 12;
			this->label2->Text = L"5";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(154, 161);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 24);
			this->label1->TabIndex = 11;
			this->label1->Text = L"6";
			this->label1->Click += gcnew System::EventHandler(this, &Pregunta2::label1_Click);
			// 
			// btnC_Pregunta2_False
			// 
			this->btnC_Pregunta2_False->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC_Pregunta2_False->Location = System::Drawing::Point(70, 221);
			this->btnC_Pregunta2_False->Name = L"btnC_Pregunta2_False";
			this->btnC_Pregunta2_False->Size = System::Drawing::Size(58, 54);
			this->btnC_Pregunta2_False->TabIndex = 10;
			this->btnC_Pregunta2_False->Text = L"C";
			this->btnC_Pregunta2_False->UseVisualStyleBackColor = true;
			// 
			// btnB_Pregutnta2_True
			// 
			this->btnB_Pregutnta2_True->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB_Pregutnta2_True->Location = System::Drawing::Point(70, 152);
			this->btnB_Pregutnta2_True->Name = L"btnB_Pregutnta2_True";
			this->btnB_Pregutnta2_True->Size = System::Drawing::Size(58, 54);
			this->btnB_Pregutnta2_True->TabIndex = 9;
			this->btnB_Pregutnta2_True->Text = L"B";
			this->btnB_Pregutnta2_True->UseVisualStyleBackColor = true;
			// 
			// btnA_Pregunta2_False
			// 
			this->btnA_Pregunta2_False->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA_Pregunta2_False->Location = System::Drawing::Point(70, 83);
			this->btnA_Pregunta2_False->Name = L"btnA_Pregunta2_False";
			this->btnA_Pregunta2_False->Size = System::Drawing::Size(58, 54);
			this->btnA_Pregunta2_False->TabIndex = 8;
			this->btnA_Pregunta2_False->Text = L"A";
			this->btnA_Pregunta2_False->UseVisualStyleBackColor = true;
			// 
			// lblTextPregunta1
			// 
			this->lblTextPregunta1->AutoSize = true;
			this->lblTextPregunta1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTextPregunta1->Location = System::Drawing::Point(66, 40);
			this->lblTextPregunta1->Name = L"lblTextPregunta1";
			this->lblTextPregunta1->Size = System::Drawing::Size(295, 24);
			this->lblTextPregunta1->TabIndex = 7;
			this->lblTextPregunta1->Text = L"¿Cuantos continentes existen\?";
			// 
			// Pregunta2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(436, 314);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnC_Pregunta2_False);
			this->Controls->Add(this->btnB_Pregutnta2_True);
			this->Controls->Add(this->btnA_Pregunta2_False);
			this->Controls->Add(this->lblTextPregunta1);
			this->Name = L"Pregunta2";
			this->Text = L"Pregunta2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
