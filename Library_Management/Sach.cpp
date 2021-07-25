#include "Sach.h"
#include <string.h>
#include <iostream>
using namespace std;
int Sach::getMS()
{

	return this->sMaSach;
}

void Sach::setMS(float sMaSach)
{
	this->sMaSach = sMaSach;
}

void Sach::setTenSach(char* sTenSach)
{
	strcpy_s(sTenSach, 20, sTenSach);
}

void Sach::setNXB(char* sNXB)
{
	strcpy_s(sNXB, 20, sNXB);
}

char* Sach::getTenSach()
{
	return sTenSach;
}
char* Sach::getNXB()
{
	return sNXB;
}
int Sach::getTinhTrang()
{
	return this->sTinhTrang;
}
void Sach::setTT(float a)
{
	this->sTinhTrang = a;
}
Sach::Sach(float sMa, char* sTen, char* sN, int sTinh, int s, int n, int m) :sNgayNhapKho(s, n, m)
{

	sMaSach = sMa;
	strcpy_s(sTenSach, 20, sTen);
	strcpy_s(sNXB, 20, sN);
	sTinhTrang = sTinh;
}


Sach::Sach()
{
	this->sTinhTrang = 0;
}
Date Sach::getngaynhapkho()
{
	return this->sNgayNhapKho;
}
void Sach::outputSach()
{
	cout << "\t\t****************************\n";
	cout << "\t\tMa sach:       " << sMaSach << endl;
	cout << "\t\tTen sach :  " << sTenSach << endl;
	cout << "\t\tNXB:           " << sNXB << endl;
	cout << "\t\tTinh Trang : " << sTinhTrang << endl;
	cout << "\t\tngay nhap kho :";
	this->sNgayNhapKho.xuat();
	cout << endl;
}
istream& operator>>(istream& o, Sach& os)
{
	cin.ignore();
	cout << "ten sach ";
	o >> os.sMaSach;
	cout << "ten sach ";
	o.getline(os.sTenSach, 20);
	cout << "nxb";
	o.getline(os.sNXB, 20);
	cout << "tinh trang";
	o >> os.sTinhTrang;
	return o;
}
ostream& operator<<(ostream& os, Sach& o)
{
	os << "ma sach" << o.sMaSach << endl;
	os << "ten sach " << o.sTenSach << endl;
	os << "nxb" << o.sNXB << endl;
	os << o.sTinhTrang;
	return os;
}



