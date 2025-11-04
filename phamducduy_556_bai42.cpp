#include <iostream>

using namespace std;
class DOTPRINTER;
class LASERPRINTER;
class PRINTER
{
protected:
    float TrongLuong;
    char Hangsx[50];
    int Namsx;
    float Tocdo;
    friend void suanam(DOTPRINTER &a, LASERPRINTER &b);
};

class DOTPRINTER : public PRINTER
{
private:
    float matdokim;
public:
    void NHAP();
    void XUAT();
};

void DOTPRINTER::NHAP()
{
    cout<<"Nhap trong luong: "; cin>>TrongLuong;
    cout<<"Nhap hang san xuat: "; fflush(stdin); gets(Hangsx);
    cout<<"Nhap nam san xuat: "; cin>>Namsx;
    cout<<"Nhap toc do: "; cin>>Tocdo;
    cout<<"Nhap mat do kim: "; cin>>matdokim;
}

void DOTPRINTER::XUAT()
{
    cout<<"Trong luong: "<<TrongLuong<<endl;
    cout<<"Hang san xuat: "<<Hangsx<<endl;
    cout<<"Nam san xuat: "<<Namsx<<endl;
    cout<<"Mat do kim: "<<matdokim<<endl;
}

class LASERPRINTER : public PRINTER
{
private:
    float dophangiai;
public:
    void NHAP();
    void XUAT();
};

void LASERPRINTER::NHAP()
{
    cout<<"Nhap trong luong: "; cin>>TrongLuong;
    cout<<"Nhap hang san xuat: "; fflush(stdin); gets(Hangsx);
    cout<<"Nhap nam san xuat: "; cin>>Namsx;
    cout<<"Nhap toc do: "; cin>>Tocdo;
    cout<<"Nhap do phan giai: "; cin>>dophangiai;
}

void LASERPRINTER::XUAT()
{
    cout<<"Trong luong: "<<TrongLuong<<endl;
    cout<<"Hang san xuat: "<<Hangsx<<endl;
    cout<<"Nam san xuat: "<<Namsx<<endl;
    cout<<"Do phan giai: "<<dophangiai<<endl;
}

void suanam(DOTPRINTER &a, LASERPRINTER &b)
{
    a.Namsx = 2020;
    b.Namsx = 2020;
}

main()
{
    DOTPRINTER a;
    LASERPRINTER b;
    cout<<"=== NHAP THONG TIN DOTPRINTER ===\n\n";
    a.NHAP();
    cout<<"=== NHAP THONG TIN LASERPRINTER ===\n\n";
    b.NHAP();
    cout<<"===THONG TIN DOTPRINTER ===\n\n";
    a.XUAT();
    cout<<"===THONG TIN LASERPRINTER ===\n\n";
    b.XUAT();
    suanam(a, b);
    cout<<"\n\n\nSAU KHI SUA";
    cout<<"===THONG TIN DOTPRINTER ===\n\n";
    a.XUAT();
    cout<<"===THONG TIN LASERPRINTER ===\n\n";
    b.XUAT();

}
