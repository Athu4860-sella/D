//5.Giá trị trung bình
//Để có được giá trị trung bình của một loạt các giá trị, bạn cộng các giá trị lại sau đó 
//chia cho tổng số các giá trị đếm được. Viết một chương trình để lưu trữ các giá trị 
//sau trong năm biến khác nhau: 28, 32, 37, 24, và 33. Chương trình trước hết phải 
//tính được tổng của năm biến và lưu kết quả vào trong một biệt sum riêng biệt. Sau 
//đó, chương trình lấy biến sum chia cho 5 để lấy được giá trị trung bình. Hiển thị nó 
//giá trị trung bình ra màn hình.

//phân tích bài toán :
// tính tổng của năm biến -> sau đó chia cho 5 => lưu vào 1 sum riêng biệt 
// ta lấy biến sum ( tổng rồi chia cho 5)
//in ra màn hình 

#include <iostream>
using namespace std;
int main(){
	//b1 : khai báo biến 
	double sum , trungbinh ;
	double so1 = 28 ,
	       so2 = 32 ,
		   so3 = 37 ,
		   so4 = 24 ,
		   so5 = 33 ;
	//b2 : tính tổng của năm biến 
	sum = so1 + so2 + so3 + so4 + so5 ;
	
	//b3 : lấy biến sum chia chi 5 để ra kết quả trung bình 
	trungbinh = sum / 5 ;
	cout << " Tong cua nam bien la : " << sum << endl ;
	cout << " Gia tri trung binh la : " << trungbinh << endl;
	
	return 0;
}

	