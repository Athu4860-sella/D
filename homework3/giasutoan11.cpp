// 11.Gia sư toán (Bắt buộc)
//Viết một chương trình có thể sử dụng như một gia sư về toán cho các bạn nhỏ. Chương
//trình sẽ hiển thị hai số ngẫu nhiên để thực hiện phép cộng, ví dụ: 
//247
//+ 129
//---------
//Sau đó chờ người dùng nhập tổng của 2 số trên. Nếu kết quả đúng thì thông báo chúc
//mừng. Nếu sai thì thông báo kết quả không chính xác và kết quả đúng là bao nhiêu

// phân tích đề bài 
// viết -> gia sư toán
//      -> hiển thị 2 số ngẫu nhiên 
//          ( thực hiện phép cộng )
// điều kiện 
// nếu đúng -> thông báo -> chúc mừng 
// nếu sai -> thông báo -> ko chính xác 

#include <iostream>
#include <ctime>
using namespace std;
int main (){
	//b1: khai báo biến 
	int so1 , so2;
	int dapan , ketquadung ;
	
	//b2: khởi tạo số ngâu nhiên 
	srand(time(0));
	
	//b3: tạo số ngẫu nhiên từ 3 chữ số 
	so1 = rand() % 900 + 100; // rand : tạo số ngẫu nhiên 
	so2 = rand() % 900 + 100;
	
	//b4 : hiện thị 
	cout << "  " << so1 << endl;
	cout << "+ " << so2 << endl;
	cout << "------- " ;
	
	//b5 : Nhap dữ liệu 
	cout << " \n Nhap dap an cua ban : ";
	cin >> dapan;
	
	// b6: tính toán 
	ketquadung = so1 + so2;
	
	// b7 : thực hiện điều kiện -> thông báo , so sánh
	if(dapan == ketquadung ){
		cout << " Chuc mung ! ban da tra loi dung ";
	}
	else {
		cout << " Ket qua khong chinh xac ! \n ";
		cout << "Dap an dung : " << ketquadung << endl;
	}
	
	return 0;
	
	
}