#include <iostream>
#include <windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>
#include "DBHelper.h"
#include"Sach.h"
#include"List.h"
#include<string.h>;
#include<string>
#include"TheMuon.h"
//use the std namespace
#include"Sach.h"
#include"Admin.h"
///////// sach  
 char* convert(string);
 void inputsach(List<Sach> &L1);
 void themsach(List<Sach> &L1);
 void timkiemsach(List<Sach> L1);
 void sachdangmuon(List<Sach>L1);
 void sachchuamuon(List<Sach> L1);
 void xoasach(List<Sach> &L1);
 void outSach(List<Sach> L1);
 ////////// sinh vien
 void inputsv(List<SinhVien> &L2);
 void themsinhvien(List<SinhVien> &L2);
 void timkiemsinhvientheoten(List<SinhVien>L2);
 void timkiemsinhvientheomsv(List<SinhVien>L2);
 void soluongsinhvien(List<SinhVien>L2);
 void xoasinhvien(List<SinhVien> &L2);
 void outsinhvien(List<SinhVien> L2);
 void sinhviennam(List<SinhVien>L2);
 void sinhviennu(List<SinhVien>L2);
 /////////themuon
 void inputTM(List<TheMuon>&L3);
 void timkiemTM(List<TheMuon> L3);
 void themTM(List<TheMuon> &L3,List<SinhVien> &L2,List<Sach> &L1);
 void xoaTM(List < TheMuon> &L3,List<SinhVien>&L2,List<Sach>&L1);
 void outTM(List<TheMuon> L3);
 void TMquahan(List<TheMuon> L3);
 void inputaccout(List<Admin> &L4);
 void outaccout(List<Admin> L4);
