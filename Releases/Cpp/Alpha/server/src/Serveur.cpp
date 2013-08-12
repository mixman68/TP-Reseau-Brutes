#include "StdAfx.h"
#include "Serveur.h"

int Serveur::iduser=0;
int Serveur::idbruteme=0;
int Serveur::idbruteother=0;

Serveur::Serveur(void)
{
	WSADATA data;
	WSAStartup (0x202, &data);
	try {
	SOCKET master = Serveur::Create_Socket_Server_TCP (5678);
	cout << "Serveur en écoute sur le port 5678" << endl;
	while (1) {
	SOCKET slave = accept (master, NULL, 0);
	if (slave == SOCKET_ERROR)
	throw exception ("accept failed");
	if (_beginthread ((void (*) (void *)) Service, 0, (void *) slave) < 0)
	throw exception ("Thread failed");
	}
	}
	catch (exception e)
	{
	cerr << "SOCKET ERROR : " << e.what() << " # " << WSAGetLastError () << endl;
	}
	WSACleanup ();
}

SOCKET Serveur::Create_Socket_Server_TCP(short service)
{
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

void Serveur::Reader_TCP (SOCKET s, string & Input) {
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

void Serveur::Writer_TCP (SOCKET s, const string & text) {
	int len = send (s, text.data(), text.size(), 0);
	if (len == SOCKET_ERROR)
		throw exception ("Writer Error");
}

void Serveur::Service (SOCKET s) {
try {
static int thread_id = 1;
time_t clock_time;
time (&clock_time );
struct tm *current_time =  localtime( &clock_time );
PMessage message,vide;
int iduser = 0;
int idbruteme =0,idbruteother = 0;
bool userHasMoreBrute = false;
cout << "Thread Id " << thread_id++ << endl;
cout << clock_time << endl;
cout << asctime (current_time) << endl;
while(1)
{
	//Si le discriminant reçu est valide, alors on traite le message
	//Pas valide, KO direct
	if(Reader::Read(s,message))
	{
		cout << "Message de l'user " << iduser << endl;
		//Traitement Get Brute Me
		if(message.discriminant.compare("b")==0)
		{
			Brute b;
			if(Serveur::getBrute(b,iduser,idbruteme,userHasMoreBrute))
			{
				Writer::Writer_TCP(s,"OK");
				Writer::Write(s,b.getName());
				Writer::Write(s,b.getLevel());
				Writer::Write(s,b.getLife());
				Writer::Write(s,b.getStrenght());
				Writer::Write(s,b.getSpeed());
				Bonuses b1,b2,b3;
				Serveur::getBonuses(b1,b2,b3,idbruteme);
				Writer::Write(s,b1.getName());
				Writer::Write(s,b1.getLevel());
				Writer::Write(s,b1.getLife());
				Writer::Write(s,b1.getStrenght());
				Writer::Write(s,b1.getSpeed());

				Writer::Write(s,b2.getName());
				Writer::Write(s,b2.getLevel());
				Writer::Write(s,b2.getLife());
				Writer::Write(s,b2.getStrenght());
				Writer::Write(s,b2.getSpeed());

				Writer::Write(s,b3.getName());
				Writer::Write(s,b3.getLevel());
				Writer::Write(s,b3.getLife());
				Writer::Write(s,b3.getStrenght());
				Writer::Write(s,b3.getSpeed());
			}
			else
				Writer::Writer_TCP(s,"KO");
		}
		else if(message.discriminant.compare("B")==0)
		{
			Brute b;
			if(Serveur::getBruteOther(b,iduser,idbruteother))
			{
				Writer::Writer_TCP(s,"OK");
				Writer::Write(s,b.getName());
				Writer::Write(s,b.getLevel());
				Writer::Write(s,b.getLife());
				Writer::Write(s,b.getStrenght());
				Writer::Write(s,b.getSpeed());
				Bonuses b1,b2,b3;
				Serveur::getBonuses(b1,b2,b3,idbruteother);
				Writer::Write(s,b1.getName());
				Writer::Write(s,b1.getLevel());
				Writer::Write(s,b1.getLife());
				Writer::Write(s,b1.getStrenght());
				Writer::Write(s,b1.getSpeed());

				Writer::Write(s,b2.getName());
				Writer::Write(s,b2.getLevel());
				Writer::Write(s,b2.getLife());
				Writer::Write(s,b2.getStrenght());
				Writer::Write(s,b2.getSpeed());

				Writer::Write(s,b3.getName());
				Writer::Write(s,b3.getLevel());
				Writer::Write(s,b3.getLife());
				Writer::Write(s,b3.getStrenght());
				Writer::Write(s,b3.getSpeed());
			}
			else
				Writer::Writer_TCP(s,"KO");
		}
		else if(message.discriminant.compare("C")==0)
		{
			PMessage user,password;
			Reader::Read(s,user);
			Reader::Read(s,password);
			if(Serveur::checkLogin(user.msg,password.msg,iduser))
				Writer::Writer_TCP(s,"OK");
			else
				Writer::Writer_TCP(s,"KO");
		}
		else if(message.discriminant.compare("W")==0 || message.discriminant.compare("L")==0)
		{
			if(idbruteme!=0 && idbruteother !=0 && idbruteme!=idbruteother)
				Writer::Writer_TCP(s,"OK");
			else
				Writer::Writer_TCP(s,"KO");
		}
		else if(message.discriminant.compare("d")==0)
		{
			string image,imageb1,imageb2,imageb3;
			Serveur::getImage(idbruteme,image);
			Serveur::getImageB(idbruteme,imageb1,imageb2,imageb3);
			//cout << image;
				Writer::Writer_TCP(s,"OK");
				Writer::Write(s,image);
				Writer::Write(s,imageb1);
				Writer::Write(s,imageb2);
				Writer::Write(s,imageb3);
				//string test = "test";
				//Writer::Write(s,test);
		}
		else if(message.discriminant.compare("D")==0)
		{
			string image,imageb1,imageb2,imageb3;
			Serveur::getImage(idbruteother,image);
			Serveur::getImageB(idbruteother,imageb1,imageb2,imageb3);
			//cout << image;
				Writer::Writer_TCP(s,"OK");
				Writer::Write(s,image);
				Writer::Write(s,imageb1);
				Writer::Write(s,imageb2);
				Writer::Write(s,imageb3);
				//string test = "test";
				//Writer::Write(s,test);
		}
		else
		{
			Writer::Writer_TCP(s,"OK");
		}
	} else 
	{
		Writer::Writer_TCP(s,"KO");
	}
	message = vide;
}
}
catch (exception e) {
cerr << "SOCKET ERROR : " << e.what() << " # " << WSAGetLastError () << endl;
}
closesocket (s);
}

bool Serveur::getBrute(Brute & b, int & id,int & idbrute, bool & userHasMoreBrute)
{
	    CoreSQL::connect();

		stringstream buf;
		buf << "SELECT * FROM brutes INNER JOIN users_brute ON brutes.`id brute` = users_brute.id_brute INNER JOIN users ON users_brute.id_user=users.id  WHERE id='";
		buf << id;
		if(userHasMoreBrute) {
		buf << "' AND brutes.`id brute`!='";
		buf << idbrute;
		}
		buf << "' ORDER BY RAND()";

        mysqlpp::Query query = CoreSQL::conn.query(buf.str());
        mysqlpp::StoreQueryResult res = query.store();

		//stocke dans la brute
        if (res && res.num_rows()) {
            // Get each row in result set, and print its contents
            //for (size_t i = 0; i < res.num_rows(); ++i) {
                /*cout << setw(30) << res[i]["item"] << ' ' <<
                        setw(9) << res[i]["num"] << ' ' <<
                        setw(9) << res[i]["weight"] << ' ' <<
                        setw(9) << res[i]["price"] << ' ' <<
                        setw(9) << res[i]["sdate"] <<
                        endl;*/
			int i = 0;
			if(res.num_rows()>1)
				userHasMoreBrute=true;

				stringstream nameB;
				nameB << res[i]["Nom"];
				b.setName(nameB.str());
				b.setLevel(res[i]["level"]);
				b.setLife(res[i]["life"]);
				b.setSpeed(res[i]["speed"]);
				b.setStrenght(res[i]["strench"]);
				idbrute=res[i]["id brute"];			
            //}
			CoreSQL::disconnect();
			return true;
        }
        else {
            cerr << "Failed to get brute table: " << query.error() << endl;
        }
		CoreSQL::disconnect();
	return false;
}

bool Serveur::getBonuses(Bonuses & b1, Bonuses & b2, Bonuses & b3, int & id)
{
	CoreSQL::connect();
	stringstream buf;
	buf << "SELECT *, bonuses.strench AS bstrench, bonuses.life AS blife, bonuses.speed As bspeed, bonuses.nom AS bname, bonuses.level AS blevel FROM bonuses INNER JOIN brute_bonus ON bonuses.id=brute_bonus.id_bonus INNER JOIN brutes ON brute_bonus.id_brute=brutes.`id brute` WHERE id_brute=";
	buf << id;
        mysqlpp::Query query = CoreSQL::conn.query(buf.str());
        mysqlpp::StoreQueryResult res = query.store();
        if (res) {
            // Get each row in result set, and print its contents
            //for (size_t i = 0; i < res.num_rows(); ++i) {
                /*cout << setw(30) << res[i]["item"] << ' ' <<
                        setw(9) << res[i]["num"] << ' ' <<
                        setw(9) << res[i]["weight"] << ' ' <<
                        setw(9) << res[i]["price"] << ' ' <<
                        setw(9) << res[i]["sdate"] <<
                        endl;*/
				int i;
				
				if(res.num_rows()>=1)
				{
				i= 0;
				stringstream nameB;
				nameB << res[i]["bname"];
				b1.setName(nameB.str());
				b1.setLevel(res[i]["blevel"]);
				b1.setLife(res[i]["blife"]);
				b1.setSpeed(res[i]["bspeed"]);
				b1.setStrenght(res[i]["bstrench"]);
				}

				if(res.num_rows()>=2)
				{
					i= 1;
					stringstream nameB2;
					nameB2 << res[i]["bname"];
					b2.setName(nameB2.str());
					b2.setLevel(res[i]["blevel"]);
					b2.setLife(res[i]["blife"]);
					b2.setSpeed(res[i]["bspeed"]);
					b2.setStrenght(res[i]["bstrench"]);
				}
				if(res.num_rows()>=3)
				{
					i= 2;
					stringstream nameB3;
					nameB3 << res[i]["bname"];
					b3.setName(nameB3.str());
					b3.setLevel(res[i]["blevel"]);
					b3.setLife(res[i]["blife"]);
					b3.setSpeed(res[i]["bspeed"]);
					b3.setStrenght(res[i]["bstrench"]);
				}
            //}
			CoreSQL::disconnect();
			return true;
        }
        else {
            cerr << "Failed to get brute table: " << query.error() << endl;
        }
		CoreSQL::disconnect();
	return false;
}

bool Serveur::getBruteOther(Brute & b, int & id,int & idbrute)
{
	    CoreSQL::connect();

		stringstream buf;
		buf << "SELECT * FROM brutes INNER JOIN users_brute ON brutes.`id brute` = users_brute.id_brute INNER JOIN users ON users_brute.id_user=users.id  WHERE id!='";
		buf << id;
		buf << "' AND brutes.`id brute`!='";
		buf << idbrute;
		buf << "' ORDER BY RAND() LIMIT 1";

        mysqlpp::Query query = CoreSQL::conn.query(buf.str());
        mysqlpp::StoreQueryResult res = query.store();

		//stocke dans la brute
        if (res && res.num_rows()) {
            // Get each row in result set, and print its contents
            //for (size_t i = 0; i < res.num_rows(); ++i) {
                /*cout << setw(30) << res[i]["item"] << ' ' <<
                        setw(9) << res[i]["num"] << ' ' <<
                        setw(9) << res[i]["weight"] << ' ' <<
                        setw(9) << res[i]["price"] << ' ' <<
                        setw(9) << res[i]["sdate"] <<
                        endl;*/
			int i = 0;

				stringstream nameB;
				nameB << res[i]["Nom"];
				b.setName(nameB.str());
				b.setLevel(res[i]["level"]);
				b.setLife(res[i]["life"]);
				b.setSpeed(res[i]["speed"]);
				b.setStrenght(res[i]["strench"]);
				idbrute=res[i]["id brute"];
            //}
			CoreSQL::disconnect();
			return true;
        }
        else {
            cerr << "Failed to get brute table: " << query.error() << endl;
        }
		CoreSQL::disconnect();
	return false;
}

bool Serveur::getImage(const int & id, string & image)
{
	CoreSQL::connect();

	stringstream buf;//create a stringstream
	buf << "SELECT * FROM brutes_img WHERE id_brute='";
	buf << id;
	buf << "'";

	mysqlpp::Query query = CoreSQL::conn.query(buf.str());
	mysqlpp::StoreQueryResult res = query.store();

	//stocke dans la brute
	if (res) {
		if(res.num_rows()!=0)
		{
			stringstream imgbuf;
			imgbuf << res[0]["image"];
			image=imgbuf.str();
			CoreSQL::disconnect();
			return true;
		}
	}
	CoreSQL::disconnect();
	return false;
}

bool Serveur::getImageB(const int & id, string & b1, string & b2, string & b3)
{
	CoreSQL::connect();
	stringstream buf;
	buf << "SELECT bonuses_img.bonus_img FROM bonuses_img INNER JOIN bonuses ON bonuses.id=bonuses_img.id_bonus INNER JOIN brute_bonus ON bonuses.id=brute_bonus.id_bonus INNER JOIN brutes ON brute_bonus.id_brute=brutes.`id brute` WHERE id_brute=";
	buf << id;
        mysqlpp::Query query = CoreSQL::conn.query(buf.str());
        mysqlpp::StoreQueryResult res = query.store();
        if (res) {
            // Get each row in result set, and print its contents
            //for (size_t i = 0; i < res.num_rows(); ++i) {
                /*cout << setw(30) << res[i]["item"] << ' ' <<
                        setw(9) << res[i]["num"] << ' ' <<
                        setw(9) << res[i]["weight"] << ' ' <<
                        setw(9) << res[i]["price"] << ' ' <<
                        setw(9) << res[i]["sdate"] <<
                        endl;*/
				int i;
				
				if(res.num_rows()>=1)
				{
				i= 0;
				stringstream imgb1;
				imgb1 << res[i]["bonus_img"];
				b1 = imgb1.str();
				}

				if(res.num_rows()>=2)
				{
					i= 1;
					stringstream imgb2;
					imgb2 << res[i]["bonus_img"];
					b2 = imgb2.str();
				}
				if(res.num_rows()>=3)
				{
					i= 2;
					stringstream imgb3;
					imgb3 << res[i]["bonus_img"];
					b3 = imgb3.str();
				}
            //}
			CoreSQL::disconnect();
			return true;
        }
        else {
            cerr << "Failed to get brute table: " << query.error() << endl;
        }
		CoreSQL::disconnect();
	return false;
}

bool Serveur::checkLogin(string & user, string & passwd, int & id)
{
	    CoreSQL::connect();

		    stringstream buf;//create a stringstream
			buf << "SELECT * FROM users WHERE user='";
			buf << user;
			buf << "' AND password='";
			buf << passwd;
			buf << "'";

        mysqlpp::Query query = CoreSQL::conn.query(buf.str());
        mysqlpp::StoreQueryResult res = query.store();

		//stocke dans la brute
        if (res) {
			if(res.num_rows()!=0)
			{
				id=res[0]["id"];
				CoreSQL::disconnect();
				return true;
			}
        }
		CoreSQL::disconnect();
	return false;
}

Serveur::~Serveur(void)
{
}
