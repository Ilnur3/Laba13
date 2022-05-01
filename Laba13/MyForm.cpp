#include "MyForm.h"
#include <Windows.h>
#include <cmath>

using namespace Laba13;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, INT) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
};