using namespace std;
int main()
{
	List<Admin> L4;
	inputaccout(L4);
	outaccout(L4);
	List<Sach>L;
	List<SinhVien> L1;
	List<TheMuon>L2;
	inputsach(L);
	inputsv(L1);
	inputTM(L2);
	cout << "ket noi database thanh cong";
	int nChucNangMenu = 0;
	while (true)
	{
		system("cls");
		cout << "\t\t*******************************************\n";
		cout << "\t\t  1. Hien thi thong tin sach.              \n";
		cout << "\t\t  2. Hien thi thong tin ban doc.           \n";
		cout << "\t\t  3. Tim kiem thong tin                    \n";
		cout << "\t\t  4. Quan ly                               \n";
		cout << "\t\t  0. Thoat!                                \n";
		cout << "\t\t*******************************************\n";
		cout << "\t\t   Nhap Lua Chon: ";
		cin >> nChucNangMenu;
		if (nChucNangMenu != 1 && nChucNangMenu != 2 && nChucNangMenu != 3 && nChucNangMenu != 4 && nChucNangMenu != 0)
		{
			cout << "Nhap sai vui long lua chon lai.\n";
			system("pause");
		}
		else if (nChucNangMenu == 1)
		{
			cout << "\n\t\t*Thong tin sach*\n";
			outSach(L);
			system("pause");
		}
		else if (nChucNangMenu == 2)
		{
			cout << "\n\t\t*Thong tin ban doc*\n";
			outsinhvien(L1);
			system("pause");
		}
		else if (nChucNangMenu == 3)
		{
			while (true)
			{
				system("cls");
				cout << "\t\t*******************************************\n";
				cout << "\t\t  1. Tim sach theo ma sach.                \n";
				cout << "\t\t  2. Tim ban doc theo ma ban doc.          \n";
				cout << "\t\t  0. Thoat!                                \n";
				cout << "\t\t*******************************************\n";
				cout << "\t\t   Nhap Lua Chon: ";
				cin >> nChucNangMenu;
				if (nChucNangMenu != 1 && nChucNangMenu != 2 && nChucNangMenu != 0)
				{
					cout << "Nhap sai vui long lua chon lai.\n";
					system("pause");
				}
				else if (nChucNangMenu == 1)
				{
					cout << "\t\t*Tim sach theo ma sach*\n";
					timkiemsach(L);
					system("pause");
				}
				else if (nChucNangMenu == 2)
				{
					cout << "\t\t*Tim ban doc theo ma ban doc*\n";
					timkiemsinhvientheomsv(L1);
					system("pause");
				}
				else if (nChucNangMenu == 0)
				{
					break;
				}
			}
			system("pause");
		}
		else if (nChucNangMenu == 4)
		{
			while (true)
			{
				system("cls");
				cout << "\t\t*******************************************\n";
				cout << "\t\t  1. Quan ly phieu muon.                   \n";
				cout << "\t\t  2. Quan ly sach.                         \n";
				cout << "\t\t  3. Quan ly ban doc.                      \n";
				cout << "\t\t  4. Thong ke.                             \n";
				cout << "\t\t  0. Thoat!                                \n";
				cout << "\t\t*******************************************\n";
				cout << "\t\t   Nhap Lua Chon: ";
				cin >> nChucNangMenu;
				if (nChucNangMenu != 1 && nChucNangMenu != 2 && nChucNangMenu != 3 && nChucNangMenu != 4 && nChucNangMenu != 0)
				{
					cout << "Nhap sai vui long lua chon lai.\n";
					system("pause");
				}
				else if (nChucNangMenu == 1)
				{
					cout << "\t\t*Quan ly phieu muon*\n";
					while (true)
					{
						system("cls");
						cout << "\t\t******************************************\n";
						cout << "\t\t  1. Them Thieu muon.                     \n";
						cout << "\t\t  2. Tra Sach.                            \n";
						cout << "\t\t  3. Tim kiem the muon                    \n";
						cout << "\t\t  4. Xuat danh dach phieu muon            \n";
						cout << "\t\t  0. Thoat!                               \n";
						cout << "\t\t******************************************\n";
						cout << "\t\t   Nhap Lua Chon: ";
						cin >> nChucNangMenu;
						if (nChucNangMenu == 1)
						{
							themTM(L2,L1,L);
							system("pause");
						}
						else if (nChucNangMenu == 2)
						{
							xoaTM(L2,L1,L);
							system("pause");
						}
						else if (nChucNangMenu == 3)
						{
							timkiemTM(L2);
							system("pause");
						}
						else if (nChucNangMenu == 4)
						{
							outTM(L2);
							system("pause");
						}
						else if (nChucNangMenu == 0)
						{
							break;
						}
						else
						{
							cout << "\t\tNhap sai vui long lua chon lai.\n";
							system("pause");
						}
					}
				}
				else if (nChucNangMenu == 2)
				{
					cout << "2. Quan ly sach.\n";
					while (true)
					{
						system("cls");
						cout << "\t\t********Quan Ly Sach********\n";
						cout << "\t\t      1. Them sach moi.     \n";
						cout << "\t\t      2. Xoa Sach.          \n";
						cout << "\t\t      0. Thoat!             \n";
						cout << "\t\t****************************\n";
						cout << "\t\tNhap chuc nang can chon: ";
						cin >> nChucNangMenu;
						if (nChucNangMenu != 1 && nChucNangMenu != 2 && nChucNangMenu != 0)
						{
							cout << "\t\tNhap sai vui long lua chon lai.\n";
							system("pause");
						}
						else if (nChucNangMenu == 1)
						{
							themsach(L);
							system("pause");
						}
						else if (nChucNangMenu == 2)
						{
							xoasach(L);
							system("pause");
						}
						else if (nChucNangMenu == 0)
						{
							break;
						}
					}

					system("pause");
				}
				else if (nChucNangMenu == 3)
				{
					cout << "\t\t  *Quan ly ban doc*\n";
					while (true)
					{
						system("cls");
						cout << "\t\t\t*******************************\n";
						cout << "\t\t\t  1. Them ban doc              \n";
						cout << "\t\t\t  0. Thoat!                    \n";
						cout << "\t\t\t*******************************\n";
						cout << "\t\t\tNhap chuc nang can chon: ";
						cin >> nChucNangMenu;
						if (nChucNangMenu == 1)
						{
							themsinhvien(L1);
						}
						else if (nChucNangMenu == 0)
						{
							break;
						}
						else
						{
							
							cout << "\t\tNhap sai! Vui long nhap lai.\n";
							
							system("pause");
						}
					}
					system("pause");
				}
				else if (nChucNangMenu == 4)
				{
					while (true)
					{
						system("cls");
						cout << "\t\t*************************Thong ke*************************\n";
						cout << "\t\t  1. Tong so sach con lai trong thua vien chua duoc muon. \n";
						cout << "\t\t  2. Tong so sach da muon.                                \n";
						cout << "\t\t  3. Liet ke sach ma 1 ban doc dang muon bang ma ban doc. \n";
						cout << "\t\t  4. Tong so sinh vien la nam.                        \n";
						cout << "\t\t  5. Tong so sinh vien la nu.                        \n";
						cout << "\t\t  6. Liet ke cac phieu muon da qua han.                   \n";
						cout << "\t\t  0. Thoat!                                               \n";
						cout << "\t\t**********************************************************\n";
						cout << "\n\n\t\tNhap chuc nang: ";
						cin >> nChucNangMenu;
						if (nChucNangMenu != 1 && nChucNangMenu != 2 && nChucNangMenu != 3 && nChucNangMenu != 0 && nChucNangMenu != 4 && nChucNangMenu != 5 && nChucNangMenu != 6)
						{
							
							cout << "\t\tNhap sai! Vui long nhap lai.\n";
							
							system("pause");
						}
						else if (nChucNangMenu == 1)
						{
							
							sachchuamuon(L);
							
							system("pause");
						}
						else if (nChucNangMenu == 2)
						{
							timkiemTM(L2);
							system("pause");
						}
						else if (nChucNangMenu == 3)
						{
						  //	lietKeSach1BanDocDangMuon(L4, L3);
							system("pause");
						}
						else if (nChucNangMenu == 4)
						{
							 
							sinhviennam(L1);
							 
							system("pause");
						}
						else if (nChucNangMenu == 5)
						{
							 
							sinhviennu(L1);
							 
							system("pause");
						}
						else if (nChucNangMenu == 6)
						{
							TMquahan(L2);
							system("pause");
						}
						else if (nChucNangMenu == 0)
						{
							break;
						}
					}
				}
				else if (nChucNangMenu == 0)
				{
					break;
				}
			}
			system("pause");
		}
		else if (nChucNangMenu == 0)
		{
			break;
		}
	}
	system("pause");
	return 0;
}
char * convert(string s)
{
	char* temp = new char[s.length() + 1];
	strcpy_s(temp, s.length() + 1, s.c_str());
	return temp;
}
void inputsach(List<Sach>&L)
{
	DBHelper database;
	database.init();
	int smasach;
	char stensach[30];
	char snxb[30];
	int stinhtrang;
	int soluong;
	int ngay;
	int thang;
	int nam;
a:
	string s = "SELECT * FROM Sach";
	cout << database.convert(s);
	Sach *sach[20];
	if (database.checkSQL(database.convert(s)))
	{
		while (database.checkSQLFetch())
		{
			int i = 0;
			database.getfloat(1, smasach);
			database.getChar(2, stensach);
			database.getChar(3, snxb);
			database.getfloat(4, stinhtrang);
			database.getfloat(5, ngay);
			database.getfloat(6, thang);
			database.getfloat(7, nam);
			sach[i] = new Sach(smasach, stensach, snxb, stinhtrang, ngay, thang, nam);
			L.InsetFront(*sach[i]);
			i++;
		}	
	}
	else
	{
		cout << "that bai moi nhap lai:";
		goto a;
	}
}
void themsach(List<Sach>& L)
{
	int smasach;
	char tensach[30];
	char nxb[30];
	int tinhtrang;
	int soluong;
	int ngay = 0;
	int thang = 0;
	int nam = 0;

nn:	cout << "nhap ma sach can them";
	cout << endl;
	
	//cin.ignore();
	cin >> smasach;

	int z = 0;
	NodeData<Sach>* p = L.head();
	NodeData<Sach>* temp = p;
	if (p != NULL)
	{
		NodeData<Sach>* temp = p;
		while (temp != NULL)
		{
			if (smasach == temp->get_data().getMS())
			{
				z = 1;
			}
			temp = temp->get_next();
		}
	}
	if (z == 1)
	{
		cout << "sach da co moi nhap lai";
		goto nn;
	}
ts:
	cout << "nhap ma sach: ";
	cin >> smasach;
	if (smasach==0)
	{

		cout << "\t\t\tkhong duoc de trong !\n";

		goto ts;
	}
aa:
	cout << "nhap ten sach: ";
	cin.ignore();
	cin.getline(tensach, 30);
	if (strcmp(tensach, "") == 0)
	{

		cout << "\t\t\tkhong duoc de trong !\n";

		goto aa;
	}
bb:
	cout << "nhap nxb: ";
	fflush(stdin);
	cin.getline(nxb, 30);
	if (strcmp(nxb, "") == 0)
	{

		cout << "\t\t\tkhong duoc de trong !\n";

		goto bb;
	}
	cout << "nhap tinh trang: " << endl;
	cin >> tinhtrang;
	cout << "nhap ngay";
	cin >> ngay;
	cout << "nhap thang";
	cin >> thang;
	cout << "nhap nam";
	cin >> nam;
	Sach s(smasach, tensach, nxb, tinhtrang, ngay, thang, nam);
	L.InsetFront(s);
	cout << "da them sach !";
	DBHelper database1;
	ostringstream convert, convert1, convert2, convert3, convert4,convert5;
	convert4 << smasach;
	string o = "INSERT INTO Sach VALUES(";
	o = o + convert4.str() + "," + "'" + tensach + "'," + "'" + nxb;
	convert << tinhtrang;
	//convert5 << soluong;
	convert1 << ngay;
	convert2 << thang;
	convert3 << nam;
	o = o + "'," + convert.str() + "," + convert1.str() + "," + convert2.str() + "," + convert3.str() + ")";
	cout << o;
	database1.init();
	if (database1.checkSQL(database1.convert(o)))
	{
		cout << "thanh cong";
	}
	else
	{
		cout << "fail";
	}
	database1.close();
}
void timkiemsach(List<Sach> L)
{
nn:	cout << "nhap sach can tim";
	int a;
	cin >> a;
	int z = 0;
	NodeData<Sach>* p = L.head();
	NodeData<Sach>* temp = p;
	if (p != NULL)
	{
		NodeData<Sach>* temp = p;
		while (temp != NULL)
		{
			if (temp->get_data().getMS()==a)
			{
				cout << "thong tin sach :";
				temp->get_data().outputSach();
				z = 1;
			}
			temp = temp->get_next();
		}
	}
	if (z == 0)
	{
		cout << "khong co sach nhap lai";
		goto nn;
	}
}
void sachdangmuon(List<Sach> L)
{
	cout << endl;
	char c[30] = "";
	//cin.ignore();
	cin.getline(c, 30);
	char* a;
	a = c;
	int z = 0;
	NodeData<Sach>* p = L.head();
	NodeData<Sach>* temp = p;
	if (p != NULL)
	{
		NodeData<Sach>* temp = p;
		while (temp != NULL)
		{

			if (temp->get_data().getTinhTrang() == 1)
			{
				temp->get_data().outputSach();
			}
		}
	}
}
void sachchuamuon(List<Sach> L)
{
	int dem = 0;
	cout << endl;
	char c[30] = "";
	//cin.ignore();
	cin.getline(c, 30);
	char* a;
	a = c;
	int z = 0;
	NodeData<Sach>* p = L.head();
	NodeData<Sach>* temp = p;
	if (p != NULL)
	{
		NodeData<Sach>* temp = p;
		while (temp != NULL)
		{

			if (temp->get_data().getTinhTrang() != 0)
			{
				dem = dem + temp->get_data().getTinhTrang();
			}
			temp = temp->get_next();
		}
	}
	cout << "sach chua muon : " << dem << endl;
}
void xoasach(List<Sach>& L1)
{
nn:	cout << "nhap ma sach can tim xoa";
	cout << endl;
	int f;
	cin >> f;
	//cin.ignore();
	int z = 0;
	int m = 0;
	NodeData<Sach>* p = L1.head();
	if (p != NULL)
	{
		NodeData<Sach>* temp = p;
		while (temp != NULL)
		{
			if (temp->get_data().getMS() == f)
			{
				
				L1.remove(temp);
				z = 1;
				m = temp->get_data().getMS();
				L1.show();
			}
			temp = temp->get_next();
		}
	}
	if (z == 0)
	{
		cout << "khong co sach nhap lai";
		goto nn;
	}
	DBHelper database2;
	string v = "DELETE FROM Sach WHERE ";
	ostringstream convert1;
	convert1 << m;
	v = v + "sMaSach" + "=" + convert1.str();
	cout << v;
	database2.init();
	if (database2.checkSQL(database2.convert(v)))
	{
		cout << "thanh cong";
	}
	else
	{
		cout << "fail";
	}
	database2.close();
}
void inputsv(List<SinhVien> &L)
{
	DBHelper database1;
	database1.init();
	int sMSV;
	char sHoTen[30];
	char sKhoa[30];
	char sLop[30];
	int sGioiTinh;
	int ngay;
	int thang;
	int nam;
	string s = "SELECT * FROM SinhVien";
	SinhVien *sv[30];
	if (database1.checkSQL(database1.convert(s)))
	{
		while (database1.checkSQLFetch())
		{
			int i = 0;
			database1.getfloat(1, sMSV);
			database1.getChar(2, sHoTen);
			database1.getChar(3, sKhoa);
			database1.getChar(4, sLop);
			database1.getfloat(5, sGioiTinh);
			database1.getfloat(6, ngay);
			database1.getfloat(7, thang);
			database1.getfloat(8, nam);
			sv[i] = new SinhVien(sMSV, sHoTen, sKhoa, sLop, sGioiTinh, ngay, thang, nam);
			L.InsetFront(*sv[i]);
			i++;
		}
	}
	else
	{
		cout << "that bai nhap lai:";
		
	}
}

