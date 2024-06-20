#pragma once
//#include "frmJuego1.h"
//#include "frmJuego2.h"
//#include "frmSeleccionar.h"

namespace pryTrabajoFinalGrupoUno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmMission
	/// </summary>
	public ref class frmMission : public System::Windows::Forms::Form
	{
	public:
		frmMission(void)
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
		~frmMission()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSlcNiv;
	protected:
	private: System::Windows::Forms::Button^ btnContinuar1;
	private: System::Windows::Forms::Button^ btnMenuPrc;
	private: System::Windows::Forms::PictureBox^ ptbPerder;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMission::typeid));
			this->btnSlcNiv = (gcnew System::Windows::Forms::Button());
			this->btnContinuar1 = (gcnew System::Windows::Forms::Button());
			this->btnMenuPrc = (gcnew System::Windows::Forms::Button());
			this->ptbPerder = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptbPerder))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSlcNiv
			// 
			this->btnSlcNiv->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnSlcNiv->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSlcNiv->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSlcNiv->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSlcNiv->ForeColor = System::Drawing::SystemColors::Control;
			this->btnSlcNiv->Location = System::Drawing::Point(20, 175);
			this->btnSlcNiv->Name = L"btnSlcNiv";
			this->btnSlcNiv->Size = System::Drawing::Size(140, 40);
			this->btnSlcNiv->TabIndex = 4;
			this->btnSlcNiv->Text = L"Seleccion de niveles";
			this->btnSlcNiv->UseVisualStyleBackColor = false;
			this->btnSlcNiv->Click += gcnew System::EventHandler(this, &frmMission::btnSlcNiv_Click);
			// 
			// btnContinuar1
			// 
			this->btnContinuar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnContinuar1->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnContinuar1->Cursor = System::Windows::Forms::Cursors::Help;
			this->btnContinuar1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnContinuar1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnContinuar1->ForeColor = System::Drawing::SystemColors::Control;
			this->btnContinuar1->Location = System::Drawing::Point(20, 120);
			this->btnContinuar1->Name = L"btnContinuar1";
			this->btnContinuar1->Size = System::Drawing::Size(140, 40);
			this->btnContinuar1->TabIndex = 3;
			this->btnContinuar1->Text = L"Responder preguntas";
			this->btnContinuar1->UseVisualStyleBackColor = false;
			this->btnContinuar1->Click += gcnew System::EventHandler(this, &frmMission::btnContinuar1_Click);
			// 
			// btnMenuPrc
			// 
			this->btnMenuPrc->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnMenuPrc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMenuPrc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnMenuPrc->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMenuPrc->ForeColor = System::Drawing::SystemColors::Control;
			this->btnMenuPrc->Location = System::Drawing::Point(20, 230);
			this->btnMenuPrc->Name = L"btnMenuPrc";
			this->btnMenuPrc->Size = System::Drawing::Size(140, 40);
			this->btnMenuPrc->TabIndex = 4;
			this->btnMenuPrc->Text = L"Volver al menu principal";
			this->btnMenuPrc->UseVisualStyleBackColor = false;
			this->btnMenuPrc->Click += gcnew System::EventHandler(this, &frmMission::btnMenuPrc_Click);
			// 
			// ptbPerder
			// 
			this->ptbPerder->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ptbPerder.Image")));
			this->ptbPerder->Location = System::Drawing::Point(0, 1);
			this->ptbPerder->Name = L"ptbPerder";
			this->ptbPerder->Size = System::Drawing::Size(420, 419);
			this->ptbPerder->TabIndex = 5;
			this->ptbPerder->TabStop = false;
			// 
			// frmMission
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(419, 421);
			this->Controls->Add(this->btnMenuPrc);
			this->Controls->Add(this->btnSlcNiv);
			this->Controls->Add(this->btnContinuar1);
			this->Controls->Add(this->ptbPerder);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmMission";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Elije una opcion";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptbPerder))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnContinuar1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSlcNiv_Click(System::Object^ sender, System::EventArgs^ e) {
		//frmSeleccionar^ lvlSlc = gcnew frmSeleccionar();
		//this->Visible=false;
		//lvlSlc->Show();
	}
	private: System::Void btnMenuPrc_Click(System::Object^ sender, System::EventArgs^ e) {
		//frmPrincipal^ mMenu = gcnew frmPrincipal();
		//this->Visible=false;
		//mMenu->Show();
		//this->Close();
	}
};
}
