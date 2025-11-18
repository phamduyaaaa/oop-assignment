#include <iostream>

using namespace std;

class PhanSo
{
private:
    int ts;
    int ms;
public:
    PhanSo();
    PhanSo(int t, int m);
friend istream& operator>>(istream& in, PhanSo& ps);
friend ostream& operator<<(ostream& out, PhanSo& ps);
friend PhanSo operator+(PhanSo ps1, PhanSo ps2);
friend PhanSo operator-(PhanSo ps1, PhanSo ps2);
friend PhanSo operator*(PhanSo ps1, PhanSo ps2);
friend PhanSo operator/(PhanSo ps1, PhanSo ps2);
};

PhanSo::PhanSo()
{
    ts = 0;
    ms = 1;
}

PhanSo::PhanSo(int t, int m)
{
    ts = t;
    ms = m;
}

istream& operator>>(istream& in, PhanSo& ps)
{
    cout << "\nNhap tu so: ";
    in >> ps.ts;
    cout << "Nhap mau so: ";
    in >> ps.ms;
    return in;
}

ostream& operator<<(ostream& out, PhanSo& ps)
{
    out<<ps.ts<<"/"<<ps.ms;
    return out;
}

PhanSo operator+(PhanSo ps1, PhanSo ps2)
{

    int new_ts = ps1.ts * ps2.ms + ps2.ts * ps1.ms;
    int new_ms = ps1.ms * ps2.ms;
    return PhanSo(new_ts,new_ms);
}

PhanSo operator-(PhanSo ps1, PhanSo ps2)
{
    int new_ts = ps1.ts * ps2.ms - ps2.ts * ps1.ms;
    int new_ms = ps1.ms * ps2.ms;
    return PhanSo(new_ts, new_ms);
}

//PhanSo operator*

main()
{
    PhanSo a;
    PhanSo b(1,2);
    cout<<b;
    cin>>a;
    cout<<a;
    PhanSo c;
    c = a + b;
    cout<<"\nTONG: "<<c<<endl;

}




