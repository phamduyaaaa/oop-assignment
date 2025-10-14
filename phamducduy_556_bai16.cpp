#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class SOTHUC
{
private:
    float giatri;
public:
    void NHAP();
    void XUAT();
    friend void tim_min_max(SOTHUC mang[100], int n);
};

void SOTHUC::NHAP()
{
    cout <<"Nhap gia tri: "; cin >> giatri;
}
void SOTHUC::XUAT()
{
    cout<<setw(8)<< giatri<<endl;
}

void tim_min_max(SOTHUC mang[100], int n)
{
float min_ = INFINITY;
int idx_min;
float max_ = -INFINITY;
int idx_max;
    for (int i = 0; i < n; i++)
    {
        if(min_ > mang[i].giatri)
        {
            min_ = mang[i].giatri;
            idx_min = i;
        }
        if(max_ < mang[i].giatri)
                {
            max_ = mang[i].giatri;
            idx_max = i;
        }
    }
    cout<<"idx_min = "<< idx_min <<"GIATRI ="<< mang[idx_min].giatri<<endl;
    cout<<"idx_max = "<< idx_max <<"GIATRI ="<< mang[idx_max].giatri<<endl;
}

main()
{
    cout<<"Nhap so luong so thuc 'n': ";
    int n; cin >> n;
    SOTHUC mang[100];
    for(int i =0; i<n; i++)
    {
        mang[i].NHAP();
    }
    cout<<setw(8)<< "giatri"<<endl;
    for(int i =0; i<n; i++)
    {
        mang[i].XUAT();
    }
    tim_min_max(mang, n);

}
