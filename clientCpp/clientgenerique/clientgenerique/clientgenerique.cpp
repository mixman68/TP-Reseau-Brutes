// clientgenerique.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "Client.h"


/*SOCKET Create_Socket_Client_TCP (const char * servername, const char * service) {
	struct protoent *ppe = getprotobyname("tcp");
	if (ppe == NULL) throw exception ("Illegal Protocol");
	SOCKET s = socket (AF_INET, SOCK_STREAM, ppe->p_proto);
	if (s == INVALID_SOCKET) throw exception ("Invalid Socket");
	struct sockaddr_in sin;
	memset (&sin, 0, sizeof(sin));
	sin.sin_family = AF_INET;
	struct hostent *phe = gethostbyname (servername);
	if (phe == NULL) throw exception ("Invalid host name");
	memcpy (&sin.sin_addr, phe->h_addr, phe->h_length);
	struct servent *pse = getservbyname (service, "tcp");
	if (pse == NULL) throw exception ("Invalid Service");
	sin.sin_port = pse->s_port;
	if (connect (s, (struct sockaddr *) &sin, sizeof(sin)) == SOCKET_ERROR)
		throw exception ("Connect Error");
	return s;
}*/

/*SOCKET Create_Socket_Client_TCP (const char * servername, const char * service) {
	struct protoent *ppe = getprotobyname("tcp");
	if (ppe == NULL) throw exception ("Illegal Protocol");
	SOCKET s = socket (AF_INET, SOCK_STREAM, ppe->p_proto);
	if (s == INVALID_SOCKET) throw exception ("Invalid Socket");
	struct sockaddr_in sin;
	memset (&sin, 0, sizeof(sin));
	sin.sin_family = AF_INET;
	struct hostent *phe = gethostbyname (servername);
	if (phe == NULL) throw exception ("Invalid host name");
	memcpy (&sin.sin_addr, phe->h_addr, phe->h_length);
	struct servent *pse = getservbyname (service, "tcp");
	if (pse == NULL) throw exception ("Invalid Service");
	sin.sin_port = pse->s_port;
	if (connect (s, (struct sockaddr *) &sin, sizeof(sin)) == SOCKET_ERROR)
		throw exception ("Connect Error");
	return s;
}

void Reader_TCP (SOCKET s, string & Input) {
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
void Writer_TCP (SOCKET s, const string & text) {
	int len = send (s, text.data(), text.size(), 0);
	if (len == SOCKET_ERROR)
		throw exception ("Writer Error");
}*/



int _tmain(int argc, _TCHAR* argv[])
{
	Client c;
	return 0;
}

