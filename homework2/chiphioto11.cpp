//11. Chi phí ô tô (Bắt buộc) 
//Viết một chương trình yêu cầu người dùng nhập chi phí hàng tháng cho các chi phí 
//sau đây phát sinh từ việc vận hành ô tô của họ: thanh toán khoản vay, bảo hiểm, 
//xăng, dầu, lốp và bảo dưỡng. Sau đó, chương trình sẽ hiển thị tổng chi phí hàng 
//tháng của các chi phí này và tổng chi phí hàng năm của các chi phí này.

// phân tích đè bài :
// yêu cầu :
// nhập chi phi hàng tháng :
// -thanh toán khoản vay
// -  bảo hiểm
//- xăng 
// - dầu 
// - lốp
// - bảo dưỡng

// cách làm :
// hiển thị chi phí : tổng chi phí hàng tháng
//                   tổng chi phí hàng năm * 12tháng ( 1 năm = 12 tháng )

#include <iostream>
using namespace std;
int main (){
	//b1 : khai bao biến
	double thanhtoan , baohiem , xang , dau , lop , baoduong ;
	double tongchiphithang, tongchiphinam ;
	
	//b2 : nhập dữ liệu 
	cout << " nhap chi phi thanh toan khoan vay la : ";
	cin >> thanhtoan;
	
	cout << " nhap chi phi bao hiem la : ";
	cin >> baohiem;
	
	cout << " nhap chi phi xang la : ";
	cin >> xang ;
	
	cout << " nhap chi phi dau la : ";
	cin >> dau;
	
	cout << " nhap chi phi lop la : ";
	cin >> lop ;
	
	cout << " nhap chi phi bao duong la :  ";
	cin >> baoduong;
	
	//b3 : tính toan
	tongchiphithang = thanhtoan + baohiem  + xang + dau + lop + baoduong ;
	tongchiphinam = tongchiphithang * 12 ;
	
	cout << " Tong chi phi hang thang la : " << tongchiphithang << endl;
	cout << " Tong chi phi hang nam la : " << tongchiphinam << endl;
	
	return 0;
} 