#include <iostream>

using namespace std;

class VEHICLE
{
protected:
    char nhanhieu[50];
    float namsx;
    char hang[50];
public:
    void NHAP();
    void XUAT();
};

void VEHICLE::NHAP()
{
    cout<<"Nhap nhan hieu: "; fflush(stdin); gets(nhanhieu);
    cout<<"Nhap nam san xuat: "; cin>>namsx;
    cout<<"Nhap hang: "; fflush(stdin); gets(hang);
}

void VEHICLE::XUAT()
{
    cout<<"Nhan hieu: "<<nhanhieu<<endl;
    cout<<"Nam san xuat: "<<namsx<<endl;
    cout<<"Hang: "<<hang<<endl;
}

class OTO : public VEHICLE
{
private:
    int sochongoi;
    float dungtich;
public:
    void NHAP();
    void XUAT();
friend void sua_dungtich(OTO &a);
};

void OTO::NHAP()
{
    VEHICLE::NHAP();
    cout<<"Nhap so cho ngoi: "; cin>>sochongoi;
    cout<<"Nhap dung tich: "; cin>>dungtich;
}

void OTO::XUAT()
{
    VEHICLE::XUAT();
    cout<<"So cho ngoi: "<<sochongoi<<endl;
    cout<<"Dung tich: "<<dungtich<<endl;
}

class MOTO : public VEHICLE
{
private:
    float phankhoi;
public:
    void NHAP();
    void XUAT();
};

void MOTO::NHAP()
{
    VEHICLE::NHAP();
    cout<<"Nhap phan khoi: "; cin>>phankhoi;
}

void MOTO::XUAT()
{
    VEHICLE::XUAT();
    cout<<"Phan khoi: "<<phankhoi<<endl;
}

void sua_dungtich(OTO &a)
{
    a.dungtich = 3.0;
}

main()
{
    OTO a;
    a.NHAP();
    a.XUAT();
    cout<<"SAU KHI SUA\n";
    sua_dungtich(a);
    a.XUAT();
}
