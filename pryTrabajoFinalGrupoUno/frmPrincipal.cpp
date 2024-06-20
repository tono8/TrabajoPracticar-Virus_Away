#include "frmPrincipal.h"
//#include "frmJuego1.h"
#include "Windows.h"
using namespace pryTrabajoFinalGrupoUno;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew frmPrincipal());
	//Application::Run(gcnew frmJuego1());
	return 0;
}