void themsinhvien(List<SinhVien>& L)
{
	float msv;
	char hoten[30];
	char khoa[30];
	char lop[30];
	float gioitinh;
	float ngay = 0;
	float thang = 0;
	float nam = 0;
nn:	cout << "nhap ma sinh vien can them";
	cout << endl;
	//cin.ignore();
	cin >> msv;
	int z = 0;
	NodeData<SinhVien>* p = L.head();
	NodeData<SinhVien>* temp = p;
	if (p != NULL)
	{
		NodeData<SinhVien>* temp = p;
		while (temp != NULL)
		{
			if (msv == temp->get_data().getMSV())
			{
				z = 1;
			}
			temp = temp->get_next();
		}
	}
	if (z == 1)
	{
		cout << "ma sinh vien da co moi nhap lai";
		goto nn;
	}

aa:
	cout << "nhap ten sinh vien: ";
	cin.ignore();
	cin.getline(hoten, 30);
	if (strcmp(hoten, "") == 0)
	{
		cout << "\t\t\tkhong duoc de trong !\n";
		goto aa;
	}
bb:
	cout << "nhap khoa: ";
	fflush(stdin);
	cin.getline(khoa, 30);
	if (strcmp(khoa, "") == 0)
	{
		cout << "\t\t\tkhong duoc de trong !\n";
		goto bb;
	}
cc:
	cout << "nhap lop";
	fflush(stdin);
	cin.getline(lop, 30);
	if (strcmp(lop, "") == 0)
	{
		cout << "\t\t\tkhong duoc de trong !\n";
		goto cc;
	}
	cout << "nhap gioi tinh: " << endl;
	cin >> gioitinh;
	a:
	cout << "nhap ngay";
	cin >> ngay;
	if (ngay > 31)
	{
		cout << "nhap lai :";
		goto a;
	}
b:
	cout << "nhap thang";
	cin >> thang;
	
	if (thang>12)
	{
		cout << "nhap lai :";
		goto b;
	}
	cout << "nhap nam";
	cin >> nam;

	SinhVien s(msv, hoten, khoa, lop, gioitinh, ngay, thang, nam);
	L.InsetFront(s);
	cout << "da them sinhvien !";

	DBHelper database1;
	ostringstream convert, convert1, convert2, convert3, convert4;
	convert4 << msv;
	string o = "INSERT INTO SinhVien VALUES(";
	o = o + convert4.str() + "," + "'" + hoten + "'," + "'" + khoa + "'," + "'" + lop;
	convert << gioitinh;
	convert1 << ngay;
	convert2 << thang;
	convert3 << nam;
	o = o + "'," + convert.str() + "," + convert1.str() + "," + convert2.str() + "," + convert3.str() + ")";
	cout << o;
	database1.init();
	if (database1.checkSQL(database1.convert(o)))
	{
		cout << "thanh cong";
	}
	else
	{
		cout << "fail";
	}
}
void outSach(List<Sach> L)
{
	NodeData<Sach>* phead = L.head();
	if (phead != NULL)
	{
		NodeData<Sach>* temp = phead;
		while (temp != NULL)
		{
			temp->get_data().outputSach();
			temp = temp->get_next();
		}
	}
}
void timkiemsinhvientheoten(List<SinhVien>L)
{
nn:	cout << "nhap sinh vien can tim";
	cout << endl;
	char c[30] = "";
	fflush(stdin);
	cin.getline(c, 30);
	char* a;
	a = c;
	int z = 0;
	cout << a;
	NodeData<SinhVien>* p = L.head();
	cout<< p->get_data().getHoTen();
	if (p != NULL)
	{
		NodeData<SinhVien>* temp = p;
		while (temp != NULL)
		{
			if (strcmp(temp->get_data().getHoTen(), a) == 0)
			{
				cout << "thong tin sinhvien :";
				temp->get_data().xuat();
				z = 1;
			}
			temp = temp->get_next();
		}
	}
	if (z == 0)
	{
		cout << "khong co sinh vien nhap lai";
		goto nn;
	}
}
void timkiemsinhvientheomsv(List<SinhVien>L)
{
nn:	cout << "nhap ma sinh vien can tim";
	cout << endl;
	float a;
	cin >> a;
	int z = 0;
	NodeData<SinhVien>* p = L.head();
	if (p != NULL)
	{
		NodeData<SinhVien>* temp = p;
		while (temp != NULL)
		{
			if (temp->get_data().getMSV() == a)
			{
				cout << "thong tin sinh vien :"<<endl;
				temp->get_data().xuat();
				z = 1;
			}
			temp = temp->get_next();
		}
	}
	if (z == 0)
	{
		cout << "khong co sinh vien nhap lai";
		goto nn;
	}
}
void soluongsinhvien(List<SinhVien>L)
{
	int dem = 0;
	NodeData<SinhVien>* p = L.head();
	NodeData<SinhVien>* temp = p;
	if (p != NULL)
	{
		NodeData<SinhVien>* temp = p;
		while (temp != NULL)
		{
			dem++;
			temp = temp->get_next();
		}
	}
	cout << "so luong sinh vien :" << temp << endl;
}
void xoasinhvien(List<SinhVien>&L)
{
nn:	cout << "nhap ma sinh vien can tim xoa";
	cout << endl;
	float f;
	cin >> f;
	//cin.ignore();
	int z = 0;
	int m = 0;
	NodeData<SinhVien>* p = L.head();
	NodeData<SinhVien>* temp = p;
	if (p != NULL)
	{
		NodeData<SinhVien>* temp = p;
		while (temp != NULL)
		{
			if (temp->get_data().getMSV() == f)
			{
				L.remove(temp);
				z = 1;
				m = temp->get_data().getMSV();
				outsinhvien(L);
			}
			temp = temp->get_next();
		}
	}
	if (z == 0)
	{
		cout << "khong co sinh vien nhap lai";
		goto nn;
	}
	DBHelper database2;
	string v = "DELETE FROM SinhVien1 WHERE";
	ostringstream convert1;
	convert1 << f;
	v = v + " masv" + "=" + convert1.str();
	cout << v;
	database2.init();
	if (database2.checkSQL(database2.convert(v)))
	{
		cout << "thanh cong";
	}
	else
	{
		cout << "fail";
	}
}
void timkiemsinhvien(List<SinhVien> L)
{
nn:	cout << "nhap sinh vien can tim";
	cout << endl;
	char c[30] = "";
	//cin.ignore();
	cin.getline(c, 20);
	char* a;
	a = c;
	int z = 0;
	NodeData<SinhVien>* p = L.head();
	NodeData<SinhVien>* temp = p;
	if (p != NULL)
	{
		NodeData<SinhVien>* temp = p;
		while (temp != NULL)
		{
			if (strcmp(temp->get_data().getHoTen(), a) == 0)
			{
				cout << "thong tin sinhvien :";
				temp->get_data().xuat();
				z = 1;
			}
			temp = temp->get_next();
		}
	}
	if (z == 0)
	{
		cout << "khong co sinh vien nhap lai";
		goto nn;
	}

}
void outsinhvien(List<SinhVien>L)
{
	NodeData<SinhVien>* phead = L.head();
	if (phead != NULL)
	{
		NodeData<SinhVien>* temp = phead;
		while (temp != NULL)
		{
			temp->get_data().xuat();
			temp = temp->get_next();
		}
	}
}

