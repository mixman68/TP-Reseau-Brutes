#include "StdAfx.h"
#include "CoreSQL.h"

mysqlpp::Connection CoreSQL::conn(false);

CoreSQL::CoreSQL(void)
{
	    // Get database access parameters from command line
    const char* db = "tp_brutes", *server = "srv2.xpenradio.com", *user = "tp_brutes", *pass = "frugabraukhou";

    // Connect to the sample database.
    if (conn.connect(db, server, user, pass)) {
        // Retrieve the sample stock table set up by resetdb
        mysqlpp::Query query = conn.query("select * from brutes");
        mysqlpp::StoreQueryResult res = query.store();

        // Display results
        if (res) {
            // Display header
            cout.setf(ios::left);
            cout << setw(31) << "Item" <<
                    setw(10) << "Num" <<
                    setw(10) << "Weight" <<
                    setw(10) << "Price" <<
                    "Date" << endl << endl;

            // Get each row in result set, and print its contents
            /*for (size_t i = 0; i < res.num_rows(); ++i) {
                cout << setw(30) << res[i]["item"] << ' ' <<
                        setw(9) << res[i]["num"] << ' ' <<
                        setw(9) << res[i]["weight"] << ' ' <<
                        setw(9) << res[i]["price"] << ' ' <<
                        setw(9) << res[i]["sdate"] <<
                        endl;
            }*/
        }
        else {
            cerr << "Failed to get stock table: " << query.error() << endl;
        }

    }
    else {
        cerr << "DB connection failed: " << conn.error() << endl;
    }
}

bool CoreSQL::connect()
{
	const char* db = "tp_brutes", *server = "srv2.xpenradio.com", *user = "tp_brutes", *pass = "frugabraukhou";

    // Connect to the sample database.
    if (conn.connect(db, server, user, pass)) 
		return true;
	return false;
}

bool CoreSQL::disconnect()
{
	conn.disconnect();
		return true;
}
	
CoreSQL::~CoreSQL(void)
{
}
