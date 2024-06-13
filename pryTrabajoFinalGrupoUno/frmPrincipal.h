#pragma once
//frmPresentacion
#include "frmJuego.h"


namespace pryTrabajoFinalGrupoUno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
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
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnIniciar;
	private: System::Windows::Forms::GroupBox^ grbPrincipales;
	private: System::Windows::Forms::Button^ btnInstrucciones;


	private: System::Windows::Forms::Button^ btnCreditos;
	private: System::Windows::Forms::Button^ btnFinalizar1;


	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->grbPrincipales = (gcnew System::Windows::Forms::GroupBox());
			this->btnInstrucciones = (gcnew System::Windows::Forms::Button());
			this->btnCreditos = (gcnew System::Windows::Forms::Button());
			this->btnFinalizar1 = (gcnew System::Windows::Forms::Button());
			this->grbPrincipales->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnIniciar
			// 
			this->btnIniciar->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnIniciar->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIniciar->Location = System::Drawing::Point(6, 20);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(250, 40);
			this->btnIniciar->TabIndex = 0;
			this->btnIniciar->Text = L"Iniciar Juego";
			this->btnIniciar->UseVisualStyleBackColor = false;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &frmPrincipal::btnIniciar_Click);
			// 
			// grbPrincipales
			// 
			this->grbPrincipales->Controls->Add(this->btnFinalizar1);
			this->grbPrincipales->Controls->Add(this->btnCreditos);
			this->grbPrincipales->Controls->Add(this->btnInstrucciones);
			this->grbPrincipales->Controls->Add(this->btnIniciar);
			this->grbPrincipales->Location = System::Drawing::Point(12, 288);
			this->grbPrincipales->Name = L"grbPrincipales";
			this->grbPrincipales->Size = System::Drawing::Size(262, 255);
			this->grbPrincipales->TabIndex = 1;
			this->grbPrincipales->TabStop = false;
			// 
			// btnInstrucciones
			// 
			this->btnInstrucciones->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnInstrucciones->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInstrucciones->Location = System::Drawing::Point(6, 66);
			this->btnInstrucciones->Name = L"btnInstrucciones";
			this->btnInstrucciones->Size = System::Drawing::Size(250, 40);
			this->btnInstrucciones->TabIndex = 0;
			this->btnInstrucciones->Text = L"Instrucciones";
			this->btnInstrucciones->UseVisualStyleBackColor = false;
			this->btnInstrucciones->Click += gcnew System::EventHandler(this, &frmPrincipal::btnIniciar_Click);
			// 
			// btnCreditos
			// 
			this->btnCreditos->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnCreditos->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreditos->Location = System::Drawing::Point(6, 112);
			this->btnCreditos->Name = L"btnCreditos";
			this->btnCreditos->Size = System::Drawing::Size(250, 40);
			this->btnCreditos->TabIndex = 0;
			this->btnCreditos->Text = L"Creditos";
			this->btnCreditos->UseVisualStyleBackColor = false;
			this->btnCreditos->Click += gcnew System::EventHandler(this, &frmPrincipal::btnIniciar_Click);
			// 
			// btnFinalizar1
			// 
			this->btnFinalizar1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnFinalizar1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFinalizar1->Location = System::Drawing::Point(6, 209);
			this->btnFinalizar1->Name = L"btnFinalizar1";
			this->btnFinalizar1->Size = System::Drawing::Size(250, 40);
			this->btnFinalizar1->TabIndex = 0;
			this->btnFinalizar1->Text = L"Salir";
			this->btnFinalizar1->UseVisualStyleBackColor = false;
			this->btnFinalizar1->Click += gcnew System::EventHandler(this, &frmPrincipal::btnIniciar_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 601);
			this->Controls->Add(this->grbPrincipales);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmPrincipal";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UPC - TF - //NOMBRE DEL JUEGO//";
			this->grbPrincipales->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		frmJuego^ frmJ = gcnew frmJuego();
		this->Visible = false;
		frmJ->ShowDialog();
		this->Visible = true;
	}
	};
}
