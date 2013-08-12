#include "StdAfx.h"
#include "Client.h"
#include "Writer.h"
#include "Reader.h"


Client::Client(void)
{
	try {
		WSADATA data;
		WSAStartup (0x202, &data);
		s = Create_Socket_Client_TCP ("10.75.0.128","hmne");
		//s = Create_Socket_Client_TCP ("127.0.0.1","hmne");
		if (s == INVALID_SOCKET) throw exception ("Invalid Socket");
	}
	catch (exception e) {
		cerr << "SOCKET ERROR : " << e.what() << " # " << WSAGetLastError () << endl;
	}
}

Client::Client(const string host)
{
	try {
		WSADATA data;
		WSAStartup (0x202, &data);
		s = Create_Socket_Client_TCP (host.c_str(),"hmne");
		//s = Create_Socket_Client_TCP ("127.0.0.1","hmne");
		if (s == INVALID_SOCKET) throw exception ("Invalid Socket");
	}
	catch (exception e) {
		cerr << "SOCKET ERROR : " << e.what() << " # " << WSAGetLastError () << endl;
	}
}


Client::~Client(void)
{
}

void Client::close()
{
	try {
		Writer::Writer_TCP(s,"q");
		Reader::Read_SrvRep(s);
		closesocket (s);
		WSACleanup ();
	}
	catch (exception e) {
		cerr << "SOCKET ERROR : " << e.what() << " # " << WSAGetLastError () << endl;
	}
}

boolean Client::connectCli()
{
	try {
		Writer::Writer_TCP(s,"j");
		if(Reader::Read_SrvRep(s))
		{
			return true;
		}

	}
	catch (exception e) {
		cerr << "SOCKET ERROR : " << e.what() << " # " << WSAGetLastError () << endl;
	}
	return false;
}

boolean Client::Login(const string & user, const string & passwd)
{
	try {
		Writer::Write(s,user,passwd);
		if(Reader::Read_SrvRep(s))
			return true;
	}
	catch (exception e) {
		cerr << "SOCKET ERROR : " << e.what() << " # " << WSAGetLastError () << endl;
	}
	return false;
}

