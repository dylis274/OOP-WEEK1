#include <iostream>
using namespace std;

struct DATHUC {
    double a, b, c; //a, b, c là các hệ số của ax^2 + bx + c
};

void nhapDaThuc(DATHUC &dt) {
    cout << "Nhap da thuc: " << endl;
    cout << "Nhap a: "; cin >> dt.a;
    cout << "Nhap b: "; cin >> dt.b;
    cout << "Nhap c: "; cin >> dt.c;
}

void xuatDaThuc(DATHUC dt) {
    cout << dt.a << "x^2 + " << dt.b << "x + " << dt.c;
}

DATHUC tongDaThuc(DATHUC dt1, DATHUC dt2) {
    DATHUC ketQua;
    ketQua.a = dt1.a + dt2.a;
    ketQua.b = dt1.b + dt2.b;
    ketQua.c = dt1.c + dt2.c;
    return ketQua;
}

DATHUC hieuDaThuc(DATHUC dt1, DATHUC dt2) {
    DATHUC ketQua;
    ketQua.a = dt1.a - dt2.a;
    ketQua.b = dt1.b - dt2.b;
    ketQua.c = dt1.c - dt2.c;
    return ketQua;
}

void tichDaThuc(DATHUC dt1, DATHUC dt2) {
    double bac4 = dt1.a * dt2.a;
    double bac3 = dt1.a * dt2.b + dt1.b * dt2.a;
    double bac2 = dt1.a * dt2.c + dt1.b * dt2.b + dt1.c * dt2.a;
    double bac1 = dt1.b * dt2.c + dt1.c * dt2.b;
    double bac0 = dt1.c * dt2.c;

    cout << "Tich: " << bac4 << "x^4 + " << bac3 << "x^3 + " << bac2 << "x^2 + " << bac1 << "x + " << bac0 << endl;
}

double tinhF0(DATHUC dt) {
    return dt.c;
}

int main() {
    DATHUC dt1, dt2;

    nhapDaThuc(dt1);
    nhapDaThuc(dt2);

    cout << "\n-----------------------" << endl;
    cout << "Da thuc 1: " ;
    xuatDaThuc(dt1); 
    cout << endl;
    cout << "Da thuc 2: ";
    xuatDaThuc(dt2);
    cout << "\n-----------------------" << endl;

    DATHUC tong = tongDaThuc(dt1, dt2);
    cout << "Tong: "; xuatDaThuc(tong); 
    cout << endl;

    DATHUC hieu = hieuDaThuc(dt1, dt2);
    cout << "Hieu: "; 
    xuatDaThuc(hieu); 
    cout << endl;

    tichDaThuc(dt1, dt2);

    cout << "-----------------------" << endl;
    cout << "Gia tri F(0) cua dt1: " << tinhF0(dt1) << endl;
    cout << "Gia tri F(0) cua dt2: " << tinhF0(dt2);
    cout << "\n-----------------------" << endl;

    return 0;
}
