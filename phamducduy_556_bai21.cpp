#include <iostream>
#include <iomanip>
using namespace std;

class DATE
{
private:
    int ngay;
    int thang;
    int nam;
public:
    void NHAP();
    void XUAT();
};

void DATE::NHAP()
{
    cout<<"Nhap ngay: "; cin>>ngay;
    cout<<"\n Nhap thang: "; cin>>thang;
    cout<<"\n Nhap nam: "; cin>>nam;
}
void DATE::XUAT()
{
    cout<<"\n"<<ngay<<"\n"<<thang<<"\n"<<nam<<endl;
}
class NHANSU
{
private:
    char Manhansu[50];
    char Hoten[50];
    DATE NS;

public:
    void NHAP();
    void XUAT();
};

void NHANSU::NHAP()
{
    cout<<"Nhap ma nhan su: ";              fflush(stdin); gets(Manhansu);
    cout<<"Nhap ho ten : ";                 fflush(stdin); gets(Hoten);
    cout<<"===Nhap DATE=== ";               NS.NHAP();
}


void NHANSU::XUAT()
{
        cout<<setw(15)<<"Manhansu"<<setw(15)<<"Hoten"<<setw(15)<<endl;
        cout<<setw(15)<<Manhansu<<setw(15)<<Hoten<<setw(15)<<endl;
        NS.XUAT();
}

main()
{
    NHANSU x;
    x.NHAP();
    x.XUAT();
}
