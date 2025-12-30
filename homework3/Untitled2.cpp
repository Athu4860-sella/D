#include <iostream>
using namespace std;

int main() {
    double trongLuong;
    int khoangCach;
    double phiMoiDam = 0.0;
    double tongPhi;

    // Nhập dữ liệu
    cout << "Nhap trong luong goi hang (kg): ";
    cin >> trongLuong;

    cout << "Nhap khoang cach van chuyen (dam): ";
    cin >> khoangCach;

    // Kiểm tra dữ liệu hợp lệ
    if (trongLuong <= 0 || trongLuong > 20) {
        cout << "Loi: Trong luong khong hop le!" << endl;
        return 0;
    }

    if (khoangCach < 10 || khoangCach > 3000) {
        cout << "Loi: Khoang cach khong hop le!" << endl;
        return 0;
    }

    // Xác định phí theo trọng lượng (lớn → nhỏ)
    if (trongLuong > 10) {
        phiMoiDam = 4.80;
    }
    else if (trongLuong > 6) {
        phiMoiDam = 3.70;
    }
    else if (trongLuong > 2) {
        phiMoiDam = 2.20;
    }
    else {
        phiMoiDam = 1.10;
    }

    // Tính tổng phí
    tongPhi = khoangCach * phiMoiDam;

    // In kết quả
    cout << "Phi van chuyen: $" << tongPhi << endl;

    return 0;
}
