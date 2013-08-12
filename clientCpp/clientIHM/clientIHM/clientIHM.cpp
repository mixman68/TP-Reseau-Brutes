// clientIHM.cpp : fichier projet principal.

#include "stdafx.h"
#include "CliBru.h"

using namespace clientIHM;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Activation des effets visuels de Windows XP avant la création de tout contrôle
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Créer la fenêtre principale et l'exécuter
	Application::Run(gcnew CliBru());
	return 0;
}
