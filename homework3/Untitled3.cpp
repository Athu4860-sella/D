#include <iostream>
#include <string>
using namespace std;

int main() {
    // b1: khai báo biến
    string ten1, ten2, ten3;
    string ngay1, ngay2, ngay3;
    double cao1, cao2, cao3;

    // ===== Nhập VĐV 1 =====
    cout << "Nhap ten van dong vien 1: ";
    getline(cin, ten1);

    cout << "Nhap ngay thi dau: ";
    getline(cin, ngay1);

    cout << "Nhap chieu cao nhay (m): ";
    cin >> cao1;

    if (cao1 < 2.0 || cao1 > 5.0) {
        cout << "Loi: chieu cao khong hop le!";
        return 0;
    }

    cin.ignore(); // bỏ ký tự ENTER

    // ===== Nhập VĐV 2 =====
    cout << "\nNhap ten van dong vien 2: ";
    getline(cin, ten2);

    cout << "Nhap ngay thi dau: ";
    getline(cin, ngay2);

    cout << "Nhap chieu cao nhay (m): ";
    cin >> cao2;

    if (cao2 < 2.0 || cao2 > 5.0) {
        cout << "Loi: chieu cao khong hop le!";
        return 0;
    }

    cin.ignore();

    // ===== Nhập VĐV 3 =====
    cout << "\nNhap ten van dong vien 3: ";
    getline(cin, ten3);

    cout << "Nhap ngay thi dau: ";
    getline(cin, ngay3);

    cout << "Nhap chieu cao nhay (m): ";
    cin >> cao3;

    if (cao3 < 2.0 || cao3 > 5.0) {
        cout << "Loi: chieu cao khong hop le!";
        return 0;
    }

    // ===== Xếp hạng =====
    cout << "\n===== KET QUA XEP HANG =====\n";

    if (cao1 >= cao2 && cao1 >= cao3) {
        cout << "Hang 1: " << ten1 << " - " << cao1 << " m\n";

        if (cao2 >= cao3) {
            cout << "Hang 2: " << ten2 << " - " << cao2 << " m\n";
            cout << "Hang 3: " << ten3 << " - " << cao3 << " m\n";
        } else {
            cout << "Hang 2: " << ten3 << " - " << cao3 << " m\n";
            cout << "Hang 3: " << ten2 << " - " << cao2 << " m\n";
        }
    }
    else if (cao2 >= cao1 && cao2 >= cao3) {
        cout << "Hang 1: " << ten2 << " - " << cao2 << " m\n";

        if (cao1 >= cao3) {
            cout << "Hang 2: " << ten1 << " - " << cao1 << " m\n";
            cout << "Hang 3: " << ten3 << " - " << cao3 << " m\n";
        } else {
            cout << "Hang 2: " << ten3 << " - " << cao3 << " m\n";
            cout << "Hang 3: " << ten1 << " - " << cao1 << " m\n";
        }
    }
    else {
        cout << "Hang 1: " << ten3 << " - " << cao3 << " m\n";

        if (cao1 >= cao2) {
            cout << "Hang 2: " << ten1 << " - " << cao1 << " m\n";
            cout << "Hang 3: " << ten2 << " - " << cao2 << " m\n";
        } else {
            cout << "Hang 2: " << ten2 << " - " << cao2 << " m\n";
            cout << "Hang 3: " << ten1 << " - " << cao1 << " m\n";
        }
    }

    return 0;
}
