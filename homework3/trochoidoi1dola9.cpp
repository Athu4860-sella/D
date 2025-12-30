//9. Trò chơi đổi 1 Đô la
//Viết chương trình yêu cầu người người dùng nhập 4 số tương ứng số cent (1 đô la bằng
//100 cent), nickel (bằng 5 cent), dime (bằng 10 cent), quarter (bằng 35 cent) để khi cộng
//lại thì được 1 đô la. Nếu cộng lại vừa đúng 1 đô la thì thông báo người chơi thắng, nếu
//không phải thì thông báo kết quả lớn hơn hay nhỏ hơn 1 đô la

// phân tích đề bài

//yêu câu -> nhập 4 số -> cent (1 đô la = 100 cent)
//                     -> quarter (= 35 cent)
//                     -> nickel (= 5 cent)
//                     -> dime (= 10 cent)
// công lại -> 1 đô la

// Nếu + lại vừa đúng 1 đô la -> thông báo -> thắng 
//       ko phải -> thông báo kết quả >
//                                    < | <=> 1 đô la 

#include <iostream>
using namespace std;
int main(){
	//b1: khai báo biến 
	int cent , quarter , nickel , dime ;
	double tong ;
	
	// b2 : nhập dữ liệu 
	cout << " Nhap so cent : ";
	cin >> cent;
	
	cout << " Nhap so quarter : ";
	cin >> quarter;
	
	cout << " Nhap so nickel : ";
	cin >> nickel;
	
	cout << " Nhap so dime : ";
	cin >> dime;
	
	//b3 : tính toán phép tính 
	tong = cent * 1 + quarter * 35 + nickel * 5 + dime * 10 ;
	
	//b4: xác định điều kiện
	if ( tong == 100 ) {
		cout << " Chuc mung ban la nguoi may man duoc thuong 1 do la ";
	}
	
	else if( tong > 100 ){
		cout << " Tong tien lon hon 1 do la ";
	}
	
	else {
		cout << " Tong tien nho hon 1 do la ";
	}
	
	return 0;
}