#pragma once
#include<string>
#include "Date.h"
#include<iostream>
#include"List.h"
#include"string.h"
using namespace std;

class SinhVien :public Date
{
private:
	int sMSV;
	char sHoTen[30];
	char sKhoa[30];
	char sLop[30];
	int sGioiTinh;
	Date xNgaySinh;
public:
	SinhVien();
	void xuat();
	int getMSV();
	char* getHoTen();
	char* getKhoa();
	char* getLop();
	int getgioitinh();
	void setMSV(float);
	void setHoTen(char*);
	void setLop(char *);
	SinhVien(float, char*, char*, char*, int, int, int, int);
	~SinhVien(void) {};

};