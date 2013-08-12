#pragma once

#include "winsock.h"
#include "Hm_Character.h"

class Hm_MessageReader
{
private:
	SOCKET s;
	int type;
	string name;
	Hm_Character * character;

public:
	Hm_MessageReader (SOCKET _s);
	~Hm_MessageReader (void);
	int getType () const;
	const string & getName () const;
	Hm_Character * getCharacter ();

	void receiveMessage ();

private:
	char * read (int );
	int readInt ();
	short readShort ();
	string readString ();

private:
	void readCharacter ();
	void ok ();
	void ko ();
};
