#include"TheMuon.h"

int TheMuon::getTM()
{
	return this->tMaPM;
}

int TheMuon::getMaSV()
{
	return this->nMaSV;
}

int TheMuon::getMaSach()
{
	return this->nMaSach;
}

int TheMuon::getTT()	
{
	return this->nTrangThai;
}

TheMuon::TheMuon(void)
{
	void;
}

void TheMuon::xuat()
{
	cout << "\t\t*************************";
	cout << endl;
	cout << "\t\tMa The Muon : " << this->tMaPM << endl;
	cout << "\t\tMa Sinh Vien :  " << this->nMaSV << endl;
	cout << "\t\tMa Sach :  " << this->nMaSach << endl;
	cout << "\t\tTinh Trang  : ";
	if (nTrangThai == 0)
	{
		cout << "\t\thet han" << endl;
	}
	if (nTrangThai != 0)
	{
		cout << "\t\tdang muon" << endl;
	}
	cout << "\t\ttime muon ";  this->tNgayMuon.xuat();
	cout << endl;
	cout << "\t\ttime tra  ";  this->tNgayTra.xuat();
	cout << endl << endl;
}
