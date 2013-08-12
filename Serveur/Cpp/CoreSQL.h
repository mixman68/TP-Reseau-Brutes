#ifndef CORESQL_H
#define CORESQL_H

#include <sql.h>
#include <sqltypes.h>
#include <sqlext.h>
#include <errno.h>
#include <mysql++.h>

//#include "mysql.h"

/*extern "C" void test();
extern "C" bool connectSQL();*/
class CoreSQL
{
public:
	CoreSQL(void);
	virtual ~CoreSQL(void);
};

#endif

