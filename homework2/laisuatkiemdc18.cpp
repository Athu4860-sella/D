//Giả sử không có khoản tiền gửi nào ngoài khoản đầu tư ban đầu, số dư trong tài 
//khoản tiết kiệm sau một năm có thể được tính theo công thức 
//Trong đó, Principal là số dư trong tài khoản tiết kiệm, Rate là lãi suất, và T là số lần 
//tính lãi gộp trong một năm (T là 4 nếu lãi gộp hàng quý). 
//Viết một chương trình yêu cầu tiền gốc, lãi suất và số lần lãi gộp. Nó sẽ hiển thị một 
//báo cáo tương tự như:
//	Amount = Principal*(1 + (Rate / T))^T
//Interest Rate: 4.25%
//Times Compounded: 12
//Principal: $ 1000.00
//Interest: $ 43.34
//Amount in Savings: $ 1043.34

// phân tích bài toán 
// 	Amount = Principal*(1 + (Rate / T))^T 
// -> Amount : số tiền sao khi gộp 
//-> Principal : số dư trong tài khoản tiết kiệm
// -> Rate : lãi suất 
// -> T : số lần tính lãi gộp trong một năm (T là 4 nếu lãi gộp hàng quý)

// cách làm: 
// viết -> yêu cầu -> tiền gốc 
//                 -> lãi suất
//                 -> số lần lãi gộp

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
	//b1 : khai báo biến 
	double amount , Principal , Rate , interest ;
	int T;
	
	//b2: nhập dữ liệu
	cout << " Nhap so du trong tai khoan tiet kiem : ";
	cin >> Principal;
	
	cout << " Nhap lai suat (%) : ";
	cin >> Rate;
	
	cout << " Nhap so lan tinh lai : ";
	cin >> T;
    // chuyển % sang số thập phân
    Rate = Rate / 100;
	//b3 : Công thức tính lãi gộp
	amount = Principal * pow (1 + Rate / T, T) ;
	
	// tính tiền lãi 
	interest = amount - Principal;
	
	cout << fixed << setprecision(2);
	cout << " \n Interest Rate : " << Rate * 100 << endl;
	cout << " Times Compounded : " << T << endl;
	cout << " Principal : " << Principal << endl;
	cout << " Interest : " << interest << endl;
	cout << " Amount in Savings : " << amount << endl;
	 
	 return 0;
	 
}