#include <iostream>
#include <iomanip>
using namespace std;

//===QUAN LY===
class QUANLY
{
private:
    char Maql[50];
    char Hoten[50];
public:
    void NHAP();
    void XUAT();
};
// DEFINE
void QUANLY::NHAP()
{
    cout<<"Nhap ma quan ly: ";  fflush(stdin); gets(Maql);
    cout<<"Nhap ho ten: ";      fflush(stdin); gets(Hoten);
}
void QUANLY::XUAT()
{
    cout<<"\nMa quan ly: "<<Maql;
    cout<<"\nHo ten: "<<Hoten;
}

// ===MAY===
class MAY
{
private:
    char Mamay[50];
    char Kieumay[50];
    char Tinhtrang[50];
public:
    void NHAP();
    void XUAT();
};

// DEFINE
void MAY::NHAP()
{
    cout<<"Nhap ma may: ";  fflush(stdin); gets(Mamay);
    cout<<"Nhap kieu may: ";      fflush(stdin); gets(Kieumay);
    cout<<"Nhap tinh trang: ";      fflush(stdin); gets(Tinhtrang);
}

void MAY::XUAT()
{
    cout<<setw(15)<<Mamay<<setw(15)<<Kieumay<<setw(15)<<Tinhtrang<<endl;
}

//===PHONG MAY===
class PHONGMAY
{
private:
    char Maphong[50];
    char Tenphong[50];
    float Dientich;
    QUANLY x;
    MAY y[100];
    int n;
public:
    void NHAP();
    void XUAT();

};
//DEFINE
void PHONGMAY::NHAP()
{
    cout<<"Nhap Maphong: ";       fflush(stdin); gets(Maphong);
    cout<<"Nhap Tenphong: ";      fflush(stdin); gets(Tenphong);
    cout<<"Nhap Dientich: ";      cin>>Dientich;
    x.NHAP();
    cout<<"Nhap so luong may 'n': "; cin>>n;
    for (int i =0; i<n;i++)
    {
        cout<<"===Nhap thong tin may "<<i+1<<endl;
        y[i].NHAP();
    }
}

void PHONGMAY::XUAT()
{
    cout<<"\nMaphong: "<<Maphong;
    cout<<"\nTenphong: "<<Tenphong;
    cout<<"\nDientich: "<<Dientich;
    x.XUAT();
    cout<<endl;
    cout<<setw(15)<<"Ma ma may"<<setw(15)<<"Kieu may"<<setw(15)<<"Tinh trang"<<endl;
    for (int i =0; i<n;i++)
    {
        y[i].XUAT();
    }

}
main()
{
    PHONGMAY a;
    a.NHAP();
    a.XUAT();

}
