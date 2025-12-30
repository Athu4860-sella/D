//23. Tính hình học (Bắt buộc)
//Viết chương trình hiển thị 1 thực đơn với các chức năng sau:
//1. Tính diện tích hình tròn
//2. Tính diện tích hình chữ nhật
//3. Tính diện tích hình tam giác vuông
//4. Thoát
//Nhập lựa chọn [1-4] :
//Yêu cầu chọn các chức năng từ 1 đến 4. Sau đó tùy lựa chọn của người dùng để thực
//hiện đúng chức năng. Biết :
//− Diện tích hình tròn là r2
//− Diện tích hình chữ nhật là dài x rộng.
//− Diện tích tam giác vuông (biết độ dài 2 cạnh góc vuông a, b) là 0.5 x ab

// phân tích đề bài

// viết -> hiển thị 1 thực đơn :
// diện tích hình tròn : s =  * r * r ;
// diện tích hình chữ nhật : s = dài * rong ;
// diện tích hình tam giác vuông : s = 0.5 x a * b ;
// nhập -> lựa chọn (1-4)

#include <iostream>
using namespace std;
int main(){
	// b1: khai báo biến 
	int luachon ;
	double dai , rong , r , a, b ;
	double PI = 3.14159 ;
	
	//b2 :hiển thị ra màn hình -> nhập dữ liệu
	cout << " ===Menu cac dien tich=== ";
	cout << " \n 1.Tinh dien tich hinh tron ";
	cout << " \n 2.Tinh dien tich hinh chu nhat ";
	cout << " \n 3.Tinh dien tich hinh tam giac vuong ";
	cout << " \n 4.Thoat ";
	cout << " \n Nhap lua chon (1-4) : ";
	cin >> luachon ;
	
	// b3 : xử lí lựa chọn
	
	if(luachon == 1){
		cout << " Nhap ban kinh r : ";
		cin >> r;
		
		if(r <= 0 ){
			cout << " Loi : So nhap khong hop le ! ";
		}
		else {
			cout << " Dien tich hinh tron : " <<  PI * r * r ;
		}
	}
	else if (luachon == 2){
		cout<< " Nhap chieu dai : ";
		cin >> dai ;
		cout << " Nhap chieu rong : ";
		cin >> rong ;
		
		
		if(dai <= 0 || rong <= 0){
			cout << " Loi : So nhap khong hop le ! ";
		}
		else {
			cout << " Dien tich hinh chu nhat : "<< dai * rong ;
		}
	}
	
	else if (luachon == 3){
		cout << " Nhap canh goc vuong a ";
		cin >> a;
		cout << " Nhap canh goc  b ";
		cin >> b;
		
		if(a <= 0 || b <= 0){
			cout << " Loi : so nhap khong hop le ! ";
		}
		else {
			cout << " Dien tich hinh tam giac vuong : "<< 0.5 * a * b ;
		}
	}
	else if (luachon == 4) {
		cout << " Thoat khoi chuong trinh ";
	}
	else {
		cout << " Loi : Hay nhap chuong trinh tu (1-4) ";
	}
	
	return 0; 

}