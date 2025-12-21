//12. Celsius to Fahrenheit (Bắt buộc) 
//Viết một chương trình chuyển đổi giá trị giữa hai đơn vị đo nhiệt độ là Celsius và 
//Fahrenheit. Với công thức chuyển đổi là  
//F = 9/5 * c + 32 
//Trong đó F là nhiệt độ trong đơn vị Fahrenheit, và C là nhiệt độ trong đơn vị Celsius. 

// phhaan tchs đề bài :
// khai báo biến : C , F;

#include <iostream>
using namespace std;
int main (){
	//b1 : khai báo biến 
	double C , F ;
	
	//b2 : nhập dữ liệu 
	cout << " Nhap nhiet do la : ";
	cin >> C ;
	 
	//b3 : công thức phép tính 
	F = 9.0/5.0 * C + 32 ;
	cout << " Nhiet do trong don vi Fahrenheit la : " << F << endl;
	
	return 0;
	 
}