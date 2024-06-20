#pragma once
//frmPresentacion
#include "frmInstrucciones.h"
#include "frmInstrucciones_alternativo.h"
#include "frmCreditos.h"
//#include "frmExtras.h"
namespace pryTrabajoFinalGrupoUno {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
		{
			InitializeComponent();
		}
	protected:
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnIniciar;

	private: System::Windows::Forms::Button^ btnInstrucciones;
	private: System::Windows::Forms::Button^ btnCreditos;
	private: System::Windows::Forms::Button^ btnFinalizar1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnBonificacion;

	protected:
	protected:
	private: System::ComponentModel::IContainer^ components;
	private:
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipal::typeid));
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->btnFinalizar1 = (gcnew System::Windows::Forms::Button());
			this->btnCreditos = (gcnew System::Windows::Forms::Button());
			this->btnInstrucciones = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnBonificacion = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->btnIniciar->Location = System::Drawing::Point(195, 354);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(250, 40);
			this->btnIniciar->TabIndex = 0;
			this->btnIniciar->Text = L"Iniciar Juego";
			this->btnIniciar->UseVisualStyleBackColor = false;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &frmPrincipal::btnIniciar_Click);
			// 
			// btnFinalizar1
			// 
			this->btnFinalizar1->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnFinalizar1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnFinalizar1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnFinalizar1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFinalizar1->ForeColor = System::Drawing::SystemColors::Control;
			this->btnFinalizar1->Location = System::Drawing::Point(195, 484);
			this->btnFinalizar1->Name = L"btnFinalizar1";
			this->btnFinalizar1->Size = System::Drawing::Size(250, 40);
			this->btnFinalizar1->TabIndex = 3;
			this->btnFinalizar1->Text = L"Salir";
			this->btnFinalizar1->UseVisualStyleBackColor = false;
			this->btnFinalizar1->Click += gcnew System::EventHandler(this, &frmPrincipal::btnFinalizar1_Click);
			// 
			// btnCreditos
			// 
			this->btnCreditos->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnCreditos->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCreditos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCreditos->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreditos->ForeColor = System::Drawing::SystemColors::Control;
			this->btnCreditos->Location = System::Drawing::Point(378, 420);
			this->btnCreditos->Name = L"btnCreditos";
			this->btnCreditos->Size = System::Drawing::Size(250, 40);
			this->btnCreditos->TabIndex = 2;
			this->btnCreditos->Text = L"Creditos";
			this->btnCreditos->UseVisualStyleBackColor = false;
			this->btnCreditos->Click += gcnew System::EventHandler(this, &frmPrincipal::btnCreditos_Click);
			// 
			// btnInstrucciones
			// 
			this->btnInstrucciones->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnInstrucciones->BackColor = System::Drawing::SystemColors::Desktop;
			this->btnInstrucciones->Cursor = System::Windows::Forms::Cursors::Help;
			this->btnInstrucciones->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnInstrucciones->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInstrucciones->ForeColor = System::Drawing::SystemColors::Control;
			this->btnInstrucciones->Location = System::Drawing::Point(12, 421);
			this->btnInstrucciones->Name = L"btnInstrucciones";
			this->btnInstrucciones->Size = System::Drawing::Size(250, 40);
			this->btnInstrucciones->TabIndex = 1;
			this->btnInstrucciones->Text = L"Instrucciones";
			this->btnInstrucciones->UseVisualStyleBackColor = false;
			this->btnInstrucciones->Click += gcnew System::EventHandler(this, &frmPrincipal::btnInstrucciones_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(640, 640);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// btnBonificacion
			// 
			this->btnBonificacion->BackColor = System::Drawing::SystemColors::GrayText;
			this->btnBonificacion->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBonificacion->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Pixel, static_cast<System::Byte>(0)));
			this->btnBonificacion->ForeColor = System::Drawing::SystemColors::Control;
			this->btnBonificacion->Location = System::Drawing::Point(195, 549);
			this->btnBonificacion->Name = L"btnBonificacion";
			this->btnBonificacion->Size = System::Drawing::Size(250, 40);
			this->btnBonificacion->TabIndex = 4;
			this->btnBonificacion->Text = L"Contenido Adicional";
			this->btnBonificacion->UseVisualStyleBackColor = false;
			this->btnBonificacion->Visible = false;
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 641);
			this->Controls->Add(this->btnBonificacion);
			this->Controls->Add(this->btnFinalizar1);
			this->Controls->Add(this->btnCreditos);
			this->Controls->Add(this->btnIniciar);
			this->Controls->Add(this->btnInstrucciones);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->Name = L"frmPrincipal";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UPC - TF - Virus_Zapper";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		//frmJuego1^ frmJ1 = gcnew frmJuego1();
		frmInstrucciones_alternativo^ frmInstrAlt = gcnew frmInstrucciones_alternativo();
		this->Visible = false;
		//frmJ1->ShowDialog();
		frmInstrAlt->ShowDialog();
		this->Visible = true;
	}
	private: System::Void btnInstrucciones_Click(System::Object^ sender, System::EventArgs^ e) {
		frmInstrucciones^ frmInstr = gcnew frmInstrucciones();
		this->Visible = false;
		frmInstr->ShowDialog();
		this->Visible = true;
	}
	private: System::Void btnCreditos_Click(System::Object^ sender, System::EventArgs^ e) {
		frmCreditos^ frmIntegrantes = gcnew frmCreditos();
		this->Visible = false;
		frmIntegrantes->ShowDialog();
		this->Visible = true;
	}
	private: System::Void btnFinalizar1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
