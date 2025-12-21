//9. Bao nhiêu Calories? 
//Một túi bánh có 30 chiếc bánh. Thông tin về calorie trên túi ghi rằng 10 khẩu phần 
//trong túi và một khẩu phần tương đương với 300 calories. Viết chương trình yêu cầu 
//người dùng nhập số lượng bánh mà họ đã ăn, sau đó in ra thông báo tổng số calories 
//đã tiêu thụ.

//phân tích đề bài:
// 1 túi :30 chiếc 
// 10 khẩu phần -> 1 khẩu phần = 300 calories;
// yêu cầu 
//- nhập sô lượng bánh dã ăn 
//- tổng số calories đã tiêu thụ 
// b1 : tính 1 khẩu phần ăn có bao nhiêu bánh => 30  : 10 =
//b2 : tính calories của 1 chiếc bánh =>  300 : 3 = /
// b3 : tính tổng số calories => sobanhan * /

#include <iostream>
using namespace std;
int main (){
	//b1 : khai báo biến
	double tuibanh = 30,
	       calories = 300 ,
		   khauphan = 10 ; 
	double sobanhan , khauphanan , tongsocalories , calories1chiec;
	
	//b2 tính toán 
	khauphanan = tuibanh / khauphan;
	calories1chiec = calories / khauphanan ;
	
	//nhập dữ liệu 
	cout << " so luong banh ho an la : ";
	cin>> sobanhan;
	
	//b3 : tổng số calories 
	tongsocalories = sobanhan * calories1chiec;
	cout << " Tong so calories la : " << tongsocalories << " calories " << endl;
}