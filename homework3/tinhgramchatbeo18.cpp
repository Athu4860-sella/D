//18. Tính gram chất béo
//Viết một chương trình yêu cầu nhập vào tổng lượng calo và gram chất béo trong một
//loại thực phẩm. Chương trình sẽ hiển thị phần trăm calo có trong chất béo. Nếu lượng
//calo có trong chất béo ít hơn 30% tổng lượng calo của thực phẩm thì hiển thị thông báo
//cho biết thực phẩm đó ít chất béo. Biết:
//- 1gram chất béo có 9 calo
//- Lượng calo trong số gram chất béo = số gram chất béo*9
//- Tỷ lệ calo có trong thực phẩm = Lượng calo trong số gram chất béo / Tổng lượng calo
//Xác nhận đầu vào: Đảm bảo số lượng calo và gram chất béo không nhỏ hơn 0. Ngoài
//ra, số lượng calo từ chất béo không được lớn hơn tổng số calo (Số gram chất béo*9
//phải nhỏ hơn Tổng lượng calo). Nếu điều đó xảy ra, hãy hiển thị thông báo lỗi cho biết
//rằng số gram calo hoặc chất béo đã được nhập không chính xác.

//phân tích đề bài 

// nhập -> tổng kượng calo 
//      -> gram chất béo -> loại thực phẩm 

// chương trình hiển thị 
//-> nếu calo chất béo <-> ít 30% <-> tổng lượng calo thực phẩm => thông báo : thực phẩm ít chất béo 
// biết :
// - 1 gram chất béo = 9 calo 
// - lượng calo trong số gram = số gram chất béo * 9
// - tỷ lệ calo -> thực phẩm = luong calo béo / tổng calo 

// xác nhận đầu vào :
// -> số lượng calo , gram chất béo < 0
// -> số lượng calo chất béo > tổng số calo (gram béo * 9 > tổng calo \\ => nếu xảy ra thì báo lỗi : gram , calo ko chính xác

#include <iostream>
using namespace std ;
int main (){
	//b1: khai báo biến 
	double tongluongcalo , gramchatbeo ;
	double luongcalotuchatbeo , calothucpham ;
	
	//b2 : nhập dữ liệu
	cout << " Nhap tong luong calo : ";
	cin >> tongluongcalo;
	
	cout << " Nhap so gram chat beo : ";
	cin >> gramchatbeo;
	
	//b3 : kiểm tra điều kiện đầu vào của calo , gram
	if((tongluongcalo < 0) || (gramchatbeo < 0)){
		cout << " Loi : So luong calo , gram chat beo khong nho hon 0 ";
		return 0;
	}
	
	//b4 : tính lượng calo trong số gram chất béo 
	luongcalotuchatbeo = gramchatbeo * 9;
	
	// xác định điều kiện 
	if(luongcalotuchatbeo > tongluongcalo){
		cout << " Loi: Calo tu chat beo lon hon tong calo thuc pham!2 ";
		return 0;
	}
	
	// b5 : tính tỷ lệ phân tram (* 100) calo trong thực phẩm 
	calothucpham = (luongcalotuchatbeo / tongluongcalo) * 100 ;
	
	//in kết quả
	cout << " \n Ty le calo trong thuc pham den tu chat beo : " <<	calothucpham <<"%";
	
	// Điều kiện chất béo ít hơn 30% thục phẩm ít chất béo 
	if(calothucpham < 30 ){
		cout << " \n Thuc pham nay it chat beo ! ";
	}
	
	return 0;
}