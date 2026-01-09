#include <iostream>
using namespace std;

int nhapNgayHienTai() {
    int n = 0;
    do {
        cout << "Hay nhap ngay hien tai (2 -> 7 la thu 2-7, 8 la Chu Nhat): ";
        cin >> n;

        if (n < 2 || n > 8) {
            cout << "Ngay khong hop le! Xin moi nhap lai." << endl;
        }
    } while (n < 2 || n > 8);
    
    return n; 
}

int xuLy(int ngayHienTai, int x) {
    int buocNhay = x % 7;
    int ketQua = ngayHienTai + buocNhay;

    if (ketQua > 8) {
        ketQua = ketQua - 7;
    }
    
    return ketQua;
}

void hienThiKetQua(int ketQua) {
    cout << "-------------------" << endl;
    cout << "Ket qua la: ";
    if (ketQua == 8) {
        cout << "Chu Nhat";
    } else {
        cout << "Thu " << ketQua;
    }
    cout << endl;
}

int main() {
    int ngayHienTai = nhapNgayHienTai(); 
    
    int x = 0;
    cout << "Nhap so ngay can cong them: ";
    cin >> x;

    int ketQua = xuLy(ngayHienTai, x); 

    hienThiKetQua(ketQua); 

    return 0;
} 
