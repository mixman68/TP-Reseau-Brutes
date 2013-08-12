#include "StdAfx.h"
#include "Writer.h"


Writer::Writer(void)
{
}


Writer::~Writer(void)
{
}

void Writer::Writer_TCP (SOCKET s, const string & text) {
	int len = send (s, text.data(), text.size(), 0);
	if (len == SOCKET_ERROR)
		throw exception ("Writer Error");
}

//Une méthode de classe par type primitif

void Writer::Write(SOCKET s, const string & msg)
{
	int lenght = msg.size();
    stringstream buf;//create a stringstream
    buf << lenght;//add number to the stream

	const string discriminant = "t";

	Writer::Writer_TCP(s,discriminant);

	int32_t ent = htonl(lenght);

	int len = send (s, (char const*)&ent, sizeof(ent), 0);
	if (len == SOCKET_ERROR)
		throw exception ("Writer Error");

	Writer::Writer_TCP(s,msg);
}

void Writer::Write(SOCKET s, const int32_t & entier)
{
	const string discriminant = "i";
	Writer::Writer_TCP(s,discriminant);
	int32_t ent = htonl(entier);
	int len = send (s, (char const*)&ent, sizeof(ent), 0);
	if (len == SOCKET_ERROR)
		throw exception ("Writer Error");
}

void Writer::Write(SOCKET s, const int64_t & entier)
{
	const string discriminant = "i";
	Writer::Writer_TCP(s,discriminant);
	int64_t ent = htonl(entier);
	int len = send (s, (char const*)&ent, sizeof(ent), 0);
	if (len == SOCKET_ERROR)
		throw exception ("Writer Error");
}

void Writer::Write(SOCKET s, const char & caract)
{
	const string discriminant = "c";
	Writer::Writer_TCP(s,discriminant+caract);
}

void Writer::Write(SOCKET s, const bool & booleen)
{
	const string discriminant = "b";
	Writer::Writer_TCP(s,discriminant);
	int32_t entier;
	if(booleen)
		entier = 1;
	else
		entier = 0;

	int32_t ent = htonl(entier);
	int len = send (s, (char const*)&ent, sizeof(ent), 0);
	if (len == SOCKET_ERROR)
		throw exception ("Writer Error");
}

void Writer::Write(SOCKET s, const string & user, const string & passwd)
{
	const string discriminant = "C";
	Writer::Writer_TCP(s,discriminant);
	Writer::Write(s,user);
	Writer::Write(s,passwd);
}