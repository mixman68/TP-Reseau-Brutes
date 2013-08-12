#ifndef WRITER_H
#define WRITER_H


class Writer
{
public:
	Writer(void);
	~Writer(void);
	static void Writer_TCP(SOCKET, const string &);
	//Type primitifs
	static void Write(SOCKET, const string &);
	static void Write(SOCKET, const int32_t &);
	static void Write(SOCKET, const int64_t &);
	static void Write(SOCKET, const char &);
	static void Write(SOCKET, const bool &);
//en théorie on n'en a pas besoin d'autres de primitif.

	//login
	static void Write(SOCKET, const string &, const string &);

	//Envoi de brute
//	static void Write(SOCKET, const Brute &);
};
#endif
