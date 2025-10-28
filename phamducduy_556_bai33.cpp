#include <iostream>
#include <iomanip>
using namespace std;

class HANG;
class DATE
{
private:
    int D; //ngay
    int M; //thang
    int Y; //nam

friend class HANG;
friend void tim(HANG a[100], int n);
};

class HANG
{
private:
    char Mahang[50];
    char Tenhang[50];
    DATE Ngaysx;
public:
    void NHAP();
    void XUAT();
friend void tim(HANG a[100], int n);
};

void HANG::NHAP()
{
    cout<<"Nhap ma hang: "; fflush(stdin); gets(Mahang);
    cout<<"Nhap ten hang: "; fflush(stdin); gets(Tenhang);
    cout<<"Nhap ngay: "; cin>>Ngaysx.D;
    cout<<"Nhap thang: "; cin>>Ngaysx.M;
    cout<<"Nhap nam: "; cin>>Ngaysx.Y;
}

void HANG::XUAT()
{
    cout<<setw(15)<<Mahang<<setw(15)<<Tenhang<<setw(15)<<Ngaysx.D<<setw(15)<<Ngaysx.M<<setw(15)<<Ngaysx.Y<<endl;
}

void tim(HANG a[100], int n)
{
    int cnt =0;
    cout<<"\n\n\n";
    cout<<"===NAM 2017===\n";
    cout<<setw(15)<<"Ma hang"<<setw(15)<<"Ten hang"<<setw(15)<<"Ngay"<<setw(15)<<"Thang"<<setw(15)<<"Nam"<<endl;
    for(int i=0; i<n; i++)
    {
        if (a[i].Ngaysx.Y == 2017)
        {
            a[i].XUAT();
            cnt ++;
        }
    }
    if (cnt == 0) cout<<"===Khong co mat hang nao nam 2017===";
}
main()
{
    int n;
    HANG a[100]; cout<<"Nhap so luong mat hang 'n':"; cin>>n;
    for (int i=0; i<n; i++)
    {
        cout<<"\n===Nhap thong tin mat hang "<<i+1<<" ==="<<endl;
        a[i].NHAP();
    }
    cout<<"\n\n\n";
    cout<<"===CAC MAT HANG===\n";
    cout<<setw(15)<<"Ma hang"<<setw(15)<<"Ten hang"<<setw(15)<<"Ngay"<<setw(15)<<"Thang"<<setw(15)<<"Nam"<<endl;
    for(int i=0; i<n; i++)
    {
        a[i].XUAT();
    }

    tim(a, n);

}
