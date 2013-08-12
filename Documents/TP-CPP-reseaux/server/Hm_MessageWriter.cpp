#include "StdAfx.h"
#include <fstream>
#include "Hm_MessageWriter.h"
#include "../Hm_Protocol.h"

Hm_MessageWriter::Hm_MessageWriter(SOCKET _s)
	:	s(_s), output()
{
}

Hm_MessageWriter::~Hm_MessageWriter(void)
{
}

void Hm_MessageWriter::writeInt (int v)
{
	// output to fill with the value of v 
}

void Hm_MessageWriter::writeShort (short v)
{
	// output to fill with the value of v 
}

void Hm_MessageWriter::writeString (const string & v)
{
	// output to fill with the value of v 
}

void Hm_MessageWriter::writeCharacter (const Hm_Character & character)
{
	writeInt (REPLY_PERSO);
	writeString (character.getName());
	writeInt (character.getLevel());
	// to fill according to the protocol ...
}

void Hm_MessageWriter::ok ()
{
	writeInt (REPLY_OK);
}

void Hm_MessageWriter::ko ()
{
	writeInt (REPLY_KO);
}

void Hm_MessageWriter::sendMessage ()
{
	int len = send (s, output.data(), (int) output.size(), 0);
	if (len == SOCKET_ERROR)
		throw exception ("Writer Error");
}
