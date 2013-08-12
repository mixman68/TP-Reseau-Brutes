#ifndef CLIENT_H
#define CLIENT_H

#include "stdafx.h"
#include "Brute.h"

class Client
{
public:
	Client(void);
	Client(const string);
	virtual ~Client(void);


	void close();
	boolean connectCli();

	static SOCKET Create_Socket_Client_TCP(const char *, const char *);

	static void Reader_TCP (SOCKET s, string & Input);
	static void Writer_TCP (SOCKET s, const string &);
	
	boolean Login(const string &, const string &);
	boolean Get_BruteMe(Brute &, Bonuses &,Bonuses &,Bonuses &);
	boolean Get_BruteOther(Brute &, Bonuses &,Bonuses &,Bonuses &);
	boolean Win();
	boolean Loose();
	boolean ImageMe(string &, string &, string &, string &);
	boolean ImageOther(string &, string &, string &, string &);
	SOCKET s;
private:
};

#endif