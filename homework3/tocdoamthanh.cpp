//20. Tốc độ âm thanh
//Bảng sau đây cho thấy tốc độ gần đúng của âm thanh trong không khí, nước và thép.
//Môi trường Tốc độ
//Không khí 1.100 feet/giây
//Nước 4.900 feet/giây
//Thép 16.400 feet/giây
//Viết chương trình hiển thị menu cho phép người dùng chọn: không khí, nước hoặc thép.
//Sau khi người dùng thực hiện lựa chọn, sẽ được yêu cầu nhập khoảng cách mà sóng âm
//thanh sẽ truyền trong môi trường đã chọn. Sau đó, chương trình sẽ hiển thị khoảng thời
//gian cần thiết. (Làm tròn câu trả lời đến bốn chữ số thập phân.)
//Xác thực đầu vào: Kiểm tra xem người dùng đã chọn một trong các lựa chọn có sẵn từ
//menu chưa ? Không chấp nhận khoảng cách nhỏ hơn 0.

//phân tích đề bài

// viết -> hiển thị cho phép chọn -> ko khí 
//                                -> nước 
//                                -> thép 

// sau lựa chọn -> yêu cầu -> nhập 
//                            -> khoảng cách mà sóng âm thanh truyền tới
// sau đó -> hiển thị -> khoảng thời gian 
                       // ( làm tròn -> 4 số thập phân )
                       
// xác thực đầu vào -> điều kiện 
//-> kiểm tra người dung -> có trong danh sách ? ko 
//-> khoảng cách < 0 

// ta tìm thời gian : thời gian = khoảng cách / tốc độ 

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	//b1: khai báo biến 
	double khoangcach , thoigian , tocdo ;
	int luachon;
	
	//b2 : Liệt kê bảng hiển thị lựa chọn 
	cout << " Chon moi truong truyen am : ";
	cout << " 1. Khong khi ";
	cout << " 2. Nuoc ";
	cout << " 3.Thep ";
	cout << " Nhap lua chon tu (1-3) ";
	cin >> luachon ;
	
	// điều kiện lựa chọn 
	if((luachon < 1 || luachon > 3)){
		cout << " Loi : So nhap khong hop le !";
		return 0;
	}
	
	//b3 : nhập dữ liệu khoảng cách 
	cout << " Nhap khoang cach ma song am truyen toi : ";
	cin >> khoangcach;
	
	// điều kiện khoảng cách 
	if(khoangcach < 0){
		cout << " Loi : khoang cach khong duoc nho hon 0 ";
		return 0;
	}
	
	//b4 : xác định điều kiện tốc đọ 
	if(luachon == 1)
	  tocdo = 1100;
	else if(luachon == 2)
	  tocdo = 4900;
	else 
	  tocdo = 16400;
	  
	//b5 : tính toán thời gian 
	thoigian = khoangcach / tocdo; 
	
	// in ra kết quả 
	cout << fixed << setprecision(4);
	cout << " Khoang thoi gian ma song am thanh : "<< thoigian << " giay "<< endl;
	
	return 0; 
	
}
