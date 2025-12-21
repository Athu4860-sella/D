//8. Có bao nhiêu vật dụng? 
//Công ty Yukon Widget sản xuất các vật dụng nặng 12,5 pound mỗi vật. Viết chương 
//trình tính toán có bao nhiêu vật dụng được xếp trên một tấm bảng pallet, dựa trên 
//tổng trọng lượng của pallet. Chương trình sẽ hỏi người dùng xem pallet nặng bao 
//nhiêu và trọng lượng của pallet với các vật dụng được xếp chồng lên nhau. Sau đó, 
//nó sẽ tính toán và hiển thị số lượng vật dụng được xếp chồng lên nhau trên pallet. 

// phân tích bài toán :
// vận dụng nặng :12,5 pound mỗi vật
// có : -> một tấm bảng pallet 
//      -> pallet + vật dụng đc xếp chồng 

// cần làm :
//- pallet nặng ?
//- trọng lượng pallet với các vât dụng đc xếp chông ?
// hiện thị số lượng vật dụng đc xếp chồng

//cách tính :
// khai báo biến : trongluongvatdung , palletcohang , palletrong , soluongvatdung ;
// trongluongvatdung = palletcohang - palletrong ;
// soluongvatdung = trongluongvatdung / 12.5;

#include <iostream>
using namespace std;
int main (){
	//b1 : khai báo biến 
	double trongluongvatdung , palletcohang , palletrong , soluongvatdung ;
	
	// b2 : nhập dữ liệu 
	cout << " pallet rong la : ";
	cin >> palletrong;
	
	cout << " pallet co vat lieu la : ";
	cin >> palletcohang;
	
	//b3 : tính trọng lượng cuaer vật dụng 
	trongluongvatdung = palletcohang - palletrong ;
	
	//b4 : tính số lượng vật dụng 
    soluongvatdung = trongluongvatdung / 12.5;
    
    cout << " So luong cua vat dung la : " <<soluongvatdung << endl;
    
    
    return 0;
	
	
}