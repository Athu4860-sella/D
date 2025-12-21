//15. Thuế bất động sản 
//Một quận thu thuế bất động sản trên giá trị đánh giá của tài sản, bằng 60 phần trăm 
//giá trị thực của tài sản. Nếu một mẫu đất được định giá là 10.000 đô la, thì giá trị 
//đánh giá của nó là 6.000 đô la. Thuế tài sản sau đó là 75 ¢ cho mỗi $ 100 của giá trị 
//đánh giá. Thuế cho diện tích được đánh giá là $ 6.000 sẽ là $ 45. Viết chương trình 
//yêu cầu nhập giá trị thực của một phần tài sản, sau đó hiển thị giá trị đánh giá và 
//thuế tài sản. 
//(1 đô la = 100 cent)


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double giaTriThuc;
    double giaTriDanhGia;
    double thueTaiSan;

    // Nhập giá trị thực
    cout << "Nhap gia tri thuc cua bat dong san ($): ";
    cin >> giaTriThuc;

    // Tính giá trị đánh giá (60%)
    giaTriDanhGia = giaTriThuc * 0.60;

    // Tính thuế tài sản
    thueTaiSan = (giaTriDanhGia / 100) * 0.75;

    // Hiển thị kết quả
    cout << fixed << setprecision(2);
    cout << "\nGia tri danh gia: $" << giaTriDanhGia << endl;
    cout << "Thue bat dong san: $" << thueTaiSan << endl;

    return 0;
}
