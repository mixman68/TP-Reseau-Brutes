// serveurgenerique.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "Serveur.h"

/*SOCKET Create_Socket_Server_TCP (short service) {
	struct protoent *ppe = getprotobyname("tcp");
	if (ppe == NULL) throw exception ("Illegal Protocol");
	SOCKET s = socket (AF_INET, SOCK_STREAM, ppe->p_proto);
	if (s == INVALID_SOCKET) throw exception ("Invalid Socket");
	struct sockaddr_in sin;
	memset (&sin, 0, sizeof(sin));
	sin.sin_family = AF_INET;
	sin.sin_addr.s_addr = INADDR_ANY;
	sin.sin_port = htons (service);
	if (bind (s, (struct sockaddr *) &sin, sizeof(sin)) == SOCKET_ERROR)
	throw exception ("Bind Error");
	if (listen (s, 5) == SOCKET_ERROR)
	throw exception ("Listen Error");
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
}

static void Service (SOCKET s) {
try {
static int thread_id = 1;
time_t clock_time;
time (&clock_time );
struct tm *current_time = localtime( &clock_time );
cout << "Thread Id " << thread_id++ << endl;
cout << clock_time << endl;
cout << asctime (current_time) << endl;
Writer_TCP (s, asctime (current_time));
}
catch (exception e) {
cerr << "SOCKET ERROR : " << e.what() << " # " << WSAGetLastError () << endl;
}
closesocket (s);
}
*/
int _tmain(int argc, _TCHAR* argv[])
{
Serveur s;
system("pause");
}

