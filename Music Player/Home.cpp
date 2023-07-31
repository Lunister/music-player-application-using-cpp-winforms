#include "Home.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MusicPlayer::Home form;
	Application::Run(% form);
}