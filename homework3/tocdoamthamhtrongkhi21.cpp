//21. Tốc độ âm thanh trong khí
//Khi âm thanh truyền qua chất khí, tốc độ của nó phụ thuộc chủ yếu vào mật độ của môi
//trường. Môi trường càng ít đặc thì tốc độ sẽ càng nhanh. Bảng sau đây cho thấy tốc độ
//gần đúng của âm thanh ở 0 độ C, được đo bằng mét trên giây, khi di chuyển qua carbon
//dioxide, không khí, helium và hydro.
//Loại khí Tốc độ (m/s)
//Carbon Dioxide 258.0
//Không khí 331.5
//Helium 972.2
//Hydro 1,270.0
//Viết chương trình hiển thị menu cho phép người dùng chọn một trong bốn loại khí này.
//Sau khi lựa chọn được thực hiện, người dùng nên nhập số giây cần thiết để âm thanh di
//chuyển trong loại khí này từ nguồn của nó đến vị trí mà nó được phát hiện. Sau đó,
//chương trình sẽ báo cáo khoảng cách (tính bằng mét) nguồn phát âm thanh từ vị trí phát
//hiện.
//Xác thực đầu vào: Kiểm tra xem người dùng đã chọn một trong các lựa chọn menu có
//đúng hay chưa. Không chấp nhận thời gian ít hơn 0 giây hoặc hơn 30 giây.

// phân tích đề bài

// nhập -> số giây cần thiết để âm thanh di chuyển ..

// xác thực đầu vào 
// - kiểm tra xem đã chọn các lựa chọn menu chx 
//- thời gian < 0 || thoi gian > 30 (giây)

// tính khoang cách :  khoang cách = tốc đọ * thời gian 

#include <iostream>
#include <iomanip>
using namespace std ;
int main(){
	//b1 : khai báo biến 
	double khoangcach , tocdo , thoigian ;
	int luachon;
	
	//b2 : nhập danh sách menu 
	cout << "Chon moi truong am thanh : ";
	cout << "  \n1. Carbon Dioxide ";
	cout << "  \n2. khong khi ";
	cout << "  \n3. Helium ";
	cout << "  \n4. Hydro ";
	cout << " Nhap lua chon (1-4) : ";
	cin >> luachon;
	
	// điều kiện lựa chọn menu 
	if((luachon < 1) || (luachon > 4)){
		cout << " Loi : So nhap khong hop le ! ";
		return 0;
	}
	
	//b3 : Nhap dữ liệu 
	cout << " \nNhap so giay am thanh (giay) : " ;
	cin >> thoigian;
	
	// điều kiện thời gian 
	if((thoigian < 0 )|| (thoigian > 30)){
		cout << " Loi : Thoi gian phai tu 0 den 30 giay ";
	}
	
	
	// xac định điều kiện tốc đo
	if(luachon == 1){
		tocdo = 258.0 ;
	}
	else if(luachon == 2){
		tocdo = 331.5 ;
	}
	else if(luachon == 3){
		tocdo = 972.2 ;
	}
	else {
		tocdo = 1270.0 ;
	}
	// b4:  tính khoảng cách 
	khoangcach = tocdo * thoigian;
	
	// in ra kết quả 
	cout << fixed << setprecision(2);
	cout << "Khoang cach nguon phat am thanh : "<< khoangcach << " m " << endl;
	
	return 0;
}