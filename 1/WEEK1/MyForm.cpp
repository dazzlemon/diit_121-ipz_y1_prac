#include "MyForm.h"
#include "methods.h"
#include "math_functions_x.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);


    WEEK1::MyForm form;
    Application::Run(% form);
}
