#include <iostream>
#include <iomanip>
using namespace std;

struct TIME {
    int h, m, s;
};

void nhap (TIME &t) {
    do {
        cout << "Nhap gio (0-23): "; cin >> t.h;
        cout << "Nhap phut (0-59): "; cin >> t.m;
        cout << "Nhap giay (0-59): "; cin >> t.s;
        
        if (t.h < 0 || t.h > 23 || t.m < 0 || t.m > 59 || t.s < 0 || t.s > 59) {
            cout << "Thoi gian khong hop le! Vui long nhap lai.\n";
        }
    } while (t.h < 0 || t.h > 23 || t.m < 0 || t.m > 59 || t.s < 0 || t.s > 59);
}

void xuatThoiGian(TIME t) {
    cout << setfill('0') << setw(2) << t.h << ":" 
         << setfill('0') << setw(2) << t.m << ":" 
         << setfill('0') << setw(2) << t.s;
}

TIME xuLy(TIME t, int gio, int phut, int giay) {
    TIME ketQua = t;

    ketQua.s += giay;
    
    if (ketQua.s >= 60) {
        int phutNho = ketQua.s / 60;
        ketQua.s = ketQua.s & 60;
        ketQua.m += phutNho;
    }

    ketQua.m += phut;

    if (ketQua.m >= 60) {
        int gioNho = ketQua.m / 60; 
        ketQua.m = ketQua.m % 60;
        ketQua.h += gioNho;
    }

    ketQua.h += gio; 
    
    if (ketQua.h >= 24) {
        ketQua.h = ketQua.h % 24; 
    }

    return ketQua;
}

int main() {
    TIME hienTai;
    int h, m, s;

    cout << "Nhap thoi gian hien tai: " << endl;
    nhap(hienTai);

    cout << "\nNhap thoi gian can cong them: " << endl;
    cout << "So gio: "; cin >> h;
    cout << "So phut: "; cin >> m;
    cout << "So giay: "; cin >> s;

    TIME ketQua = xuLy(hienTai, h, m, s);

    cout << "------------------------------" << endl;
    cout << "Thoi gian ban dau: "; xuatThoiGian(hienTai); cout << endl;
    cout << "Cong them: " << setfill('0') << setw(2) << h << ":" << setfill('0') << setw(2) << m << ":" << setfill('0') << setw(2) << s << endl;
    cout << "Ket qua: "; xuatThoiGian(ketQua);
    cout << "\n------------------------------" << endl;

    return 0;
}
