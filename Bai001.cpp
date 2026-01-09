#include <iostream>
using namespace std;


int main() {
    double a = 0, b = 0;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Ban vua nhap a = " << a << ", b = " << b << endl;

    int cs = 0;
    
    do {
        cout << "----------------------------" << endl;
        cout << "Danh sach cac phep tinh: " << endl;
        cout << "1. Phep cong" << endl;
        cout << "2. Phep tru" << endl;
        cout << "3. Phep nhan" << endl;
        cout << "4. Phep chia" << endl;
        cout << "0. Thoat chuong trinh" << endl;
        cout << "----------------------------" << endl;

        cout << "Hay chon phep tinh ban muon (Nhap 1 -> 4): ";
        cin >> cs;

        switch (cs) {
            case 1:
                cout << "Ket qua: " << a << " + " << b << " = " << a + b << endl;
                break;
            case 2:
                cout << "Ket qua: " << a << " - " << b << " = " << a - b << endl;
                break;
            case 3:
                cout << "Ket qua: " << a << " * " << b << " = " << a * b << endl;
                break;
            case 4:
                if (b == 0) {
                    cout << "Loi: Khong the chia cho 0!" << endl;
                } else {
                    cout << "Ket qua: " << a << " / " << b << " = " << a / b << endl;
                }
                break;
            case 0:
                cout << "Chuong trinh da thoat!" << endl;
                break;
            default:
                cout << "Khong hop le! Xin moi nhap lai." << endl;
        }
    } while (cs != 0);

    return 0;
}