void sinhviennu(List<SinhVien> L2)
{
	int z = 0;
	NodeData<SinhVien>* p = L2.head();

	{
		NodeData<SinhVien>* temp = p;
		while (temp != NULL)
		{
			if ( temp->get_data().getgioitinh()==0)
			{
				z = z + 1;
			}
			temp = temp->get_next();
		}
	}
	cout << "so luong ssinhvien nu la: " << z;
}
void sinhviennam(List<SinhVien> L2)
{
	int z = 0;
	NodeData<SinhVien>* p = L2.head();

	{
		NodeData<SinhVien>* temp = p;
		while (temp != NULL)
		{
			if (temp->get_data().getgioitinh() == 1)
			{
				z = z + 1;
			}
			temp = temp->get_next();
		}
	}
	cout << "so luong sinh vien nam la: " << z;
}

void inputTM(List<TheMuon>& L)
{
	DBHelper database;
	database.init();
	int themuon;
	int masv;
	int masach;
	int trangthai;
	int ngaymuo;
	int thangmuon;
	int nammuon;
	int ngaytra;
	int thangtra;
	int namtra;
a:	cout << "nhap duong dan de lay the muon" << endl;
	string s = "select * from themuon";
	TheMuon *sv[30];
	if (database.checkSQL(database.convert(s)))
	{
		while (database.checkSQLFetch())
		{
			int i = 0;
			database.getfloat(1, themuon);
			database.getfloat(2, masv);
			database.getfloat(3, masach);
			database.getfloat(4, trangthai);
			database.getfloat(5, ngaymuo);
			database.getfloat(6, thangmuon);
			database.getfloat(7, nammuon);
			database.getfloat(8, ngaytra);
			database.getfloat(9, thangtra);
			database.getfloat(10, namtra);
			sv[i] = new TheMuon(themuon, masv, masach, trangthai,ngaymuo, thangmuon, nammuon, ngaytra,thangtra,namtra);
			L.InsetFront(*sv[i]);
			i++;
		}
	}
	else
	{
		cout << "that bai nhap lai:";
		goto a;
	}

}

