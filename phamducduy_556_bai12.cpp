#include <iostream>
#include <iomanip>

using namespace std;

class HINHCHUNHAT
{
private:
    float dai;
    float rong;
public:
    void nhap();
    void ve();
    float DIENTICH();
    float CHUVI();
};

void HINHCHUNHAT::nhap()
{
    cout<<"Nhap chieu dai: "; cin>>dai;
    cout<<"Nhap chieu rong: "; cin>>rong;
}

void HINHCHUNHAT::ve()
{
for (int i = 0; i < rong; i++) {
            for (int j = 0; j < dai; j++) {
                if (i == 0 || i == rong - 1 || j == 0 || j == dai - 1)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
}

float HINHCHUNHAT::DIENTICH()
{
    return dai*rong;
}
float HINHCHUNHAT::CHUVI()
{
    return (dai+rong)*2;
}


main()
{
    HINHCHUNHAT a;
    a.nhap();
    a.ve();
    cout<<"DIENTICH = "<<a.DIENTICH()<<endl;
    cout<<"CHUVI = "<<a.CHUVI()<<endl;
}
