#pragma once

namespace pryTrabajoFinalGrupoUno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmInstrucciones
	/// </summary>
	public ref class frmInstrucciones : public System::Windows::Forms::Form
	{
	public:
		frmInstrucciones(void)
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
		~frmInstrucciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnIniciar;
	private: System::Windows::Forms::Button^ btnRetMenu;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmInstrucciones::typeid));
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->btnRetMenu = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnIniciar
			// 
			this->btnIniciar->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnIniciar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnIniciar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnIniciar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnIniciar->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIniciar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnIniciar->Location = System::Drawing::Point(297, 520);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(250, 40);
			this->btnIniciar->TabIndex = 0;
			this->btnIniciar->Text = L"Seleccionar nivel";
			this->btnIniciar->UseVisualStyleBackColor = false;
			this->btnIniciar->Visible = false;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &frmInstrucciones::btnIniciar_Click);
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
			this->btnRetMenu->Location = System::Drawing::Point(297, 593);
			this->btnRetMenu->Name = L"btnRetMenu";
			this->btnRetMenu->Size = System::Drawing::Size(250, 40);
			this->btnRetMenu->TabIndex = 1;
			this->btnRetMenu->Text = L"Volver al menu principal";
			this->btnRetMenu->UseVisualStyleBackColor = false;
			this->btnRetMenu->Click += gcnew System::EventHandler(this, &frmInstrucciones::btnRetMenu_Click);
			// 
			// frmInstrucciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(860, 788);
			this->Controls->Add(this->btnRetMenu);
			this->Controls->Add(this->btnIniciar);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"frmInstrucciones";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Instrucciones";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnRetMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
