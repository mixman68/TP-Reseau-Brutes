#ifndef CLIENT_H
#define CLIENT_H

#include "stdafx.h"

class Client
{
public:
	Client(void);
	virtual ~Client(void);

	static SOCKET Create_Socket_Client_TCP(const char *, const char *);

	static void Reader_TCP (SOCKET s, string & Input);
	static void Writer_TCP (SOCKET s, const string &);
};

#endif