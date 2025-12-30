//19. Phân loại sóng điện từ:
//Viết chương trình nhập vào bước sóng của 1 sóng điện từ. Hãy chỉ ra nó là loại sóng gì biết:
//- Sóng radio bước sóng >= 10-2
//- Sóng của lò vi sóng từ 10-3 đến 10-2
//- Sóng hồng ngoại 7x10-7 đến 10-2
//- Sóng ánh sáng 4 x 10-7 đến 7x10-7
//- Sóng tử ngoại 1 x 10-8 đến 4 x 10-7
//- Tia X quang: 1 x 10-11 đến 1 x 10-8
//- Tia gamma: nhỏ hơn 1 x 10-11

// phân tích đề bài 

// nhập -> bước sóng của 1 điện từ 
// hãy -> chỉ ra loại sóng gì 

// kí hiệu đê viết đc : 
// e : kí hiệu viết tắt -> nhân với 10 mũ 
// VD: 10^-2 = 1 * 10^-2 <=> 1e - 2

#include <iostream>
using namespace std ;
int main(){
	//b1 : khai báo biến 
	double buocsongdientu ;
	
	//b2 : Nhap dữ liệu 
	cout << " Nhap vao buoc song cua 1 song dien tu : ";
	cin >> buocsongdientu;
	
	if(buocsongdientu < 0){
		cout << " Loi : Buoc song khong hop le ! ";
	}
	else if(buocsongdientu >= 1e-2){
		cout << " Day la song radio buoc song ";
	}
	else if(buocsongdientu >= 1e-3){
		cout << " Day la song cua lo vi song tu ";
	}
	else if(buocsongdientu >= 7e-7){
		cout << " Day la song anh sang ";
	}
	else if(buocsongdientu >= 4e-7){
		cout << " Day la song tu ngoai ";
	}
	else if(buocsongdientu >= 1e-8){
		cout << " Day la tia x quang ";
	}
	else {
		cout << " Day la tia gamma ";
	}
	
	return 0; 
} 