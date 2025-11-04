#include <iostream>
#include <iomanip>

using namespace std;

class PERSON
{
protected:
    char Hoten[50];
    char Ngaysinh[50];
    char Quequan[50];
};

class KYSU : public PERSON
{
private:
    char Nganh[50];
    int NamTN;
public:
    void NHAP();
    void XUAT();
friend void ganday(KYSU mang[100], int n);
};

void KYSU::NHAP()
{
    cout<<"Nhap Hoten: ";       fflush(stdin); gets(Hoten);
    cout<<"Nhap Ngaysinh: ";    fflush(stdin); gets(Ngaysinh);
    cout<<"Nhap Quequan: ";     fflush(stdin); gets(Quequan);

    cout<<"Nhap Nganh: ";       fflush(stdin); gets(Nganh);
    cout<<"Nhap NamTN: ";       cin>>NamTN;


}

void KYSU::XUAT()
{
    cout<<setw(15)<<Hoten<<setw(15)<<Ngaysinh<<setw(15)<<Quequan<<setw(15)<<Nganh<<setw(15)<<NamTN<<endl;
}

void ganday(KYSU mang[100], int n)
{
    int cache = -1;
    for (int i=0; i<n; i++)
    {
        if(mang[i].NamTN > cache)
        {
            cache = mang[i].NamTN;
        }
    }
    cout<<"==== DANH SACH CAC KY SU MOI TOT NGHIEP ====\n\n";
    for (int i=0; i<n; i++)
    {
        if(mang[i].NamTN == cache)
        mang[i].XUAT();
    }
}

main()
{
    cout<<"Nhap so luong ky su 'n': ";
    int n; cin>>n;
    KYSU mang[100];
    for (int i=0; i<n; i++)
    {
        cout<<"\n===Nhap thong tin ky su "<<i+1<<" ===\n";
        mang[i].NHAP();
    }
    cout<<setw(15)<<"Hoten"<<setw(15)<<"Ngaysinh"<<setw(15)<<"Quequan"<<setw(15)<<"Nganh"<<setw(15)<<"NamTN"<<endl;


    for (int i=0; i<n; i++)
    {
        mang[i].XUAT();
    }
    ganday(mang, n);


}
