#include <iostream>
#include <iomanip>
using namespace std;

class HANG
{
private:
    char Mahang[50];
    char Tenhang[50];
    float Dongia;
public:
    void NHAP();
    void XUAT();
};

void HANG::NHAP()
{
    cout<<"Nhap ma hang: ";     fflush(stdin);      gets(Mahang);
    cout<<"Nhap ten hang: ";    fflush(stdin);      gets(Tenhang);
    cout<<"Nhap don gia: ";     cin>>Dongia;
}

void HANG::XUAT()
{
    cout<<setw(15)<<Mahang<<setw(15)<<Tenhang<<setw(15)<<Dongia<< setw(15)<<endl;
}

class PHIEU
{
private:
    char Maphieu[50];
    int n;
    HANG x[100];
public:
    void NHAP();
    void XUAT();
};

void PHIEU::NHAP()
{
    cout<<"Nhap ma phieu: ";        fflush(stdin);      gets(Maphieu);
    cout<<"Nhap so luong hang 'n' : ";   cin>>n;
    for (int i=0; i<n; i++)
    {
        x[i].NHAP();
    }
}

void PHIEU::XUAT()
{
    cout<<"Ma phieu: "       <<  Maphieu   <<endl;
    cout<<"so luong hang: "  <<  n         <<endl;
    cout<<setw(15)<<"Ma hang"<<setw(15)<<"Ten hang" << setw(15)<< "Don gia"<<setw(15)<<endl;
    for (int i=0; i<n; i++)
    {
        x[i].XUAT();
    }

}

main()
{
    PHIEU a;
    a.NHAP();
    a.XUAT();
}
