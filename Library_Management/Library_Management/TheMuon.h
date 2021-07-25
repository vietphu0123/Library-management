#pragma once
#include<iostream>
#include"Sach.h"
#include"SinhVien.h"
using namespace std;
class Date;
class TheMuon
{
private:
	int tMaPM;
	int nMaSV;
	int nMaSach;
	Date tNgayMuon, tNgayTra;
	int nTrangThai;
public:
	int getTM();
	int getMaSV();
	int getMaSach();
	int getTT();
	TheMuon(void);
	TheMuon(int nMaPM ,int nMaSV , int nMaSach , int nTrangThai ,int  a , int  b , int  c , int  d , int  e ,int f  ): tNgayMuon(a, b, c), tNgayTra(d, e, f)
	{
		this->tMaPM = nMaPM;
		this->nMaSV = nMaSV;
		this->nMaSach = nMaSach;
		this->nTrangThai = nTrangThai;
	}
	void xuat();
};

