//Gia sư toán 
//Viết một chương trình có thể sử dụng như một gia sư về toán cho các bạn nhỏ. 
//Chương trình sẽ hiển thị hai số ngẫu nhiên để thực hiện phép cộng
//Sau đó chương trình sẽ dừng lại trong khi học sinh thực hiện việc tính toán. Khi học 
//sinh đã sẵn sàng để kiểm tra đáp án, họ có thể nhấn một phím bất kỳ để chương trình 
//hiển thị kết quả chính xác.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std ;
int main (){
	// b1: khai báo biến 
	float so1 , so2 , tong ;
	
	//b2 : khởi tại sô ngẫu nhiên
	srand(time(0));
	
	
	//b3 : sinh 2 số ngẫu nhiên 
	so1 = rand() % 900 + 100 ; 
	so2 = rand() % 900 + 100 ;
	
	tong = so1 + so2;
	
	// b4: hiện thị kết quả 
	cout << setw(5) << so1 << endl;
	cout << "+" ;
	cout << setw(4) << so2 << endl;
	cout << "------ " << endl ;
	
	// b5: dừng lại để học sinh tính 
	cout << " Nhap ket qua : ";
	cin.get();
	
	//b5: hiện thị kết quả 
	cout << " Dap an dung la : " << tong << endl;
	
	return 0;
	
	
}