#include "StdAfx.h"
#include <sstream>
#include "Hm_MessageReader.h"
#include "../Hm_Protocol.h"

Hm_MessageReader::Hm_MessageReader(SOCKET _s)
	:	s(_s)
{
}

Hm_MessageReader::~Hm_MessageReader(void)
{
}

int Hm_MessageReader::getType () const 
{
	return type;
}

const string & Hm_MessageReader::getName () const 
{
	return name;
}

Hm_Character * Hm_MessageReader::getCharacter () 
{
	return character;
}

int Hm_MessageReader::readInt ()
{
	// to fill
	return 0;
}

short Hm_MessageReader::readShort ()
{
	// to fill
	return 0;
}

string Hm_MessageReader::readString ()
{
	short size = readShort();
	char * buffer = read (size);
	string reply (buffer, size);
	free (buffer);
	return reply;
}

void Hm_MessageReader::readCharacter ()
{
	character = new Hm_Character ();
	character->setName (readString ());
	character->setLevel (readInt ());
	// to fill...
}

void Hm_MessageReader::ok ()
{
}

void Hm_MessageReader::ko ()
{
}

void Hm_MessageReader::receiveMessage ()
{
	type = readInt();
	switch (type) {
	case REPLY_PERSO				: readCharacter (); break;
	case REPLY_OK					: ok (); break;
	case REPLY_KO					: ko (); break;
	default :
		throw exception ("Illegal message type");
		break;
	}
}
