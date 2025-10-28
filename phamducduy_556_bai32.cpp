#include <iostream>
#include <iomanip>

using namespace std;

class NSX
{
private:
    char Mansx[50];
    char Tennsx[50];
    char DCNSX[50];
    friend class HANG;
};

class HANG
{
private:
    char Mahang[50];
    char Tenhang[50];
    float Dongia;
    float TrongLuong;
    NSX x;
public:
    void NHAP();
    void XUAT();
};

void HANG::NHAP()
{
    cout<<"Nhap ma hang: "; fflush(stdin); gets(Mahang);
    cout<<"Nhap ten hang: "; fflush(stdin); gets(Tenhang);
    cout<<"Nhap don gia: "; cin>>Dongia;
    cout<<"Nhap trong luong: "; cin>>TrongLuong;
    cout<<"Nhap ma nha san xuat: "; fflush(stdin); gets(x.Mansx);
    cout<<"Nhap ten nha san xuat: "; fflush(stdin); gets(x.Tennsx);
    cout<<"Nhap ten dia chi nha san xuat: "; fflush(stdin); gets(x.DCNSX);
}
void HANG::XUAT()
{
    cout<<"Nhap ma hang: "<<Mahang<<endl;
    cout<<"Nhap ten hang: "<<Tenhang<<endl;
    cout<<"Nhap don gia: "<<Dongia<<endl;
    cout<<"Nhap trong luong: "<<TrongLuong<<endl;
    cout<<"Nhap ma nha san xuat: "<<x.Mansx<<endl;
    cout<<"Nhap ten nha san xuat: "<<x.Tennsx<<endl;
    cout<<"Nhap ten dia chi nha san xuat: "<<x.DCNSX<<endl;
}
main()
{
    HANG a;
    a.NHAP();
    a.XUAT();
}
