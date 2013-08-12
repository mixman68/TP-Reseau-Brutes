#ifndef SERVEUR_H
#define SERVEUR_H

#include "Reader.h"
#include "Writer.h"
#include "Brute.h"
#include "Bonuses.h"
#include "CoreSQL.h"
#include <errno.h>
#include <mysql++.h>

class Serveur
{
public:
	Serveur(void);

	static SOCKET Create_Socket_Server_TCP(short);

	static void Reader_TCP (SOCKET s, string & Input);
	static void Writer_TCP (SOCKET s, const string &);

	static bool getBrute(Brute &,int &,int &,bool &);
	static bool getBonuses(Bonuses &, Bonuses &, Bonuses &,int &);
	static bool getBruteOther(Brute &,int &,int &);
	static bool getImage(const int &, string &);
	static bool getImageB(const int &, string &, string &, string &);
	static bool checkLogin(string&,string&,int &);

	static void Serveur::Service(SOCKET);

	virtual ~Serveur(void);
private:
	static int iduser, idbruteme,idbruteother;
};
#endif

