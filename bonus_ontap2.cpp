/*
Bài 1: Xây dựng lớp sinh viên với các thuộc tính: mã sinh viên (kiểu nguyên), họ và tên sinh viên(
kiểu mảng ký tự), lớp (kiểu mảng ký tự).
Phương thức khởi tạo: có đối/không đối để khởi gán các giá trị của các thuộc tính nêu trên.
Hàm toán tử nhập/xuất thông tin sinh viên.
Phương thức toán tử trả về giá trị true nếu hai sinh viên cùng họ và tên, cùng mã sinh viên
ngược lại trả về false.
Phương thức toán tử trả về giá trị true nếu 1 sinh viên vừa có mã sinh viên là “2025123456” và
vừa có họ tên là “nguyen lan”, ngược lại trả về false.
Hàm main () sử dụng các phương thức/toán tử ở trên để nhập thông tin của hai sinh viên. Và
cho biết có sinh viên cùng họ và tên, cùng mã sinh viên hay không?. Có sinh viên nào là “nguyen
lan” và mã sinh viên là “2025123456” hay không? Mọi kết quả in ra màn hình và lưu vào tệp.
*/

// 8H40
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;


class SV
{
private:
    int msv;
    char ten[50];
    char lop[50];
public:
    SV();
    SV(int m, char t[50], char l[50]);
friend istream& operator>>(istream& in, SV &a);
friend ostream& operator<<(ostream& out, SV &a);
friend bool operator==(SV a, SV b);
bool operator!();
};
SV::SV()
{
    msv = 0;
    strcpy(ten, "Khong ten");
    strcpy(lop, "Khong lop");
}
SV::SV(int m, char t[50], char l[50])
{
    msv = m;
    strcpy(ten, t);
    strcpy(lop, l);
}

istream& operator>>(istream& in, SV &a)
{
    cout <<"nhap msv: ";
    in >> a.msv;
    cout <<"nhap ten: ";
    in >> a.ten;
    cout <<"nhap lop: ";
    in >> a.lop;
    return in;
}

ostream& operator<<(ostream& out, SV &a)
{
    out<<"MSV: "<<a.msv;
    out<<"\nTEN: "<<a.ten;
    out<<"\nLOP: "<<a.lop;

    return out;
}

bool operator==(SV a, SV b)
{
    if ((strcmp(a.ten, b.ten) == 0)  && a.msv == b.msv) return true;
    return false;
}

bool SV::operator!()
{
    if ((strcmp(ten, "nguyen lan") == 0)  && msv == 2025123456 ) return true;
    return false;


}

main()
{
    ofstream fout("kq.txt");
    SV a;
    SV b(1,"Duy","1");
    cin>>a;
    cout<<a;
    fout<<a;
    if(a==b)
    {
        cout<<"\nSAME";
        fout<<"\nSAME";
    }
    else
    {
        cout<<"\nDIFFERENT";
        fout<<"\nDIFFERENT";
    }
    cout<<"\n\n==============\n\n";
    fout<<"\n\n==============\n\n";
    if(!a)
    {
        cout<<"CHINH LA CO TA";
        fout<<"CHINH LA CO TA";
    }
    else
    {
        cout<<"KHONG PHAI LANNN!!!";
        fout<<"CHINH LA CO TA";
    }
    fout.close();
}

