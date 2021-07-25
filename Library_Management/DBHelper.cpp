#include "DBHelper.h"
#include <iostream>

using namespace std;
void DBHelper::init()
{
	//initializations
	sqlConnHandle = NULL;
	sqlStmtHandle = NULL;
	//allocations
	if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &sqlEnvHandle))
		close();

	if (SQL_SUCCESS != SQLSetEnvAttr(sqlEnvHandle, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0))
		close();

	if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_DBC, sqlEnvHandle, &sqlConnHandle))
		close();

	//output
	cout << "Attempting connection to SQL Server...";
	cout << "\n";

	//connect to SQL Server	
	//I am using a trusted connection and port 14808
	//it does not matter if you are using default or named instance
	//just make sure you define the server name and the port
	//You have the option to use a username/password instead of a trusted connection
	//but is more secure to use a trusted connection
	switch (SQLDriverConnect(sqlConnHandle,
		NULL,
		//(SQLWCHAR*)L"DRIVER={SQL Server};SERVER=localhost, 1433;DATABASE=master;UID=username;PWD=password;",
		(SQLCHAR*)"DRIVER={SQL Server};SERVER=DESKTOP-QJEGC2H;DATABASE=DALL;Trusted=true;UID=sa;PWD=sa",
		SQL_NTS,
		retconstring,
		1024,
		NULL,
		SQL_DRIVER_NOPROMPT)) {

	case SQL_SUCCESS:
		cout << "Successfully connected to SQL Server";
		cout << "\n";
		break;

	case SQL_SUCCESS_WITH_INFO:
		cout << "Successfully connected to SQL Server";
		cout << "\n";
		break;

	case SQL_INVALID_HANDLE:
		cout << "Could not connect to SQL Server";
		cout << "\n";
		close();
		break;

	case SQL_ERROR:
		cout << "Could not connect to SQL Server";
		cout << "\n";
		close();
		break;

	default:
		break;
	}

	//if there is a problem connecting then exit application
	if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle))
		close();

}

void DBHelper::execute()
{
	//output
	cout << "\n";
	cout << "Executing T-SQL query...";
	cout << "\n";
	List<Sach> L;
	NodeData<Sach>* temp = L.head();
	//if there is a problem executing the query then exit application
	//else display query result
	char a[20];
	if (SQL_SUCCESS == SQLExecDirect(sqlStmtHandle, (SQLCHAR*)"INSERT INTO Sach VALUES ('nnn','mmm','xxx',1,1,1,1)", SQL_NTS)) {

		cout << "thanh cong";
		cout << "\n";
		close();
	}
	else {
		cout << "that bai";
	}
}

bool DBHelper::checkSQL(char*a)
{
	return  (SQL_SUCCESS == SQLExecDirect(sqlStmtHandle, (SQLCHAR*)a, SQL_NTS));
}

bool DBHelper::checkSQLFetch()
{
	return (SQLFetch(sqlStmtHandle) == SQL_SUCCESS);
}

void DBHelper::getChar(int num, char* data)
{
	SQLGetData(sqlStmtHandle, num, SQL_CHAR, data, SQL_RESULT_LEN, NULL);
}

void DBHelper::getfloat(int num, int& data)
{
	SQLGetData(sqlStmtHandle, num, SQL_C_LONG, &data, 0, NULL);
}

char* DBHelper::convert(string s)
{
	char* temp = new char[s.length() + 1];
	strcpy_s(temp, s.length() + 1, s.c_str());
	return temp;
}

void DBHelper::close()
{
	SQLFreeHandle(SQL_HANDLE_STMT, sqlStmtHandle);
	SQLDisconnect(sqlConnHandle);
	SQLFreeHandle(SQL_HANDLE_DBC, sqlConnHandle);
	SQLFreeHandle(SQL_HANDLE_ENV, sqlEnvHandle);
	getchar();
	
}

