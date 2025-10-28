#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
class DocGia;
class Sach
{
	private:
		char maSach[10],tenSach[20],tacGia[20];
		int soLuong;
		double donGia;
	public:
		void nhap();
		void xuat();
    friend void sua(DocGia &dg);

};
void Sach::nhap()
{
	cout<<"Moi nhap ma sach: ";				fflush(stdin);		gets(maSach);
	cout<<"Moi nhap ten sach: ";			fflush(stdin);		gets(tenSach);
	cout<<"Moi nhap tac gia: ";				fflush(stdin);		gets(tacGia);
	cout<<"Moi nhap so luong: ";			cin>>soLuong;
	cout<<"Moi nhap don gia: ";				cin>>donGia;
}
void Sach::xuat()
{
	cout<<left<<setw(10)<<maSach
		<<left<<setw(20)<<tenSach
		<<left<<setw(20)<<tacGia
		<<left<<setw(10)<<donGia
		<<left<<setw(10)<<soLuong<<endl;
}
class Nguoi
{
	protected:
		char hoTen[20],maThe[10],ngayCap[20];
	public:
		void nhap();
		void xuat();
};
void Nguoi::nhap()
{
	cout<<"Moi nhap ho ten: ";				fflush(stdin);		gets(hoTen);
	cout<<"Moi nhap ma the: ";				fflush(stdin);		gets(maThe);
	cout<<"Moi nhap ngay cap: ";			fflush(stdin);		gets(ngayCap);
}
void Nguoi::xuat()
{
	cout<<"Ho Ten: "<<hoTen<<endl;
	cout<<"Ma The: "<<maThe<<endl;
	cout<<"Ngay Cap: "<<ngayCap<<endl;
}
class DocGia:public Nguoi
{
	private:
		char loaiThe[20],tinhTrang[10];
		Sach x[100];
		int n;
	public:
		void nhap();
		void xuat();
    friend void sua(DocGia &dg);

};
void DocGia::nhap()
{
	Nguoi::nhap();
	cout<<"Moi nhap loai the: ";			fflush(stdin);		gets(loaiThe);
	cout<<"Moi nhap tinh trang: ";			fflush(stdin);		gets(tinhTrang);
	cout<<"Moi nhap so luong sach: ";		cin>>n;
	for(int i = 0;i<n;i++){
		cout<<"Moi nhap tt sach thu "<<i+1<<": \n";
		x[i].nhap();
	}
}
void DocGia::xuat()
{
	Nguoi::xuat();
	cout<<"Loai The: "<<loaiThe<<endl;
	cout<<"Tinh Trang: "<<tinhTrang<<endl;
	cout<<"==== DANH SACH SACH ====\n";
	cout<<left<<setw(10)<<"Ma Sach"
		<<left<<setw(20)<<"Ten Sach"
		<<left<<setw(20)<<"Tac Gia"
		<<left<<setw(10)<<"Don Gia"
		<<left<<setw(10)<<"So Luong"<<endl;
	for(int i = 0;i<n;i++){
		x[i].xuat();
	}
}

void sua(DocGia &dg)
{
    for(int i=0;i<dg.n;i++)
    {
        if(strcmp(dg.x[i].tenSach,"lap trinh python")==0)
            dg.x[i].soLuong = 10;
    }
}

int main(){
	DocGia dg;
	dg.nhap();
	cout<<"\n==== THONG TIN DOC GIA ====\n";
	dg.xuat();

	sua(dg);
	dg.xuat();
}
