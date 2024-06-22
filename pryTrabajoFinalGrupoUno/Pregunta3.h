#pragma once

namespace pryTrabajoFinalGrupoUno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pregunta3
	/// </summary>
	public ref class Pregunta3 : public System::Windows::Forms::Form
	{
	public:
		Pregunta3(void)
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
		~Pregunta3()
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
	private: System::Windows::Forms::Button^ btnC_Pregunta3_True;

	private: System::Windows::Forms::Button^ btnB_Pregutnta3_False;

	private: System::Windows::Forms::Button^ btnA_Pregunta3_False;

	private: System::Windows::Forms::Label^ lblTextPregunta3;


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
			this->btnC_Pregunta3_True = (gcnew System::Windows::Forms::Button());
			this->btnB_Pregutnta3_False = (gcnew System::Windows::Forms::Button());
			this->btnA_Pregunta3_False = (gcnew System::Windows::Forms::Button());
			this->lblTextPregunta3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(208, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 24);
			this->label3->TabIndex = 20;
			this->label3->Text = L"8";
			this->label3->Click += gcnew System::EventHandler(this, &Pregunta3::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(208, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 24);
			this->label2->TabIndex = 19;
			this->label2->Text = L"0";
			this->label2->Click += gcnew System::EventHandler(this, &Pregunta3::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(208, 165);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 24);
			this->label1->TabIndex = 18;
			this->label1->Text = L"6";
			this->label1->Click += gcnew System::EventHandler(this, &Pregunta3::label1_Click);
			// 
			// btnC_Pregunta3_True
			// 
			this->btnC_Pregunta3_True->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC_Pregunta3_True->Location = System::Drawing::Point(124, 225);
			this->btnC_Pregunta3_True->Name = L"btnC_Pregunta3_True";
			this->btnC_Pregunta3_True->Size = System::Drawing::Size(58, 54);
			this->btnC_Pregunta3_True->TabIndex = 17;
			this->btnC_Pregunta3_True->Text = L"C";
			this->btnC_Pregunta3_True->UseVisualStyleBackColor = true;
			this->btnC_Pregunta3_True->Click += gcnew System::EventHandler(this, &Pregunta3::btnC_Pregunta2_False_Click);
			// 
			// btnB_Pregutnta3_False
			// 
			this->btnB_Pregutnta3_False->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnB_Pregutnta3_False->Location = System::Drawing::Point(124, 156);
			this->btnB_Pregutnta3_False->Name = L"btnB_Pregutnta3_False";
			this->btnB_Pregutnta3_False->Size = System::Drawing::Size(58, 54);
			this->btnB_Pregutnta3_False->TabIndex = 16;
			this->btnB_Pregutnta3_False->Text = L"B";
			this->btnB_Pregutnta3_False->UseVisualStyleBackColor = true;
			this->btnB_Pregutnta3_False->Click += gcnew System::EventHandler(this, &Pregunta3::btnB_Pregutnta2_True_Click);
			// 
			// btnA_Pregunta3_False
			// 
			this->btnA_Pregunta3_False->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnA_Pregunta3_False->Location = System::Drawing::Point(124, 87);
			this->btnA_Pregunta3_False->Name = L"btnA_Pregunta3_False";
			this->btnA_Pregunta3_False->Size = System::Drawing::Size(58, 54);
			this->btnA_Pregunta3_False->TabIndex = 15;
			this->btnA_Pregunta3_False->Text = L"A";
			this->btnA_Pregunta3_False->UseVisualStyleBackColor = true;
			this->btnA_Pregunta3_False->Click += gcnew System::EventHandler(this, &Pregunta3::btnA_Pregunta2_False_Click);
			// 
			// lblTextPregunta3
			// 
			this->lblTextPregunta3->AutoSize = true;
			this->lblTextPregunta3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTextPregunta3->Location = System::Drawing::Point(120, 44);
			this->lblTextPregunta3->Name = L"lblTextPregunta3";
			this->lblTextPregunta3->Size = System::Drawing::Size(300, 24);
			this->lblTextPregunta3->TabIndex = 14;
			this->lblTextPregunta3->Text = L"¿Cual es la raiz cubica de 512\?";
			this->lblTextPregunta3->Click += gcnew System::EventHandler(this, &Pregunta3::lblTextPregunta1_Click);
			// 
			// Pregunta3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 323);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnC_Pregunta3_True);
			this->Controls->Add(this->btnB_Pregutnta3_False);
			this->Controls->Add(this->btnA_Pregunta3_False);
			this->Controls->Add(this->lblTextPregunta3);
			this->Name = L"Pregunta3";
			this->Text = L"Pregunta3";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lblTextPregunta1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnC_Pregunta2_False_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnB_Pregutnta2_True_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnA_Pregunta2_False_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
