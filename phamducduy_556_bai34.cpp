#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;



class PhuongTrinhBac2
{
private:
    float a,b,c;
public:
    //Khoi tao khong doi
    PhuongTrinhBac2()
    {
        a = 0;
        b = 0;
        c = 0;
    }
    //Khoi tao co doi
    PhuongTrinhBac2(float a, float b, float c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void NHAP();
    void XUAT();
    void GIAI();
};
void PhuongTrinhBac2::NHAP()
{
    cout<<"===NHAP THONG SO PHUONG TRINH BAC 2 ax2+bx+c=0.===\n\n\n";
    cout<<"Nhap a: "; cin>>a;
    cout<<"Nhap b: "; cin>>b;
    cout<<"Nhap c: "; cin>>c;
}
void PhuongTrinhBac2::XUAT()
{
    cout<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<<endl;
}

void PhuongTrinhBac2::GIAI()
{
    //Phuong trinh la hang so
    if(a==0 && b==0 && c==0) cout<<"Phuong trinh vo so nghiem thoa man\n";
    else if (a==0 && b==0 && c!=0) cout<<"Phuong trinh vo nghiem\n";
    //Phuong trinh bac nhat
    else if (a==0 && b!=0) cout<<"Nghiem phuong trinh la: "<<-b/a<<endl;
    //Phuong trinh bac hai
    else
    {
        float delta = pow(b,2) - 4*a*c;
        if (delta < 0) cout<<"Phuong trinh vo nghiem\n";
        else if (delta == 0) cout<<"Phuong trinh co nghiem kep x1=x2="<<-b/2*a<<endl;
        else cout<<"Phuong trinh co 2 nghiem phan biet x1="<<(-b+sqrt(delta))/2*a<<"; x2="<<(-b-sqrt(delta))/2*a<<endl;
    }
}

main()
{
    PhuongTrinhBac2 P(1,-2,1);
    P.XUAT();
    P.GIAI();
    PhuongTrinhBac2 Q;
    Q.NHAP();
    Q.XUAT();
    Q.GIAI();

}
