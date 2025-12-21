//Khoản thanh toán hàng tháng cho một khoản vay có thể được tính theo công thức 
//sau: 
//Payment = Rate*(1+Rate)^N /(1+Rate) ^ N - 1 ) * L 
//Trong đó, Rate là lãi suất hàng tháng, được tính bằng lãi suất hàng năm chia cho 12. 
//(12% lãi suất hàng năm sẽ là 1% lãi suất hàng tháng.) N là số lần thanh toán và L là 
//số tiền của khoản vay. 
//Hãy viết một chương trình yêu cầu nhập vào các giá trị này và hiển thị báo cáo dưới 
//dạng tương tự như sau:
//Loan Amount: $10,000.00
//Monthly Interest Rate: 1%
//Number of Payments: 36
//Monthly Payment: $332.14
//Amount Paid Back: $11,957.15
//Interest Paid: $1,957.15

// phân tích đề bài :
// Payment = Rate*(1+Rate)^N /(1+Rate) ^ N - 1 ) * L 
// sự chi trả
// Rate : lãi suất hàng tháng -> tính bằng lãi suất hàng năm / 12 (12% lãi suất hàng năm -> là 1% lãi suất hàng tháng.)
// N : số lần thanh toán
// L : số tiền của khoản vay. 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main (){
	//b1: khai báo biến 
	double Rate , L, Payment , AmountPaidBack  , InterestPaid  ;
	int N;
	// b2 : nhập dữ liệu 
	cout << " Nhap lai suat hang nam : ";
	cin >> Rate;
	
	cout << " Nhap so lan thanh toan : ";
	cin >> N;
	
	cout << " Nhap so tien cua khoan vay : ";
	cin >> L;
	
	// b3 : công thức phép toán 
	// lãi suất hàng tháng 
	Rate = Rate / 100 / 12 ; // chia 100 để có số thập phân 
	// tính tiền trả mỗi tháng 
	Payment = (Rate * pow( 1 + Rate, N)) / (pow(1 + Rate, N ) - 1 ) * L ;
	
	// tính tổng tiền phải trả ta lấy sô tiền phải chi trả nhân cho số lần chi trả 
	AmountPaidBack = Payment * N;
	
	// tinh tiền lãi đã trả -> số tiền đã trả - sô tiền lãi ==> tổng tiền lãi
	InterestPaid = AmountPaidBack - L;
	
	cout << fixed << setprecision(2);
	cout << " \n Loan Amount : " << L << endl; // chia cho 12 tháng -> lãi suất trong 12 tháng  
	cout << " Monthly Interest Rate : " << Rate << endl;
	cout << " Number of Payments : " << N << endl;
	cout << " Monthly Payment : " << Payment << endl;
	cout << " Amount Paid Back : " << AmountPaidBack << endl;
	cout << " Interest Paid : " << InterestPaid << endl;
	
	
	return 0;
	
}