void timkiemTM(List<TheMuon> L)
{
	float matm;
nn:	cout << "nhap ma the muon can tim";
	cout << endl;

	//cin.ignore();
	cin >> matm;

	int z = 0;
	NodeData<TheMuon>* p = L.head();
	NodeData<TheMuon>* temp = p;
	if (p != NULL)
	{
		NodeData<TheMuon>* temp = p;
		while (temp != NULL)
		{
			if (matm == temp->get_data().getTM())
			{
				temp->get_data().xuat();
			}
			temp = temp->get_next();
		}
	}
	if (z == 1)
	{
		cout << "ma sinh vien da co moi nhap lai";
		goto nn;
	}
}

void themTM(List<TheMuon>& L3,List<SinhVien>&L2,List<Sach>&L1)
{
	int maTM;
	int maSV;
	int maSach=0;
	int tinhtrang1;
	int ngaymuon;
	int thangmuon;
	int nammuon;
	int ngaytra;
	int thangtra;
	int namtra;
nn:	cout << "nhap ma the muon can them can them";
	cout << endl;

	cin >> maTM;

	int z = 0;
	NodeData<TheMuon>* p = L3.head();
	
	if (p != NULL)
	{
		NodeData<TheMuon>* temp = p;
		while (temp != NULL)
		{
			if (maTM == temp->get_data().getTM())
			{
				z = 1;
			}
			temp = temp->get_next();
		}
	}
	if (z == 1)
	{
		cout << "ma sinh vien da co moi nhap lai";
		goto nn;
	}
a:cout << "nhap ma sinh vien";
	int q = 0;
	cin >> maSV;
	NodeData<SinhVien>* p1 = L2.head();
	if (p1 != NULL)
	{
		NodeData<SinhVien>* temp1 = p1;
		while (temp1 != NULL)
		{
			if (maSV == temp1->get_data().getMSV())
			{
				
				q = 1;
			}
			temp1 = temp1->get_next();
		}
	}
	if (q == 1)
	{
		cout << "da co ma sv nhap lai : " << endl;
		goto a;
	}


ff:	cout << "nhap ma sach can them";
	cout << endl;

	//cin.ignore();
	cin >> maSach;

	int x = 0;
	NodeData<Sach>* p2 = L1.head();
	NodeData<Sach>* temp2 = p2;
	if (p != NULL)
	{
		NodeData<Sach>* temp2 = p2;
		while (temp2 != NULL)
		{
			if (maSach == temp2->get_data().getMS())
			{
				x = 1;
			}
			temp2 = temp2->get_next();
		}
	}
	if (x == 0)
	{
		cout << "sach khong co moi nhap lai";
		goto ff;
	}
	cout << "nhap tinh trang";
	cin >> tinhtrang1;
	cout << "nhap ngay muon";
	cin >> ngaymuon;
	cout << "nhap thang muon";
	cin >> thangmuon;
	cout << "nhap nam muon";
	cin >> nammuon;
	cout << "nhap ngay tra";
	cin >> ngaytra;
	cout << "nhap thang tra";
	cin >> thangtra;
	cout << "nhap nam tra";
	cin >> namtra;
	TheMuon TM(maTM, maSV, maSach, tinhtrang1, ngaymuon, thangmuon, nammuon, ngaytra, thangtra, namtra);
	L3.InsetFront(TM);
	themsinhvien(L2);

	//////
	char tennsach[20];
	char NXB[20];
	float soluong;
	float tinhtrang;
	Date nhapkho;
	NodeData<Sach>* p4 = L1.head();
	if (p != NULL)
	{
		NodeData<Sach>* temp4 = p4;
		while (temp4 != NULL)
		{
			if (temp4->get_data().getMS() == maSach)
			{
				strcpy_s(tennsach, 20, temp4->get_data().getTenSach());
				strcpy_s(NXB, 20, temp4->get_data().getNXB());	
				tinhtrang = temp4->get_data().getTinhTrang()-1;
				nhapkho = temp4->get_data().getngaynhapkho();
				Sach s(maSach, tennsach, NXB, tinhtrang, nhapkho.getNgay(), nhapkho.getThang(), nhapkho.getNam());
				temp4->set_data(s);
			}
			temp4 = temp4->get_next();
		}
	}
	////
	DBHelper database;
	string s = "UPDATE Sach SET sTinhTrang = ";
	ostringstream convert,convert1;
	convert1 << maSach;
	convert << tinhtrang;
	fflush(stdin);
	s = s  + convert.str() ;
	s = s + " WHERE sMaSach=" + convert1.str() ;
	cout << s;
	database.init();
	if (database.checkSQL(database.convert(s)))
	{
		cout << "thanh cong";
	}
	else
	{
		cout << "fail";
	}
	DBHelper database1;
	ostringstream convert11, convert12, convert13, convert14, convert15, convert16, convert17, convert18, convert19, convert20;
	convert11 << maTM;
	//convert5 << soluong;
	convert12 << maSV;
	convert13 << maSach;
	convert14 << tinhtrang1;
	convert15 << ngaymuon;
	convert16 << thangmuon;
	convert17 << nammuon;
	convert18 << ngaytra;
	convert19 << thangtra;
	convert20 << namtra;
	string o="INSERT INTO themuon VALUES( ";
	o = o + convert11.str() + ","  + convert12.str() + "," + "'" + convert13.str();
	o = o + "'," + convert14.str() + "," + convert15.str() + "," + convert16.str() + "," + convert17.str() +","+convert18.str()+","+convert19.str()+","+convert20.str()+")";
	cout << o;
	database1.init();
	if (database1.checkSQL(database1.convert(o)))
	{
		cout << "thanh cong";
	}
	else
	{
		cout << "fail";
	}
	database1.close();
	
}

