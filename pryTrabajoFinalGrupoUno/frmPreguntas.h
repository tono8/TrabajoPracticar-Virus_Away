#pragma once

namespace pryTrabajoFinalGrupoUno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmPreguntas
	/// </summary>
	public ref class frmPreguntas : public System::Windows::Forms::Form
	{
	public:
		frmPreguntas(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmPreguntas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ rbRespuesta1;
	private: System::Windows::Forms::RadioButton^ rbRespuesta2;
	private: System::Windows::Forms::RadioButton^ rbRespuesta3;
	private: System::Windows::Forms::Button^ btnResponder;


	protected:

	protected:




	private: System::Windows::Forms::Label^ lblPregunta;
	private: System::Windows::Forms::Label^ lblRespuesta1;
	private: System::Windows::Forms::Label^ lblRespuesta2;
	private: System::Windows::Forms::Label^ lblRespuesta3;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->rbRespuesta1 = (gcnew System::Windows::Forms::RadioButton());
			this->rbRespuesta2 = (gcnew System::Windows::Forms::RadioButton());
			this->rbRespuesta3 = (gcnew System::Windows::Forms::RadioButton());
			this->btnResponder = (gcnew System::Windows::Forms::Button());
			this->lblPregunta = (gcnew System::Windows::Forms::Label());
			this->lblRespuesta1 = (gcnew System::Windows::Forms::Label());
			this->lblRespuesta2 = (gcnew System::Windows::Forms::Label());
			this->lblRespuesta3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// rbRespuesta1
			// 
			this->rbRespuesta1->AutoSize = true;
			this->rbRespuesta1->Location = System::Drawing::Point(124, 479);
			this->rbRespuesta1->Name = L"rbRespuesta1";
			this->rbRespuesta1->Size = System::Drawing::Size(14, 13);
			this->rbRespuesta1->TabIndex = 0;
			this->rbRespuesta1->UseVisualStyleBackColor = true;
			// 
			// rbRespuesta2
			// 
			this->rbRespuesta2->AutoSize = true;
			this->rbRespuesta2->Location = System::Drawing::Point(311, 479);
			this->rbRespuesta2->Name = L"rbRespuesta2";
			this->rbRespuesta2->Size = System::Drawing::Size(14, 13);
			this->rbRespuesta2->TabIndex = 1;
			this->rbRespuesta2->UseVisualStyleBackColor = true;
			// 
			// rbRespuesta3
			// 
			this->rbRespuesta3->AutoSize = true;
			this->rbRespuesta3->Location = System::Drawing::Point(496, 479);
			this->rbRespuesta3->Name = L"rbRespuesta3";
			this->rbRespuesta3->Size = System::Drawing::Size(14, 13);
			this->rbRespuesta3->TabIndex = 2;
			this->rbRespuesta3->UseVisualStyleBackColor = true;
			// 
			// btnResponder
			// 
			this->btnResponder->Location = System::Drawing::Point(193, 510);
			this->btnResponder->Name = L"btnResponder";
			this->btnResponder->Size = System::Drawing::Size(250, 40);
			this->btnResponder->TabIndex = 3;
			this->btnResponder->Text = L"Aceptar seleccion";
			this->btnResponder->UseVisualStyleBackColor = true;
			// 
			// lblPregunta
			// 
			this->lblPregunta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->lblPregunta->Location = System::Drawing::Point(12, 65);
			this->lblPregunta->Name = L"lblPregunta";
			this->lblPregunta->Size = System::Drawing::Size(607, 196);
			this->lblPregunta->TabIndex = 8;
			this->lblPregunta->Text = L"PREGUNTA";
			this->lblPregunta->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblRespuesta1
			// 
			this->lblRespuesta1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRespuesta1->Location = System::Drawing::Point(56, 280);
			this->lblRespuesta1->Name = L"lblRespuesta1";
			this->lblRespuesta1->Size = System::Drawing::Size(150, 185);
			this->lblRespuesta1->TabIndex = 5;
			this->lblRespuesta1->Text = L"RESPUESTA #1";
			this->lblRespuesta1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblRespuesta2
			// 
			this->lblRespuesta2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRespuesta2->Location = System::Drawing::Point(243, 280);
			this->lblRespuesta2->Name = L"lblRespuesta2";
			this->lblRespuesta2->Size = System::Drawing::Size(150, 185);
			this->lblRespuesta2->TabIndex = 6;
			this->lblRespuesta2->Text = L"RESPUESTA #2";
			this->lblRespuesta2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblRespuesta3
			// 
			this->lblRespuesta3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRespuesta3->Location = System::Drawing::Point(428, 280);
			this->lblRespuesta3->Name = L"lblRespuesta3";
			this->lblRespuesta3->Size = System::Drawing::Size(150, 185);
			this->lblRespuesta3->TabIndex = 7;
			this->lblRespuesta3->Text = L"RESPUESTA #3";
			this->lblRespuesta3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// frmPreguntas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(631, 601);
			this->Controls->Add(this->lblRespuesta3);
			this->Controls->Add(this->lblRespuesta2);
			this->Controls->Add(this->lblRespuesta1);
			this->Controls->Add(this->btnResponder);
			this->Controls->Add(this->rbRespuesta3);
			this->Controls->Add(this->rbRespuesta2);
			this->Controls->Add(this->rbRespuesta1);
			this->Controls->Add(this->lblPregunta);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmPreguntas";
			this->ShowIcon = false;
			this->Text = L"Pregunta / Mision";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


};
}
