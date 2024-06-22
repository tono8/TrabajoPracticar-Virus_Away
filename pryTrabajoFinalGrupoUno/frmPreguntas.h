#pragma once
namespace pryTrabajoFinalGrupoUno {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	// Estructura para almacenar preguntas y respuestas
	value struct Question
	{
		String^ questionText;
		List<String^>^ answers; // Cambiando a List<T> para su uso con .NET
		int correctAnswerIndex; // Índice de la respuesta correcta
	};
	public ref class frmPreguntas : public System::Windows::Forms::Form
	{
	private:
		// Lista de preguntas y respuestas
		List<Question>^ questions;
		int currentQuestionIndex;
		Random^ random; // Añadido para la selección aleatoria
	public:
		frmPreguntas(void)
		{
			InitializeComponent();
			// Inicialización de preguntas y respuestas usando List<T>
			questions = gcnew List<Question>();

			Question q1;
			q1.questionText = "¿Cuál es la capital de Francia?";
			q1.answers = gcnew List<String^>();
			q1.answers->Add("Londres");
			q1.answers->Add("París");
			q1.answers->Add("Madrid");
			q1.correctAnswerIndex = 1;
			questions->Add(q1);

			Question q2;
			q2.questionText = "¿Cuál es el río más largo del mundo?";
			q2.answers = gcnew List<String^>();
			q2.answers->Add("Amazonas");
			q2.answers->Add("Nilo");
			q2.answers->Add("Yangtsé");
			q2.correctAnswerIndex = 0;
			questions->Add(q2);

			Question q3;
			q3.questionText = "¿Quién escribió 'Don Quijote de la Mancha'?";
			q3.answers = gcnew List<String^>();
			q3.answers->Add("Miguel de Cervantes");
			q3.answers->Add("Gabriel García Márquez");
			q3.answers->Add("Jorge Luis Borges");
			q3.correctAnswerIndex = 0;
			questions->Add(q3);

			random = gcnew Random(); // Inicializar Random
			LoadQuestion(); // Cargar la primera pregunta al iniciar
		}
	protected:
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
			this->btnResponder->Click += gcnew System::EventHandler(this, &frmPreguntas::btnResponder_Click);
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
			this->lblPregunta->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->lblRespuesta1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
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
			this->lblRespuesta2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
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
			this->lblRespuesta3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
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

		// Método para cargar la pregunta actual y sus respuestas
		void LoadQuestion()
		{
			currentQuestionIndex = random->Next(questions->Count); // Selección aleatoria de la pregunta
			Question currentQuestion = questions[currentQuestionIndex];
			lblPregunta->Text = currentQuestion.questionText;
			lblRespuesta1->Text = currentQuestion.answers[0];
			lblRespuesta2->Text = currentQuestion.answers[1];
			lblRespuesta3->Text = currentQuestion.answers[2];
			rbRespuesta1->Checked = false;
			rbRespuesta2->Checked = false;
			rbRespuesta3->Checked = false;
		}

		// Método para verificar la respuesta seleccionada por el usuario
		void CheckAnswer()
		{
			Question currentQuestion = questions[currentQuestionIndex];
			int selectedAnswerIndex = -1;

			if (rbRespuesta1->Checked)
				selectedAnswerIndex = 0;
			else if (rbRespuesta2->Checked)
				selectedAnswerIndex = 1;
			else if (rbRespuesta3->Checked)
				selectedAnswerIndex = 2;

			if (selectedAnswerIndex == currentQuestion.correctAnswerIndex)
			{
				MessageBox::Show("¡Respuesta correcta!");
			}
			else
			{
				MessageBox::Show("Respuesta incorrecta. La respuesta correcta es: " + currentQuestion.answers[currentQuestion.correctAnswerIndex]);
			}

			LoadQuestion(); // Cargar una nueva pregunta aleatoria después de verificar la respuesta
		}

private: System::Void btnResponder_Click(System::Object^ sender, System::EventArgs^ e) {
	CheckAnswer(); // Llamar al método para verificar la respuesta
}
};
}