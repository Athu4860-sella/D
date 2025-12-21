//13. Currency 
//Viết chương trình chuyển đổi giá trị của U.S. dollar sang Japanese yen và euros, lưu 
//trữ hệ số chuyển đổi trong các hằng số YEN_PER_DOLLAR và 
//EUROS_PER_DOLLAR. Để có được tỉ lệ chuyển đổi được cập nhật, hãy tìm trên 
//Internet với từ khóa “currency exchange rate”. Nếu bạn không thể tìm được tỉ lệ 
//chuyển đổi trong thời gian gần đây nhất thì có thể sử dụng tỉ lệ sau: 
//− 1 Dollar = 98.93 Yen 
//− 1 Dollar = 0.74 Euros 
//Hãy định dạng kết quả ở dạng kí hiệu fixed-point, với độ chính xác 2 số đằng sau 
//dấu phẩy, và luôn để dấu phẩy thập phân được hiển thị.

//phân tích đề bài 
// viết -> chương trình -> chuyển dổi từ U.S dollar -> Japanese yen
//                                                  -> euros
// chuyển đổi các hằng số -> YEN_PER_DOLLAR : 98.93 Yen 
//                        -> EUROS_PER_DOLLAR : 0.74 Euros
// hiển thị định dạng : - kí hiệu fixed-point
//                      - độ chính xác 2 số đằng sau dấu phẩy
//                      - luôn để dấu phẩy thập phân 

//cach làm :
// khai báo bién : dollar , YEN_PER_DOLLAR  ,EUROS_PER_DOLLAR ,yen , euros ;
// tính toán :
//  yen = dollar * YEN_PER_DOLLAR ;
// euros = dollar * EUROS_PER_DOLLAR;

#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	//b1 : khai báo biến 
	double dollar , yen , euros ;
	double YEN_PER_DOLLAR = 98.93 ,
	       EUROS_PER_DOLLAR = 0.74 ;
	       
	//b2 : nhập dữ liệu
	cout << " Nhap so tien la (USD) : " ;
	cin >> dollar ;
	

	// b3 : tính toán 
	yen = dollar * YEN_PER_DOLLAR ;
	euros = dollar * EUROS_PER_DOLLAR;
	
	cout << fixed << setprecision(2) << showpoint ;
	cout << " So tien yen : " << yen << endl;
	cout << " So tien euros : " << euros << endl;
	
	return 0;
}