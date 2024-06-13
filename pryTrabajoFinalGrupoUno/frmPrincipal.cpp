// ESTA RAMA NO PUEDE SER COMBINADA CON LA RAMA MAESTRA

#include "frmPrincipal.h"
#include "Windows.h"
using namespace pryTrabajoFinalGrupoUno;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew frmPrincipal());
	return 0;
}