#pragma once

#include "winsock.h"
#include "Hm_Character.h"

class Hm_MessageWriter
{
private:
	SOCKET s;
	string output;

public:
	Hm_MessageWriter (SOCKET _s);
	~Hm_MessageWriter (void);

public:
	void writeCharacter (const Hm_Character & character);
	void ok ();
	void ko ();

	void sendMessage ();

private:
	void writeInt (int v);
	void writeShort (short v);
	void writeString (const string & v);
};
