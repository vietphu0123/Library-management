#include "SinhVien.h"

SinhVien::SinhVien()
{
	sMSV = 0;
}

void SinhVien::xuat()
{
	cout << "\t\t************************************\n";
	cout << "\t\tMa doc gia: " << this->sMSV << endl;
	cout << "\t\tNgay dang ky the: " << endl;
	cout << "\t\tHo va Ten: " << this->sHoTen << endl;
	cout << "\t\tKhoa: " << this->sKhoa << endl;
	cout << "\t\tlop: " << this->sLop << endl;
	if (sGioiTinh == 0)
	{
		cout << "\t\tgioi tinh" << "nu" << endl;
	}
	else
	{
		cout << "\t\tgioi tinh" << "nam" << endl;
	}
	cout << "\t\tngay sinh :";
	xNgaySinh.xuat(); cout << endl;

}
int SinhVien::getMSV()
{
	return this->sMSV;
}
char* SinhVien::getHoTen()
{
	return this->sHoTen;

}
char* SinhVien::getKhoa()
{
	return this->sKhoa;
}
char* SinhVien::getLop()
{
	return this->sLop;
}

int SinhVien::getgioitinh()
{
	return this->sGioiTinh;
}

void SinhVien::setMSV(float maso)
{
	this->sMSV = maso;
}

void SinhVien::setHoTen(char *sHoTen)
{
	strcpy_s(sHoTen,30, sHoTen);
}

void SinhVien::setLop(char *sLop)
{
	strcpy_s(sLop, 30, sLop);
}

SinhVien::SinhVien(float sMSV, char* sHo, char* sK, char* sL, int ngioi, int nNgay, int nThang, int nNam) :xNgaySinh(nNgay, nThang, nNam)
{
	this->sMSV = sMSV;
	strcpy_s(sHoTen, 30, sHo);
	strcpy_s(sKhoa, 30, sK);
	strcpy_s(sLop, 30, sL);
	this->sGioiTinh = ngioi;
}

