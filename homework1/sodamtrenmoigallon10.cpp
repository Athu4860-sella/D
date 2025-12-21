//10. Số dặm trên mỗi gallon 
//Một chiếc xe ô tô có thể chứa được 15 gallon xăng và có thể di chuyển được 375 
//dặm trước khi cần nạp lại. Viết chương trình tính toán số dặm trên mỗi gallon mà xe 
//có thể đi được. Hiển thị nó ra màn hình. 

 // phân tich bài toán
 // 1 chiếc ô tô chứa  : 15 gallon xăng
 // di chuyển : 375 dặm ( truóc khi nạp )
 // viết chương trình -> tính toán : số dặm mỗi gallon mà xe đi đc 
 
// cách tính :
// khai bao biến : sodam ,  otochua, dichuyen ;
// sodam = dichuyen / otochua;

#include <iostream>
using namespace std;
int main (){
	//b1 : khai báo biến 
	float otochua = 15 , 
	      dichuyen = 375 ;
	float sodam ;
	//b2 : tính toán
	sodam = dichuyen / otochua;
	
	cout << " So dam moi gallon ma xe di duoc la :" << sodam << endl;
	
	return 0 ;
	
	
}