#pragma once

namespace pryTrabajoFinalGrupoUno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmCreditos
	/// </summary>
	public ref class frmCreditos : public System::Windows::Forms::Form
	{
	public:
		frmCreditos(void)
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
		~frmCreditos()
		{
			if (components)
			{
				delete components;
			}
		}
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmCreditos::typeid));
			this->btnRetMenu = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
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
			this->btnRetMenu->Location = System::Drawing::Point(292, 714);
			this->btnRetMenu->Name = L"btnRetMenu";
			this->btnRetMenu->Size = System::Drawing::Size(250, 40);
			this->btnRetMenu->TabIndex = 0;
			this->btnRetMenu->Text = L"Volver al menu principal";
			this->btnRetMenu->UseVisualStyleBackColor = false;
			this->btnRetMenu->Click += gcnew System::EventHandler(this, &frmCreditos::btnRetMenu_Click);
			// 
			// frmCreditos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(860, 788);
			this->Controls->Add(this->btnRetMenu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmCreditos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"frmCreditos";
			this->Load += gcnew System::EventHandler(this, &frmCreditos::frmCreditos_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnRetMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void frmCreditos_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
