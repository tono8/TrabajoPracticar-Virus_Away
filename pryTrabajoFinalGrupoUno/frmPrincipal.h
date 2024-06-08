#pragma once
#include "Juego.h"

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
		Controlador^ juego;
	public:
		frmPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			juego = gcnew Controlador();
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
			delete juego;
		}
	private: System::Windows::Forms::Timer^ timer_I;
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
			this->components = (gcnew System::ComponentModel::Container());
			this->timer_I = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer_I
			// 
			this->timer_I->Enabled = true;
			this->timer_I->Interval = 22;
			this->timer_I->Tick += gcnew System::EventHandler(this, &frmPrincipal::timer_I_Tick);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmPrincipal";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UPC - TF - //NOMBRE DEL JUEGO//";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &frmPrincipal::frmPrincipal_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &frmPrincipal::frmPrincipal_KeyUp);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer_I_Tick(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = this->CreateGraphics();
		BufferedGraphicsContext^ bfc = BufferedGraphicsManager::Current;
		BufferedGraphics^ bf = bfc->Allocate(g, this->ClientRectangle);

		bf->Graphics->Clear(SystemColors::Control);

		juego->mover(bf->Graphics);
		juego->mostrar(bf->Graphics);

		bf->Render(g);

		delete bf;
		delete bfc;
		delete g;
	}
	private: System::Void frmPrincipal_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		juego->movimientoJugador(true, e->KeyCode);
	}
	private: System::Void frmPrincipal_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		juego->movimientoJugador(false, e->KeyCode);
	}
	};
}
