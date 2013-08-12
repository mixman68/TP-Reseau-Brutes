#ifndef READER_H
#define READER_H

#include "StdAfx.h"

#include "Writer.h"

class Reader
{
public:
	Reader(void);
	~Reader(void);
	static void Reader_TCP (SOCKET, string &);
	static void Reader_TCP (SOCKET, string &, const int);
	static boolean Read(SOCKET, PMessage &);
	static boolean Read_SrvRep(SOCKET); // pour le client recoive ok ou ko
};

#endif

