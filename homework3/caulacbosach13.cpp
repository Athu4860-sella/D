//13. Câu lạc bộ sách
//Một hiệu sách tính điểm thưởng cho người mua tùy theo số sách khách hàng đã mua
//như sau:
//− 0 cuốn sách → 0 điểm
//− 1 cuốn sách → 5 điểm
//− 2 cuốn sách → 15 điểm
//− 3 cuốn sách → 30 điểm
//− từ 4 cuốn sách trở lên → 60 điểm
//Viết chương trình nhập vào số sách của 1 khách hàng và in ra số điểm thưởng của họ
//là bao nhiêu

//phân tích đề bài
// viết -> nhập -> số cuốn sách của 1 khách hàng -> in ra điểm thưởng họ là ??

#include <iostream>
using namespace std;
int main(){
	//b1 : khai báo biến 
	int socuonsach ;
	int diem = 0.0 ;
	//b2 :nhập dữ liệu 
	cout << " Nhap so sach cua 1 khach hang : ";
	cin >> socuonsach;
	
	//b3 : viết điều kiện tìm 1 khachs hang có sô điểm thưởng tương ứng 
	
	if(socuonsach == 0) {
		cout << " So diem nhan duoc : 0 diem ";  //Khi điều kiện đúng → thực hiện lệnh bên trong
	   }
	                                         // if (troiMua) {
//                                                macAoMua;
//                                                        }
	else if(socuonsach == 1) {
		diem = 5;
	}
	else if(socuonsach == 2) {
	    diem = 15;
	}
	else if(socuonsach == 3) {
		diem = 30 ;
	}
	else if(socuonsach >= 4) {
		diem = 60 ;
	}
	else {
		cout << " So sach khong hop le ! ";
	}
	
	//b4: in ra điểm thưởng 
	cout << " Diem thuong cua ban la : " << diem << endl;
	
	
	return 0;

} 
