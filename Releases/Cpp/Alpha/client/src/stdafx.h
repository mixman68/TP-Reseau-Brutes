// stdafx.h�: fichier Include pour les fichiers Include syst�me standard,
// ou les fichiers Include sp�cifiques aux projets qui sont utilis�s fr�quemment,
// et sont rarement modifi�s
#pragma once

#include <stdio.h>
#include <tchar.h>

#include <WinSock2.h>
#include <iostream>
#include <process.h>
#include <time.h>
#include <string>
#include <sstream>
#include <stdint.h>

using namespace std;


// TODO: faites r�f�rence ici aux en-t�tes suppl�mentaires n�cessaires au programme

struct PMessage
{
	string discriminant;
	string msg;
}typedef PMessage;

const boolean IMGACT = true;