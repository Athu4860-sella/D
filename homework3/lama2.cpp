//2. Chuyển đổi số La Mã
//Viết chương trình yêu cầu người dùng nhập vào một số tự nhiên trong khoảng từ 1 đến
//10, sử dụng câu lệnh switch để in ra dạng số La Mã tương ứng của số đó.
//Chú ý: kiểm tra đầu vào, không chấp nhận các số nhỏ hơn 1 hoặc lớn hơn 10.

//phân tích đề bài 
// yều cầu nhập -> số tự nhiên ( 1->10)
//              -> sử dụng lệnh sưitch -> để in ra số la mã 
// ko đc : < 1 
//         > 10 

#include <iostream>
using namespace std ;
int main (){
	// b1 : khai báo biên 
	int n ;
	
	//b2 : nhập dữ liệu
	cout << " Nhap so tu nhien : ";
	cin >> n;
	
	// b3 : thực hiện lệnh 
	if( n < 1 || n > 10 ){
		cout << " khong hop le ! vui long nhap so 1 -> 10 ! ";
	} 
	else {
		switch (n){
			case 1:
				cout << " So la ma : I ";
				break;
			case 2:
				cout << " So la ma : II ";
				break;	
			case 3:
				cout << " So la ma : III ";
				break;	
			case 4:
				cout << " So la ma : IV ";
				break;	
			case 5:
				cout << " So la ma : V ";
				break;
			case 6:
				cout << " So la ma : VI ";
				break;	
			case 7:
				cout << " So la ma : VII ";
				break;	
			case 8:
				cout << " So la ma : VIII ";
				break;	
			case 9:
				cout << " So la ma : IX ";
				break;	
			case 10:
				cout << " So la ma : X ";
				break;	
							
				
		}
	}
	return 0;
	
}