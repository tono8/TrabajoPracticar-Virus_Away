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
	/// Summary for frmJuego
	/// </summary>
	public ref class frmJuego : public System::Windows::Forms::Form
	{
		Controlador^ juego;
	public:
		frmJuego(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			juego = gcnew Controlador(220, 60, 2, 0, 0, 0, 0, 0, 0);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmJuego()
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
			this->timer_I = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer_I
			// 
			this->timer_I->Enabled = true;
			this->timer_I->Interval = 22;
			this->timer_I->Tick += gcnew System::EventHandler(this, &frmJuego::timer_I_Tick);
			// 
			// frmJuego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(844, 821);
			this->Cursor = System::Windows::Forms::Cursors::No;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmJuego";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UPC - TF - //NOMBRE DEL JUEGO//";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &frmJuego::frmJuego_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &frmJuego::frmJuego_KeyUp);
			this->ResumeLayout(false);

		}
#pragma endregion
	//void sala1_nivel1() {
	//	Bitmap^ bgS1N1 = gcnew Bitmap("img/fondoS1N1_test1.png");
	//}
	//void sala2_nivel1() {
	//	Bitmap^ bgS2N1 = gcnew Bitmap("img/fondoS2N1_test1.png");
	//}
	//void sala3_nivel1() {
	//	Bitmap^ bgS3N1 = gcnew Bitmap("img/fondoS3N1_test1.png");
	//}
	//void sala4_nivel1() {
	//	Bitmap^ bgS4N1 = gcnew Bitmap("img/fondoS4N1_test1.png");
	//}
	//void sala5_nivel1() {
	//	Bitmap^ bgS5N1 = gcnew Bitmap("img/fondoS5N1_test1.png");
	//}
	//void sala6_nivel1() {
	//	Bitmap^ bgS6N1 = gcnew Bitmap("img/fondoS6N1_test1.png");
	//}
	//void sala7_nivel1() {
	//	Bitmap^ bgS7N1 = gcnew Bitmap("img/fondoS7N1_test1.png");
	//}
	//void sala8_nivel1() {
	//	Bitmap^ bgS8N1 = gcnew Bitmap("img/fondoS8N1_test1.png");
	//}
	//void sala9_nivel1() {
	//	Bitmap^ bgS9N1 = gcnew Bitmap("img/fondoS9N1_test1.png");
	//}
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
	private: System::Void frmJuego_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		juego->movimientoJugador(true, e->KeyCode);
	}
	private: System::Void frmJuego_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		juego->movimientoJugador(false, e->KeyCode);
	}
	};
}
