#pragma once
//frmPresentacion
#include "frmJuego1.h"
//#include "frmInstrucciones.h"
//#include "frmCreditos.h"
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
	private: System::Windows::Forms::GroupBox^ grbPrincipales;
	private: System::Windows::Forms::Button^ btnInstrucciones;
	private: System::Windows::Forms::Button^ btnCreditos;
	private: System::Windows::Forms::Button^ btnFinalizar1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	protected:
	private: System::ComponentModel::IContainer^ components;
	private:
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipal::typeid));
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->grbPrincipales = (gcnew System::Windows::Forms::GroupBox());
			this->btnFinalizar1 = (gcnew System::Windows::Forms::Button());
			this->btnCreditos = (gcnew System::Windows::Forms::Button());
			this->btnInstrucciones = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->grbPrincipales->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->grbPrincipales->BackColor = System::Drawing::Color::Transparent;
			this->grbPrincipales->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->grbPrincipales->Controls->Add(this->btnFinalizar1);
			this->grbPrincipales->Controls->Add(this->btnCreditos);
			this->grbPrincipales->Controls->Add(this->btnInstrucciones);
			this->grbPrincipales->Controls->Add(this->btnIniciar);
			this->grbPrincipales->Location = System::Drawing::Point(20, 366);
			this->grbPrincipales->Name = L"grbPrincipales";
			this->grbPrincipales->Size = System::Drawing::Size(262, 255);
			this->grbPrincipales->TabIndex = 1;
			this->grbPrincipales->TabStop = false;
			// 
			// btnFinalizar1
			// 
			this->btnFinalizar1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnFinalizar1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFinalizar1->Location = System::Drawing::Point(6, 209);
			this->btnFinalizar1->Name = L"btnFinalizar1";
			this->btnFinalizar1->Size = System::Drawing::Size(250, 40);
			this->btnFinalizar1->TabIndex = 3;
			this->btnFinalizar1->Text = L"Salir";
			this->btnFinalizar1->UseVisualStyleBackColor = false;
			this->btnFinalizar1->Click += gcnew System::EventHandler(this, &frmPrincipal::btnFinalizar1_Click);
			// 
			// btnCreditos
			// 
			this->btnCreditos->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnCreditos->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreditos->Location = System::Drawing::Point(6, 112);
			this->btnCreditos->Name = L"btnCreditos";
			this->btnCreditos->Size = System::Drawing::Size(250, 40);
			this->btnCreditos->TabIndex = 2;
			this->btnCreditos->Text = L"Creditos";
			this->btnCreditos->UseVisualStyleBackColor = false;
			this->btnCreditos->Click += gcnew System::EventHandler(this, &frmPrincipal::btnCreditos_Click);
			// 
			// btnInstrucciones
			// 
			this->btnInstrucciones->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnInstrucciones->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInstrucciones->Location = System::Drawing::Point(6, 66);
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
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(640, 640);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 640);
			this->Controls->Add(this->grbPrincipales);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmPrincipal";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UPC - TF - //NOMBRE DEL JUEGO//";
			this->grbPrincipales->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		frmJuego1^ frmJ1 = gcnew frmJuego1();
		this->Visible = false;
		frmJ1->ShowDialog();
		this->Visible = true;
	}
	private: System::Void btnInstrucciones_Click(System::Object^ sender, System::EventArgs^ e) {
		//grbPrincipales->Visible = false;
		//grbPrincipales->Visible = true;
	}
	private: System::Void btnCreditos_Click(System::Object^ sender, System::EventArgs^ e) {
		//grbPrincipales->Visible = false;
		//grbPrincipales->Visible = true;
	}
	private: System::Void btnFinalizar1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
