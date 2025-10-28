#include <iostream>
#include <iomanip>
using namespace std;


class ARRAY
{
private:
    int *VALUE;
    int n;
public:
    ARRAY();
    ARRAY(int n);
    ~ARRAY();
    void NHAP();
    void XUAT();
};

//khoi tao khong doi
ARRAY::ARRAY()
{
    n = 0;
    VALUE = nullptr;
}

//khoi tao co doi
ARRAY::ARRAY(int n)
{
    this->n = n;
    VALUE = new int[n];
    for (int i = 0; i < n; i++) {
        VALUE[i] = 0;
    }
}

ARRAY::~ARRAY()
{
    delete[] VALUE; //giai phong bo nho cap cho mang
    n = 0;
    VALUE = nullptr;
}

void ARRAY::NHAP()
{
    cout<<"Nhap 'n': "; cin>>n; cout<<"\n";
    for (int i=0; i<n;i++)
    {
        cout<<"Nhap phan tu "<<i+1<<": ";
        cin>> VALUE[i];
    }
}

void ARRAY::XUAT()
{
    for (int i=0; i<n;i++)
    {
        cout<<VALUE[i]<<" ";
    }

}


main()
{
    ARRAY a(5);
    a.NHAP();
    a.XUAT();
}
