#pragma once
#include <iostream>
#include <string>
using namespace std;

class Date
{
	int nNgay;
	int nThang;
	int nNam;
public:
	Date(void);
	
	Date(int, int, int);
	void setNgay(int d);
	void setThang(int m);
	void setNam(int y);
	int getNgay();
	int getThang();
	int getNam();
	void xuat();
	friend ostream& operator<<(ostream&, Date&);
	~Date(void) {};
};