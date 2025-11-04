#include <iostream>
#include <cstring>

using namespace std;

class ELECTRONIC
{
protected:
    float congsuat;
    float dienap;
public:
    ELECTRONIC(float cs, float da);
};
ELECTRONIC::ELECTRONIC(float cs, float da)
{
    congsuat = cs;
    dienap = da;
}


//MAY GIAT
class MAYGIAT : public ELECTRONIC
{
private:
    float dungtich;
    char loai[50];
public:
    MAYGIAT(float cs, float da, float dt, char* l);
    void XUAT();
};

MAYGIAT::MAYGIAT(float cs, float da, float dt, char* l)
    : ELECTRONIC(cs, da)
{
    dungtich = dt;
    strcpy(loai, l);
}

void MAYGIAT::XUAT()
{
    cout << "Cong suat: " << congsuat << "W, Dien ap: " << dienap
         << "V, Dung tich: " << dungtich << " lit, Loai: " << loai << endl;
}


//TU LANH
class TULANH : public ELECTRONIC
{
private:
    float dungtich;
    int songan;
public:
    TULANH(float cs, float da, float dt, int sn);
    void XUAT();
};

TULANH::TULANH(float cs, float da, float dt, int sn)
    : ELECTRONIC(cs, da)
{
    dungtich = dt;
    songan = sn;
}

void TULANH::XUAT()
{
    cout << "Cong suat: " << congsuat << "W, Dien ap: " << dienap
         << "V, Dung tich: " << dungtich << " lit, So ngan: " << songan << endl;
}
int main()
{
    MAYGIAT mg(2000, 220, 7.5, "Cua tren");
    TULANH tl(150, 220, 300, 2);

    cout << "=== May giat ===" << endl;
    mg.XUAT();

    cout << "\n=== Tu lanh ===" << endl;
    tl.XUAT();

    return 0;
}
