//4. Diện tích hình chữ nhật
//Viết chương trình yêu cầu người dùng nhập chiều dài và rộng của 2 hình chữ nhật. sau
//đó cho biết hình nào có diện tích lớn hơn, nếu bằng nhau thì thông báo bằng nhau

// phân tích đè bài 

// yêu cầu -> nhập : chiều dài 
//                 : chiều rộng <==>  2 hình chữ nhật => cho biết hình nào -> diện tích lớn 
//                                                                         -> nếu = thì thông báo
//tính : tính diện tích                                                                        


#include <iostream>
using namespace std;
int main (){
	//b1 : khai báo biến 
	double cdai1 , crong1 , cdai2 , crong2 ,dt1 , dt2 ;
	
	// b2: nhập dữ liệu 
	cout << " Nhap chieu dai 1 HCN : ";
	cin  >> cdai1;
	
	cout << " Nhap chieu dai 2 HCN : ";
	cin  >> cdai2;
	
	cout << " Nhap chieu rong 1 HCN : ";
	cin  >> crong1;
	
	cout << " Nhap chieu rong 2 HCN : ";
	cin  >> crong2;
	
	//b3 :tính diện tích
	dt1 = cdai1 * crong1;
	
	dt2 = cdai2 * crong2;
	
	//b4 : so sánh diện tích
	if ( dt1 > dt2 ){
		cout << " Dien tich thu nhat lon hon dien tich thu hai ";
	} 
	else if ( dt1 < dt2 ){
		cout << " Dien tich thu hai lon hon dien tich thu nhat ";
	}
	else {
		cout << " Hai HCN bang nhau ";
	}
	return 0;
}