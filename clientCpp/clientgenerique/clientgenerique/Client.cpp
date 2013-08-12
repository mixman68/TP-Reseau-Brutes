#include "StdAfx.h"
#include "Client.h"
#include "Writer.h"
#include "Reader.h"


Client::Client(void)
{
	WSADATA data;
	WSAStartup (0x202, &data);
	//SOCKET s = Create_Socket_Client_TCP ("10.75.0.128","hmne");
	SOCKET s = Create_Socket_Client_TCP ("127.0.0.1","hmne");
	if (s == INVALID_SOCKET) throw exception ("Invalid Socket");
	string TextInput;

	try {
		PMessage message;
			system("pause");
			string test;
			cout << "Ecrire le message string" <<endl;
			cin >> test;
			//Writer::Write(s,test);
			Writer::Writer_TCP(s,"j");
			if(test.compare("q") != 0){
				if(Reader::Read_SrvRep(s))
				{
					//Reader::Read(s,message);
					cout << "connected";
					Writer::Writer_TCP(s,"d");
					Reader::Read_SrvRep(s);
					Reader::Read(s,message);
					system("pause");
					cout << message.msg;
				}
				cout << "Le serveur a envoyé un discriminant de type" << message.discriminant << " et le message suivant : " << message.msg << endl;
			} else 
			{
				exit(EXIT_SUCCESS);
			}

	}
	catch (exception e) {
		cerr << "SOCKET ERROR : " << e.what() << " # " << WSAGetLastError () << endl;
	}

	cout << "Receive Text " << TextInput << endl;
	closesocket (s);
	system("pause");
	WSACleanup ();
}


Client::~Client(void)
{
}

SOCKET Client::Create_Socket_Client_TCP(const char * servername, const char * service)
{
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

void Client::Reader_TCP (SOCKET s, string & Input) {
	char buffer[8];
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

void Client::Writer_TCP (SOCKET s, const string & text) {
	int len = send (s, text.data(), text.size(), 0);
	if (len == SOCKET_ERROR)
		throw exception ("Writer Error");
}
