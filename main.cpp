#include "Menu.h"
#include "pch.h"

[STAThreadAttribute]

void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    logicielDeGestion::Menu form;
    Application::Run(% form);
}