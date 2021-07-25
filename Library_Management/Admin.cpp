#include "Admin.h"
Admin::Admin(void)
{
	cout << id << endl;
	cout << password << endl;
}
void Admin::out()
{
	cout << id << endl;
	cout << password << endl;
}
char* Admin::getUser()
{
	return id;
}
char* Admin::getPass()
{
	return password;
}
void Admin::setUser(char* id)
{
	strcpy_s(id, 20, id);
}
void Admin::setPass(char*password)
{
	strcpy_s(password, 20, password);
}