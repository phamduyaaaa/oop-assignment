#include <iostream>
#include <iomanip>

using namespace std;


class SINHVIEN
{
private:
    char Masv[50];
    char Hoten[50];
    float DiemToan;
    float DiemLy;
    float DiemHoa;
public:
    void NHAP();
    void XUAT();
friend float sapxep(SINHVIEN sv[100], int n);
};

void SINHVIEN::NHAP()
{
    cout<<"\nNhap MSV: "; fflush(stdin);gets(Masv);
    cout<<"\nNhap Ho ten: "; fflush(stdin);gets(Hoten);
    cout<<"\nNhap diem toan: ";     cin>>DiemToan;
    cout<<"\nNhap diem ly: ";     cin>>DiemLy;
    cout<<"\nNhap diem hoa:";     cin>>DiemHoa;

}

float sapxep(SINHVIEN m[100], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(m[i].DiemToan + m[i].DiemLy + m[i].DiemHoa > m[j].DiemToan + m[j].DiemLy + m[j].DiemHoa)
            {
                SINHVIEN temp = m[i];
                m[i] = m[j];
                m[j] = temp;
            }
        }
    }
}

void SINHVIEN::XUAT()
{
    cout << setw(15) << Masv
         << setw(20) << Hoten
         << setw(10) << DiemToan
         << setw(10) << DiemLy
         << setw(10) << DiemHoa
         << setw(10) << DiemToan + DiemLy + DiemHoa
         << endl;
}




main()
{
    cout<<"Nhap so luong sinh vien 'n': "<<endl;
    int n; cin>>n;
    SINHVIEN m[100];
    for(int i = 0; i<n; i++)
    {
        cout<<"Nhap diem so sinh vien "<<i+1<<endl;
        m[i].NHAP();
    }
    cout<<"===TRUOC KHI SAP XEP==="<<endl;
    cout << setw(15) << "Masv"
     << setw(20) << "Hoten"
     << setw(10) << "DiemToan"
     << setw(10) << "DiemLy"
     << setw(10) << "DiemHoa"
     << setw(10) << "Tong diem"
     << endl;
    for(int i = 0; i<n; i++)
    {
        m[i].XUAT();
    }
    cout<<"===SAU KHI SAP XEP==="<<endl;
    cout << setw(15) << "Masv"
     << setw(20) << "Hoten"
     << setw(10) << "DiemToan"
     << setw(10) << "DiemLy"
     << setw(10) << "DiemHoa"
     << setw(10) << "Tong diem"
     << endl;
    sapxep(m, n);
    for(int i = 0; i<n; i++)
    {
        m[i].XUAT();
    }

}
