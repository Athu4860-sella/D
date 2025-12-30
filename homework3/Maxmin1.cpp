//1. Tìm Max/Min (Bắt buộc)
//Viết chương trình yêu cầu người dùng nhập vào hai số, sử dụng toán tử điều kiện (toán
//tử ? :) để in ra số lớn hơn và số nhỏ hơn trong 2 số

// phân tích đề bài 
// yều cầu -> nhập vào 2 số -> số lớn hơn -> max
//                          -> số nhỏ hơn -> min 
// dùng toán tử điều kiện ( ? -> là điều kiện đúng ; : -> là đk sai ) 
// => việc sử dụng toán tư nó tương tự với :
//int max;
//if (a > b)
//    max = a;
//else
//    max = b;


#include <iostream>
using namespace std;
int main (){
	// b1 : khai báo biến 
	int a , b ;

	// b2 : nhập dữ liệu
	cout << " Nhap so lon : ";
	cin >> a;
	
	cout << " Nhap so be : ";
	cin >> b;
	
	//b3 : thực hiện điều kiện 
	int max = ( a > b ) ? a : b ;
	int min = ( a < b ) ? a : b ;
	
	// b4 : in ra kết quả 
	
	cout << " So lon la : " << max << endl;
	cout << " So be la : " << min << endl;
	
	return 0;
	
}