void xoaTM(List<TheMuon>& L3,List<SinhVien>&L2,List<Sach>&L1)
{
nn:	cout << "nhap ma the muon can tim xoa";
	cout << endl;
	int f;
	cin >> f;
	//cin.ignore();
	int z = 0;
	int m = 0;
	int n = 0;
	NodeData<TheMuon>* p = L3.head();
	NodeData<TheMuon>* temp = p;
	if (p != NULL)
	{
		NodeData<TheMuon>* temp = p;
		while (temp != NULL)
		{
			if (temp->get_data().getTM() == f)
			{

				L3.remove(temp);
				z = 1;
				m = temp->get_data().getMaSV();
				n = temp->get_data().getMaSach();

			}
			temp = temp->get_next();
		}
	}
	if (z == 0)
	{
		cout << "khong co the muon ";
		goto nn;
	}
	NodeData<SinhVien>* p1 = L2.head();
	
	if (p1 != NULL)
	{
		NodeData<SinhVien>* temp1 = p1;
		while (temp1 != NULL)
		{
			if (temp1->get_data().getMSV() ==m)
			{
				L2.remove(temp1);
			
			}
			temp1 = temp1->get_next();
		}
	}
	DBHelper database2;
	string v = "DELETE FROM themuon WHERE";
	ostringstream convert2;
	convert2 << f;
	v = v + " mapm" + "=" + convert2.str();
	cout << v;
	database2.init();
	if (database2.checkSQL(database2.convert(v)))
	{
		cout << "thanh cong";
	}
	else
	{
		cout << "fail";
	}
	///////

	char tennsach[20];
	char NXB[20];
	int soluong;
	int tinhtrang;
	Date nhapkho;
	NodeData<Sach>* p4 = L1.head();
	if (p != NULL)
	{
		NodeData<Sach>* temp4 = p4;
		while (temp4 != NULL)
		{
			if (temp4->get_data().getMS() == n)
			{
				strcpy_s(tennsach, 20, temp4->get_data().getTenSach());
				strcpy_s(NXB, 20, temp4->get_data().getNXB());
				tinhtrang = temp4->get_data().getTinhTrang() + 1;
				nhapkho = temp4->get_data().getngaynhapkho();
				Sach s(temp->get_data().getMaSach(), tennsach, NXB, tinhtrang, nhapkho.getNgay(), nhapkho.getThang(), nhapkho.getNam());
				temp4->set_data(s);
			}
			temp4 = temp4->get_next();
		}
	}
	////
	DBHelper database;
	string s = "UPDATE Sach SET sTinhTrang = ";
	ostringstream convert, convert1;
	convert1 << temp->get_data().getMaSach();
	convert << tinhtrang;
	fflush(stdin);
	s = s + convert.str();
	s = s + " WHERE sMaSach=" + convert1.str();
	cout << s;
	database.init();

	if (database.checkSQL(database.convert(s)))
	{
		cout << "thanh cong";
	}
	else
	{
		cout << "fail";
	}
}
void outTM(List<TheMuon> L)
{
	NodeData<TheMuon>* phead = L.head();
	if (phead != NULL)
	{
		NodeData<TheMuon>* temp = phead;
		while (temp != NULL)
		{
			temp->get_data().xuat();
			temp = temp->get_next();
		}
	}
}
void TMquahan(List<TheMuon> L3)
{
	int dem = 0;
	NodeData<TheMuon>* p = L3.head();
	
	if (p != NULL)
	{
		NodeData<TheMuon>* temp = p;
		while (temp != NULL)
		{
			if (temp->get_data().getTT()==0)
			{
				temp->get_data().xuat();
			}
			temp = temp->get_next();
		}
	}
}
void inputaccout(List<Admin> &L4)
{
	DBHelper database6;
	database6.init();
	char id[10];
	char password[10];
	string s = "SELECT * FROM accout";
	Admin *sv[10];
	if (database6.checkSQL(database6.convert(s)))
	{
		while (database6.checkSQLFetch())
		{
			int i = 0;
			database6.getChar(1, id);
			database6.getChar(2, password);		
			sv[i] = new Admin(id, password);
			L4.InsetFront(*sv[i]);
			i++;
			
		}
	}
	database6.close();
}

void outaccout(List<Admin> L4)
{
	NodeData<Admin>* p = L4.head();

	if (p != NULL)
	{
		NodeData<Admin>* temp = p;
		while (temp != NULL)
		{
			temp->get_data().out();
			cout << "aaaa";
		}
	}

}
