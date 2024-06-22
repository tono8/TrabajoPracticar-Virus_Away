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
	/// Summary for frmJuego2
	/// </summary>
	public ref class frmJuego2 : public System::Windows::Forms::Form
	{
		Controlador^ juego;
	public:
		frmJuego2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			juego = gcnew Controlador(6, 120, 0, 0, 0, 6, 220, 60, 4, 120, 120, 3);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmJuego2()
		{
			if (components)
			{
				delete components;
			}
			delete juego;
		}
	private: System::Windows::Forms::Timer^ timer_I;
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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmJuego2::typeid));
			this->timer_I = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer_I
			// 
			this->timer_I->Enabled = true;
			this->timer_I->Interval = 22;
			this->timer_I->Tick += gcnew System::EventHandler(this, &frmJuego2::timer_I_Tick);
			// 
			// frmJuego2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(860, 861);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"frmJuego2";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UPC - TF - Virus_Away - Nivel 2";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &frmJuego2::frmJuego2_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &frmJuego2::frmJuego2_KeyUp);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer_I_Tick(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = this->CreateGraphics();
		BufferedGraphicsContext^ bfc = BufferedGraphicsManager::Current;
		BufferedGraphics^ bf = bfc->Allocate(g, this->ClientRectangle);

		//bf->Graphics->DrawImage(fondoJuego1_v1, 0, 0, (int)bf->Graphics->VisibleClipBounds.Width, (int)bf->Graphics->VisibleClipBounds.Height);
		bf->Graphics->Clear(SystemColors::Control);
		juego->mostrar(bf->Graphics);

		if (juego->mover(g) == false) {
			timer_I->Enabled = false;
			this->Visible = false;
		}

		bf->Render(g);

		delete bf;
		delete bfc;
		delete g;
	}
	private: System::Void frmJuego2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		juego->movimientoJugador(true, e->KeyCode);
		juego->DispararJugador(true, e->KeyCode);
	}
	private: System::Void frmJuego2_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		juego->movimientoJugador(false, e->KeyCode);
	}
	};
}
