#include "frmPrincipal.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace SystemControlCropView;

[STAThreadAttribute]
void main(array <String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    frmPrincipal^ ventana = gcnew frmPrincipal(); // Correcci�n en la creaci�n del formulario.
    Application::Run(ventana); // Se pasa la referencia del formulario sin el operador '%'.
}

//grober
//miranda 