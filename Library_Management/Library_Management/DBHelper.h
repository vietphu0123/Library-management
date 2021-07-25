#pragma once

#include <windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>
#include"Sach.h"
#include<string.h>
#include<string>
#include"List.h"
class DBHelper
{
#define SQL_RESULT_LEN 240
#define SQL_RETURN_CODE_LEN 1000
	//define handles and variables
	SQLHANDLE sqlConnHandle;
	SQLHANDLE sqlStmtHandle;
	SQLHANDLE sqlEnvHandle;
	SQLCHAR retconstring[SQL_RETURN_CODE_LEN];

	SQLINTEGER ptrSqlVersion;

public:
	void init();
	void execute();
	bool  checkSQL(char*);
	bool checkSQLFetch();
	void getChar(int num, char* data);
	void getfloat(int num, int& data);
	char* convert(string);
	void close();
};

