//6.Khối lượng và Trọng lượng
//Viết chương trình nhập vào cân nặng của đồ vật và
//in ra trọng lượng của nó. Nếu trọng lượng đạt trên 100 thì
//thông báo vật quá weight, nếu trọng lượng nhỏ hơn 10 thì thông báo
//báo vật quá nhẹ. Biết trọng lượng của 1 vật được tính
//bằng công thức lấy khối lượng (kg) nhân với 9.8.

// phân tích đề bài 

//viết -> nhập -> cân nặng
//             ->in ra trọng lượng 

//nếu trọng luọng : > 100 -> thông báo -> quá nặng 
//                  < 10 -> thông báo -> quá nhẹ 

// công thức : trọng lượng 1 vật -> khối lượng * 9.8 ;

#include <iostream>
using namespace std;
int main (){
	//b1 : khai báo biến 
	double cannang , khoiluong , trongluong ;
	
	//b2 : nhập dữ liệu
	cout << " Nhap khoi luong : ";
    cin >> khoiluong;
    
   //b3 : tính toán công thức 
   trongluong = khoiluong * 9.8 ;
   
   //b4 : kiểm tra dữ liệu 
   if( trongluong > 100 ){
   	cout << " Trong luong 1 vat : " << trongluong << endl;
   	cout << " Trong luong (kg) : qua nang ";
   	
   }
   else if ( trongluong < 10 ){
   	cout << " Trong luong 1 vat : " << trongluong << endl;
   	cout << " Trong luong (kg): qua nhe ";
   }
   
   return 0;
   
}