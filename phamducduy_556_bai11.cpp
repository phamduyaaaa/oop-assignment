#include <iostream>
#include <iomanip>
using namespace std;

class SINHVIEN
{
private:
	char msv[100];
	char hoten[30];
	int tuoi;
	float diem;
public:
	void nhap();
	void xuat();

};
void SINHVIEN::nhap()
{
    cout<<"Nhap MSV: "; fflush(stdin); gets(msv);
    cout<<"Nhap ho va ten: "; fflush(stdin); gets(hoten);
    cout<<"Nhap tuoi: "; cin>>tuoi;
    cout<<"Nhap diem: "; cin>>diem;
}
void SINHVIEN::xuat()
{
    cout<<setw(15)<<msv<<setw(20)<<hoten<<setw(8)<<tuoi<<setw(8)<<diem<<endl;


}


int main()
{
    SINHVIEN a,b;
    a.nhap();
    b.nhap();
    cout<<setw(15)<<"MSV"<<setw(20)<<"Hoten"<<setw(8)<<"Tuoi"<<setw(8)<<"Diem"<<endl;
    b.xuat();
    a.xuat();



	return 0;
}
