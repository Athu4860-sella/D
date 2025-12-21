//6.Thanh toán hàng năm 
//Giả sử một nhân viên được trả lương hai tuần một lần và kiếm được 2.200 đô là mỗi 
//kỳ lương. Trong một năm, nhân viên được trả 26 lần. Viết chương trình định nghĩa 
//các biến sau đây:  
//Chương trình tính toán tổng thanh toán hàng năm cho nhân viên bằng cách nhân số 
//tiền thanh toán mỗi lần với số kỳ lương được nhận trong một năm và lưu kết quả vào 
//trong biến annualPay. Hiển thị tổng annualPay ra màn hình.

//khai báo biến : tongtienthanhtoan , sokynhandduoc , annualPay ;
// nhân viên đc trả : 2200 đô kì lương <=> ( 2 tuần 1 lần )
// 1 năm : 26 lần trả
// tính tổng cả năm 
// phép tính : annualPay = sotienduoctra * sokynhandduoc;
// in ra màn hình

#include <iostream>
using namespace std ;
int main (){
	// b1 : khai báo biến 
	float  annualPay ;
	float sotienduoctra = 2200 ,
	      sokynhandduoc = 26 ;
    
    // b2 : tính tổng annualPay
    annualPay = sotienduoctra * sokynhandduoc ;
    
    cout << " tong annualpay la : " << annualPay << endl;
    
    return 0 ;
	
}

