#include "StdAfx.h"
#include "CoreSQL.h"

/*extern "C"
{
	MYSQL mysql;
}

extern "C" bool connectSQL()
{
	mysql_init(&mysql);

	if (!mysql_real_connect(&mysql,"srv2.xpenradio.com","tp_brutes","frugabraukhou","tp_brutes",0,NULL,0))
	{
		fprintf(stderr, "Failed to connect to database: Error: %s\n",
			mysql_error(&mysql));
		return false;
	}
	return true;
}

extern "C" void test()
{
		  //MYSQL mysql;
   MYSQL_ROW row;
   MYSQL_RES *result;
   
   unsigned int num_fields;
   unsigned int i;

   mysql_init(&mysql);

   if (connectSQL())
   {
      if(mysql_query(&mysql, "SELECT * FROM brutes")){
         //here goes the error message :o)
		  fprintf(stderr, "Error : %s\n", mysql_error(&mysql));
	  }
      else {
         result = mysql_store_result(&mysql);
         num_fields = mysql_num_fields(result);
         while ((row = mysql_fetch_row(result)))
         {
               unsigned long *lengths;
               lengths = mysql_fetch_lengths(result);
               for(i = 0; i < num_fields; i++)
               {
                       printf("[%.*s] \t", (int) lengths[i], row[i] ? row[i] : "NULL");
               }   
               printf("\n");
         }
      }
   } 
}*/

CoreSQL::CoreSQL(void)
{
}