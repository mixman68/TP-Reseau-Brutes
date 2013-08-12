#ifndef CORESQL_H
#define CORESQL_H

#include <mysql++.h>
using namespace mysqlpp;

class CoreSQL
{
public:
	CoreSQL(void);
	~CoreSQL(void);
	static bool connect();
	static bool disconnect();
	static Connection conn;
};
#endif

