#include "StdAfx.h"
#include "Reader.h"


Reader::Reader(void)
{
}


Reader::~Reader(void)
{
}

void Reader::Reader_TCP (SOCKET s, string & Input) {
	char buffer[256];
	char *tmp = buffer;
	int bufferlen = sizeof(buffer);
	int len;
	do {
		len = recv (s, tmp, bufferlen, 0);
		tmp += len;
		bufferlen -= len;
	} while (len != SOCKET_ERROR && len != 0 && bufferlen != 0);
	if (len == SOCKET_ERROR)
		throw exception ("Reader Error");
	Input.assign (buffer, tmp - buffer);
}

void Reader::Reader_TCP (SOCKET s, string & Input,const int i) {
	char *buffer = new char[i];
	char *tmp = buffer;
	int bufferlen = sizeof(char)*i;
	int len;
	do {
		len = recv (s, tmp, bufferlen, 0);
		tmp += len;
		bufferlen -= len;
	} while (len != SOCKET_ERROR && len != 0 && bufferlen != 0);
	if (len == SOCKET_ERROR)
		throw exception ("Reader Error");
	Input.assign (buffer, tmp - buffer);
}

boolean Reader::Read(SOCKET s, PMessage & Message)
{
	Reader::Reader_TCP(s,Message.discriminant,1);

	//Implémentation de tous les types primitifs
	
	//Type string
	if(Message.discriminant.compare("t") == 0 )
	{

		int32_t entier;
		int ret = recv(s, (char *)&entier, sizeof entier, 0);
		entier = ntohl(entier);
		Reader::Reader_TCP(s,Message.msg,entier);
		return true;
	}

	//Type entier 32bits
	if(Message.discriminant.compare("i") == 0 )
	{
		int32_t entier;
		int ret = recv(s, (char *)&entier, sizeof entier, 0);
		entier = ntohl(entier);
		stringstream buf;
		buf << entier;
		Message.msg = buf.str();
		return true;
	}

	//Type entier 64bits
	if(Message.discriminant.compare("l") == 0 )
	{
		int64_t entier;
		int ret = recv(s, (char *)&entier, sizeof entier, 0);
		entier = ntohl(entier);
		stringstream buf;
		buf << entier;
		Message.msg = buf.str();
		return true;
	}

	//Type char
	if(Message.discriminant.compare("c") == 0)
	{
		Reader::Reader_TCP(s,Message.msg,1);
		return true;
	}

	//Type boolean 32bits
	if(Message.discriminant.compare("i") == 0 )
	{
		int32_t entier;
		int ret = recv(s, (char *)&entier, sizeof entier, 0);
		entier = ntohl(entier);
		stringstream buf;
		buf << entier;
		Message.msg = buf.str();
		return true;
	}

	//déconnexion
	if(Message.discriminant.compare("q") == 0 )
	{
		cout << "fin du thread";
		_endthread();
		return true;
	}

	//brute
	if(Message.discriminant.compare("b") == 0 || Message.discriminant.compare("B") == 0)
	{
		return true;
		//La brute est traité dans le serveur.cpp
	}

	//connexion j
	if(Message.discriminant.compare("j") == 0 )
	{
		return true;
		cout << "connecté" << endl;
	}
	if(Message.discriminant.compare("C") == 0 )
	{
		return true;
	}
	if(Message.discriminant.compare("W") == 0 )
	{
		return true;
	}
	if(Message.discriminant.compare("L") == 0 )
	{
		return true;
	}
	if(Message.discriminant.compare("d") == 0 )
	{
		return true;
	}

	return false;
}

//Lecture de la réponse du Srerveur OK ou KO

boolean Reader::Read_SrvRep(SOCKET s)
{
	string status;
	Reader::Reader_TCP(s, status, 2);
	if(status.compare("KO")==0)
		return false;
	return true;
}