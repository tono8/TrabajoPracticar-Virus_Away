#include "frmPrincipal.h"
#include "frmJuego.h"
#include "Windows.h"
using namespace pryTrabajoFinalGrupoUno;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew frmPrincipal());
	return 0;
}