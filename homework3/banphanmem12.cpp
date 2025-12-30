//12. Bán phần mềm
//Một công ty phần mềm bán gói hàng sản phẩm giá $99. Mức chiết khấu số lượng theo
//bảng sau.
//Số lượng Chiết khấu
//10-19 20%
//20-49 30%
//50-99 40%
//Trên 100 50%
//Viết một chương trình yêu cầu số lượng đơn vị bán và tính tổng chi phí mua
//
// phân tích đề bài 
// yêu cầu -> nhập só lượng đơn bán 
//         -> tính -> tổng chi phí đã mua 

// các phép tính
//- tính tỏng tiền -> số lượng 
//                 -> giá sản phẩm 
// tính giảm giá -> tổng số tiền 
//               -> % đã giảm 
// tổng chi phi đã mua (số tiền phải mua )-> tổng tiền
//                                        -> giam giá 
//if (trời_mưa) {
//    mang_áo_mưa;
//}


#include <iostream>
using namespace std;
int main (){
	//b1 : khai báo biến 
	int soluong ;
	double tongtien , giamgia , tongchiphimua ;
	double phantramgiam = 0.0;
	double  giatien = 99 ;
	
	//b2 : nhập dữ liệu 
	cout << " Nhap so luong don ban : ";
	cin >> soluong;
	
	
	// b3: thực hiện điều kiện 
	if(soluong >= 100){
		phantramgiam = 0.5;
    }
    else if(soluong >= 50){
		phantramgiam = 0.4; 
	}
	else if(soluong >= 20){
		phantramgiam = 0.3; 
	}
	else if (soluong >= 10 ){   /// nguyên tăc để số lớn lên trước
	  phantramgiam = 0.2; 	
	} 
	else {
		phantramgiam = 0.0;
	}
	
	
	 //b4 : tính toán 
	tongtien = soluong * giatien;
	giamgia = tongtien * phantramgiam;
	tongchiphimua = tongtien - giamgia ;  
	
	
	//b5: in ra 
	cout << " Tong tien truoc giam : "<< tongtien << endl;
	cout << " chi phi giam gia : " << giamgia << endl;
	cout << " Tong chi phi da mua : " << tongchiphimua << endl;
	
	return 0;
}