#include <iostream>
#include <iomanip>
using namespace std;

class NSX
{
private:
    char Mansx[50];
    char Tennsx[50];
    char Dcnsx[50];
public:
    void NHAP();
    void XUAT();
};

void NSX::NHAP()
{
    cout<<"Nhap Ma nsx: ";      fflush(stdin);      gets(Mansx);
    cout<<"Nhap Ten nsx: ";     fflush(stdin);      gets(Tennsx);
    cout<<"Nhap Dc nsx: ";      fflush(stdin);      gets(Dcnsx);
}

void NSX::XUAT()
{
    cout<<"Ma nsx: "      <<      Mansx   <<endl;
    cout<<"Ten nsx: "     <<      Tennsx  <<endl;
    cout<<"DC nsx: "      <<      Dcnsx   <<endl;

}


class HANG
{
private:
    char Mahang[50];
    char Tenhang[50];
    NSX x;
public:
    void NHAP();
    void XUAT();
};
void HANG::NHAP()
{
    cout<<"Nhap Ma hang: ";      fflush(stdin);      gets(Mahang);
    cout<<"Nhap Ten hang: ";     fflush(stdin);      gets(Tenhang);
    cout<<"=== Nhap nsx ===\n";
    x.NHAP();
}

void HANG::XUAT()
{
    cout<<"Ma hang: "   <<  Mahang  <<endl;
    cout<<"Ten hang: "  <<  Tenhang <<endl;
    x.XUAT();
}
main()
{
    HANG a;
    a.NHAP();
    a.XUAT();

}
