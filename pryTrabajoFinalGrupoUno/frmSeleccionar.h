#pragma once
#include "frmJuego1.h"
namespace pryTrabajoFinalGrupoUno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmSeleccionar
	/// </summary>
	public ref class frmSeleccionar : public System::Windows::Forms::Form
	{
	public:
		frmSeleccionar(void)
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
		~frmSeleccionar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnIniciarLvl2;
	protected:

	private: System::Windows::Forms::Button^ btnIniciarLvl1;
	private: System::Windows::Forms::Button^ btnRetMenu;
	protected:




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
			this->btnIniciarLvl2 = (gcnew System::Windows::Forms::Button());
			this->btnIniciarLvl1 = (gcnew System::Windows::Forms::Button());
			this->btnRetMenu = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnIniciarLvl2
			// 
			this->btnIniciarLvl2->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnIniciarLvl2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnIniciarLvl2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnIniciarLvl2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnIniciarLvl2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIniciarLvl2->ForeColor = System::Drawing::SystemColors::Control;
			this->btnIniciarLvl2->Location = System::Drawing::Point(488, 537);
			this->btnIniciarLvl2->Name = L"btnIniciarLvl2";
			this->btnIniciarLvl2->Size = System::Drawing::Size(250, 40);
			this->btnIniciarLvl2->TabIndex = 3;
			this->btnIniciarLvl2->Text = L"Nivel 2";
			this->btnIniciarLvl2->UseVisualStyleBackColor = false;
			this->btnIniciarLvl2->Click += gcnew System::EventHandler(this, &frmSeleccionar::btnIniciarLvl2_Click);
			// 
			// btnIniciarLvl1
			// 
			this->btnIniciarLvl1->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnIniciarLvl1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnIniciarLvl1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnIniciarLvl1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnIniciarLvl1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIniciarLvl1->ForeColor = System::Drawing::SystemColors::Control;
			this->btnIniciarLvl1->Location = System::Drawing::Point(112, 537);
			this->btnIniciarLvl1->Name = L"btnIniciarLvl1";
			this->btnIniciarLvl1->Size = System::Drawing::Size(250, 40);
			this->btnIniciarLvl1->TabIndex = 2;
			this->btnIniciarLvl1->Text = L"Nivel 1";
			this->btnIniciarLvl1->UseVisualStyleBackColor = false;
			this->btnIniciarLvl1->Click += gcnew System::EventHandler(this, &frmSeleccionar::btnIniciarLvl1_Click);
			// 
			// btnRetMenu
			// 
			this->btnRetMenu->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnRetMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnRetMenu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRetMenu->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnRetMenu->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRetMenu->ForeColor = System::Drawing::SystemColors::Control;
			this->btnRetMenu->Location = System::Drawing::Point(297, 750);
			this->btnRetMenu->Name = L"btnRetMenu";
			this->btnRetMenu->Size = System::Drawing::Size(250, 40);
			this->btnRetMenu->TabIndex = 3;
			this->btnRetMenu->Text = L"Volver al menu principal";
			this->btnRetMenu->UseVisualStyleBackColor = false;
			this->btnRetMenu->Click += gcnew System::EventHandler(this, &frmSeleccionar::btnRetMenu_Click);
			// 
			// frmSeleccionar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(860, 861);
			this->Controls->Add(this->btnRetMenu);
			this->Controls->Add(this->btnIniciarLvl2);
			this->Controls->Add(this->btnIniciarLvl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmSeleccionar";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Elige el nivel";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnIniciarLvl1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmJuego1^ frmJ1 = gcnew frmJuego1();
		this->Visible=false;
		frmJ1->ShowDialog();
	}
	private: System::Void btnIniciarLvl2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnRetMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		//frmPrincipal^ mMenu = gcnew frmPrincipal();
		//mMenu->Show();
	}
};
}
