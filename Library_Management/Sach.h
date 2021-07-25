#pragma once
#include<string>
#include<iostream>
#include<string>
#include"List.h"
#include"DBHelper.h"
#include<string.h>
#include<sstream>
#include"Date.h"
using namespace std;
class Sach :public Date
{
private:
	char sTenSach[20], sNXB[20];
	int sTinhTrang;
	Date sNgayNhapKho;
	int sMaSach;
public:
	Sach();
	Date getngaynhapkho();
	void outputSach();
	int getMS();
	void setMS(float);
	void setTenSach(char*);
	void setNXB(char*);
	char* getTenSach();
	char* getNXB();
	int getTinhTrang();
	void setTT(float a);
	Sach(float, char*, char*, int, int, int, int);
	//	friend Date;
	friend istream& operator>>(istream&, Sach&);
	friend ostream& operator<<(ostream&, Sach&);
	~Sach(void) {};
};



