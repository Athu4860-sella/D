//7. Tính giờ (Bắt buộc)
//Viết chương trình yêu cầu người dùng nhập vào số giây. Sau đó in ra khoảng thời gian
//đó là mấy ngày, giờ, phút, giây.
//Chú ý:
//− Nếu số ngày bằng không thì không cần in ra số ngày
//− Nếu số giờ bằng không thì không cần in ra số giờ
//− Nếu số phút bằng không thì không cần in ra số phút
//− Nếu số giây bằng không thì không cần in ra số giây

// phân tích đề bài
// yêu cầu -> nhập số giây => in ra thời gian : ngày , phút , giây , giờ 
// tất cả những thời gian trên = o thì ko cần in ra

// đổi ra giây :
// 1 giờ = 3600 giây 
// 1 phút = 60 giây
// 1 ngày = 24 giờ -> 86400 giây 


// cách tinh chi tiết 
// vd thôi
// Bước 1: Tính ngày
//1 ngày = 86400 giây
//90061 / 86400 = 1 ngày
//90061 % 86400 = 3661 giây (còn lại)
//Bước 2: Tính giờ
//1 giờ = 3600 giây
//3661 / 3600 = 1 giờ
//3661 % 3600 = 61 giây
//Bước 3: Tính phút
//1 phút = 60 giây
//61 / 60 = 1 phút
//61 % 60 = 1 giây
//Kết quả cuối:
//1 ngay 1 gio 1 phut 1 giay

#include <iostream>
using namespace std;
int main (){
	//b1 : khai báo biến 
	double ngay , phut , giay , gio   ;
	long long tonggiay; // long long dùng để lưu số NGUYÊN rất lớn.
	
	
	// b2 : Nhập dữ liệu 
	cout << " Nhap tong so giay : ";
	cin >> tonggiay ;
	
	// b3 : tính toán 
	
	// tính ngày 
	ngay = tonggiay/86400;
	tonggiay %= 86400; // Chia (/) để lấy đơn vị, chia dư (%) để bỏ phần đã dùng và tính tiếp.
	
	// tính giờ 
	gio = tonggiay/3600;
	tonggiay %= 3600;
	
	//tính phút 
	phut = tonggiay/60;
	giay = tonggiay % 60;
	
	// xét điều kiện
	if (ngay > 0){
		cout << " So ngay " << ngay << endl;
	}
	
	if (phut > 0){
		cout << " So phut " << phut << endl;
	}
	
	if (gio > 0){
		cout << " So gio " << gio << endl;
	}
	
	if (giay > 0){
		cout << " So giay " << giay << endl;
	}
	
	return 0;
}