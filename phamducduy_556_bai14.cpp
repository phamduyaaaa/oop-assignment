#include <iostream>
#include <iomanip>

using namespace std;




class SACH
{
private:
    char Masach[50];
    char Tensach[50];
    char Nxb[50];
    int Sotrang;
    float Giatien;

public:
    void NHAP();
    void XUAT();
};
void SACH::NHAP()
{
    cout<<"Nhap Masach: "; fflush(stdin); gets(Masach);
    cout<<"Nhap Tensach: "; fflush(stdin); gets(Tensach);
    cout<<"Nhap Nxb: "; fflush(stdin); gets(Nxb);
    cout<<"Nhap Sotrang: "; cin>>Sotrang;
    cout<<"Nhap Giatien: "; cin>>Giatien;
}
void SACH::XUAT()
{
    cout<<setw(15)<<Masach<<setw(15)<<Tensach<<setw(15)<<Nxb<<setw(15)<<Sotrang<<setw(15)<<Giatien<<endl;
}
main()
{
    cout<<"Nhap so luong cuon sach 'n': ";
    int n; cin>>n;
    SACH mang[100];
    for (int i = 0; i < n; i++){
        mang[i].NHAP();
    }
    cout<<setw(15)<<"Masach"<<setw(15)<<"Tensach"<<setw(15)<<"Nxb"<<setw(15)<<"Sotrang"<<setw(15)<<"Giatien"<<endl;
        for (int i = 0; i < n; i++){
        mang[i].XUAT();
    }
}
