#include <iostream>
#include <iomanip>
using namespace std;



class HANG
{

private:
    char Mahang[50];
    char Tenhang[50];
    float Dongia;
    int Soluong;
public:
    void NHAP();
    void XUAT();
};

void HANG::NHAP()
{
    cout<<"Nhap ma hang: "; fflush(stdin); gets(Mahang);
    cout<<"Nhap ten hang: "; fflush(stdin); gets(Tenhang);
    cout<<"Nhap don gia: "; cin>>Dongia;
    cout<<"Nhap so luong: "; cin>>Soluong;
}
void HANG::XUAT()
{
    cout<<setw(15)<<Mahang<<setw(15)<<Tenhang<<setw(15)<<Dongia<<setw(15)<<Soluong<<setw(15)<<Dongia*Soluong;
}
main()
{
    HANG mang_hang[100];
    //HANG *contro_hang;
    cout<<"Nhap so luong mat hang 'n': ";
    int n; cin>>n;
    //contro_hang = new HANG[n];


    for (int i = 0; i < n; i++)
    {
        mang_hang[i].NHAP();
    }
    cout<<setw(15)<<"Mahang"<<setw(15)<<"Tenhang"<<setw(15)<<"Dongia"<<setw(15)<<"Soluong"<<setw(15)<<"Thanhtien"<<endl;
    for (int i = 0; i < n; i++)
    {
        mang_hang[i].XUAT();
        cout<<endl;
    }

}
