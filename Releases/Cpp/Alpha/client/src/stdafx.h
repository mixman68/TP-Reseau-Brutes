// stdafx.h : fichier Include pour les fichiers Include système standard,
// ou les fichiers Include spécifiques aux projets qui sont utilisés fréquemment,
// et sont rarement modifiés
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


// TODO: faites référence ici aux en-têtes supplémentaires nécessaires au programme

struct PMessage
{
	string discriminant;
	string msg;
}typedef PMessage;

const boolean IMGACT = true;