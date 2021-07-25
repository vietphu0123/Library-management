#pragma once
#include <iostream>
#include <string>
#include<string>
#include<string.h>
using namespace std;
class Admin
{
	char id[20];
	char password[20];
public:
	Admin();
	Admin(char* id , char* password )
	{
		strcpy_s(id, 20, id);
		strcpy_s(password, 20, password);
	}
	void out();
	char* getUser();
	char* getPass();
	void setUser(char* US);
	void setPass(char* PA);
	~Admin(void) {};
};