boolean Client::Get_BruteMe(Brute & b, Bonuses & b1 ,Bonuses & b2 ,Bonuses & b3)
{
	try {
		Writer::Writer_TCP(s,"b");
		if(Reader::Read_SrvRep(s))
		{
			PMessage name,level,life,strench,speed;
			Reader::Read(s,name);
			Reader::Read(s,level);
			Reader::Read(s,life);
			Reader::Read(s,strench);
			Reader::Read(s,speed);
			b.setName(name.msg);
			b.setLevel(atoi(level.msg.c_str()));
			b.setLife(atoi(life.msg.c_str()));
			b.setSpeed(atoi(speed.msg.c_str()));
			b.setStrenght(atoi(strench.msg.c_str()));

			Reader::Read(s,name);
			Reader::Read(s,level);
			Reader::Read(s,life);
			Reader::Read(s,strench);
			Reader::Read(s,speed);
			b1.setName(name.msg);
			b1.setLevel(atoi(level.msg.c_str()));
			b1.setLife(atoi(life.msg.c_str()));
			b1.setSpeed(atoi(speed.msg.c_str()));
			b1.setStrenght(atoi(strench.msg.c_str()));

			Reader::Read(s,name);
			Reader::Read(s,level);
			Reader::Read(s,life);
			Reader::Read(s,strench);
			Reader::Read(s,speed);
			b2.setName(name.msg);
			b2.setLevel(atoi(level.msg.c_str()));
			b2.setLife(atoi(life.msg.c_str()));
			b2.setSpeed(atoi(speed.msg.c_str()));
			b2.setStrenght(atoi(strench.msg.c_str()));

			Reader::Read(s,name);
			Reader::Read(s,level);
			Reader::Read(s,life);
			Reader::Read(s,strench);
			Reader::Read(s,speed);
			b3.setName(name.msg);
			b3.setLevel(atoi(level.msg.c_str()));
			b3.setLife(atoi(life.msg.c_str()));
			b3.setSpeed(atoi(speed.msg.c_str()));
			b3.setStrenght(atoi(strench.msg.c_str()));

			return true;
		}

	}
	catch (exception e) {
		cerr << "SOCKET ERROR : " << e.what() << " # " << WSAGetLastError () << endl;
	}
	return false;
}
boolean Client::Get_BruteOther(Brute & b, Bonuses & b1 ,Bonuses & b2 ,Bonuses & b3)
{
	try {
		Writer::Writer_TCP(s,"B");
		if(Reader::Read_SrvRep(s))
		{
			PMessage name,level,life,strench,speed;
			Reader::Read(s,name);
			Reader::Read(s,level);
			Reader::Read(s,life);
			Reader::Read(s,strench);
			Reader::Read(s,speed);
			b.setName(name.msg);
			b.setLevel(atoi(level.msg.c_str()));
			b.setLife(atoi(life.msg.c_str()));
			b.setSpeed(atoi(speed.msg.c_str()));
			b.setStrenght(atoi(strench.msg.c_str()));

			Reader::Read(s,name);
			Reader::Read(s,level);
			Reader::Read(s,life);
			Reader::Read(s,strench);
			Reader::Read(s,speed);
			b1.setName(name.msg);
			b1.setLevel(atoi(level.msg.c_str()));
			b1.setLife(atoi(life.msg.c_str()));
			b1.setSpeed(atoi(speed.msg.c_str()));
			b1.setStrenght(atoi(strench.msg.c_str()));

			Reader::Read(s,name);
			Reader::Read(s,level);
			Reader::Read(s,life);
			Reader::Read(s,strench);
			Reader::Read(s,speed);
			b2.setName(name.msg);
			b2.setLevel(atoi(level.msg.c_str()));
			b2.setLife(atoi(life.msg.c_str()));
			b2.setSpeed(atoi(speed.msg.c_str()));
			b2.setStrenght(atoi(strench.msg.c_str()));

			Reader::Read(s,name);
			Reader::Read(s,level);
			Reader::Read(s,life);
			Reader::Read(s,strench);
			Reader::Read(s,speed);
			b3.setName(name.msg);
			b3.setLevel(atoi(level.msg.c_str()));
			b3.setLife(atoi(life.msg.c_str()));
			b3.setSpeed(atoi(speed.msg.c_str()));
			b3.setStrenght(atoi(strench.msg.c_str()));
			return true;
		}

	}
	catch (exception e) {
		cerr << "SOCKET ERROR : " << e.what() << " # " << WSAGetLastError () << endl;
	}
	return false;
}
boolean Client::Win()
{
	try {
		Writer::Writer_TCP(s,"W");
		if(Reader::Read_SrvRep(s))
		{
			return true;
		}

	}
	catch (exception e) {
		cerr << "SOCKET ERROR : " << e.what() << " # " << WSAGetLastError () << endl;
	}
	return false;
}
boolean Client::Loose()
{
	try {
		Writer::Writer_TCP(s,"L");
		if(Reader::Read_SrvRep(s))
		{
			return true;
		}

	}
	catch (exception e) {
		cerr << "SOCKET ERROR : " << e.what() << " # " << WSAGetLastError () << endl;
	}
	return false;
}

boolean Client::ImageMe(string & image, string & imageb1, string & imageb2 , string & imageb3)
{
	try {
		Writer::Writer_TCP(s,"d");
		if(Reader::Read_SrvRep(s))
		{
			PMessage img;
			Reader::Read(s,img);
			image=img.msg;

			Reader::Read(s,img);
			imageb1=img.msg;
			Reader::Read(s,img);
			imageb2=img.msg;
			Reader::Read(s,img);
			imageb3=img.msg;
			return true;
		}

	}
	catch (exception e) {
		cerr << "SOCKET ERROR : " << e.what() << " # " << WSAGetLastError () << endl;
	}
	return false;
}

boolean Client::ImageOther(string & image, string & imageb1, string & imageb2 , string & imageb3)
{
	try {
		Writer::Writer_TCP(s,"D");
		if(Reader::Read_SrvRep(s))
		{
			PMessage img;
			Reader::Read(s,img);
			image=img.msg;

			Reader::Read(s,img);
			imageb1=img.msg;
			Reader::Read(s,img);
			imageb2=img.msg;
			Reader::Read(s,img);
			imageb3=img.msg;
			return true;
		}

	}
	catch (exception e) {
		cerr << "SOCKET ERROR : " << e.what() << " # " << WSAGetLastError () << endl;
	}
	return false;
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
