#include <iostream>
#include <iomanip>
using namespace std;

class SONGUYEN
{
private:
    int giatri;
public:
    void NHAP();
    void XUAT();
    friend void sapxeptang(SONGUYEN mang[100], int n);
};

void SONGUYEN::NHAP()
{
    cout <<"Nhap gia tri: "; cin >> giatri;
}
void SONGUYEN::XUAT()
{
    cout<<setw(8)<< giatri<<endl;
}
void sapxeptang(SONGUYEN mang[100], int n)
{
    SONGUYEN temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (mang[i].giatri > mang[j].giatri)
            {
                temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }
}

main()
{
    cout<<"Nhap so luong so nguyen 'n': ";
    int n; cin >> n;
    SONGUYEN mang[100];
    for(int i =0; i<n; i++)
    {
        mang[i].NHAP();
    }
    cout<<setw(8)<< "giatri"<<endl;
    for(int i =0; i<n; i++)
    {
        mang[i].XUAT();
    }
    sapxeptang(mang, n);
    cout<<"SAU KHI SAP XEP:" << endl;
    for(int i =0; i<n; i++)
    {
        mang[i].XUAT();
    }
}
