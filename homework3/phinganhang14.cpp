//14. Phí ngân hàng
//Ngân hàng tính phí 10$/1 tháng cộng với phí sử dụng séc như sau:
//− 0.1$ mỗi séc nếu số lượng không quá 20 séc
//− 0.08$ mỗi séc nếu số lượng séc trong khoảng 20 đến 39
//− 0.06$ mỗi séc nếu số lượng séc trong khoảng 40 đến 59
//− 0.04$ mỗi séc nếu số lượng séc trong từ 60 trở lên
//Mặt khác sẽ tính thêm 15$ nếu số dư trong tài khoản (trước khi trừ 2 loại phí ở trên)
//dưới 400$
//Viết chương trình nhập vào số dư tài khoản và số lượng séc sử dụng trong tháng sau đó
//in ra các khoản phí người dùng phải trả.
//Chú ý: không chấp nhận người dùng nhập số âm.

//phân tích đề bài 

// ngân hàng tính phí : 10$/1 tháng 
// <= 20 : 0.1$ 
// 20 - 39 : 0.08$
// 40 - 59 :  0.06$
// >= 60 : 0.04$ 

// phí phạt sô dư thấp 
// < 400$ -> cộng thêm 15$
// >= 400 -> ko bị tính phí 

// Chú ý: không chấp nhận người dùng nhập số âm.

// ví dụ
//So du: 350
//So sec: 25
//Tính:
//Phí cố định: 10$
//Phí séc: 25 × 0.08 = 2
//Phí phạt: 15$ (vì < 400)
//Tổng: 10 + 2 + 15 = 27


#include <iostream>
using namespace std;
int main(){
	//b1: khai báo biến 
	double sodutaikhoan , soluongsec , phisec ;
	double nganhangtinhphi = 10.0;
	double phisudungsec = 0.0 ,
	       phiphat = 0.0,
		   tongphitra = 0.0 ;
	
	//b2 : nhập dữ liệu
	cout << " Nhap so du tai khoan : ";
	cin >> sodutaikhoan;
	
	cout << " Nhap so luong sec : ";
	cin >> soluongsec;
	
	// b3:  kiểm tra điều kiện < 0;
	if((sodutaikhoan < 0 )||(soluongsec <0)){
		cout << " Loi : Khong nhap so am ";
	}
	
	// b4 : kiểm tra các tháng phí sử dụng sec 
	if(soluongsec <= 20){
		phisudungsec = 0.1;
	}
	else if(soluongsec > 20){
		phisudungsec = 0.08 ;
	}
	else if(soluongsec > 40){
		phisudungsec = 0.06 ;
	}
	else {
		phisudungsec = 0.04 ;
	}
   //b5 : tính phí sec -> Để bt đc bản thân phải tra bao nhiêu cho phí séc ,
                         // ta lấy số lượng nhân với giá tiên phải tra.
    phisec = soluongsec * phisudungsec;
    
    //b6 : phí phạt sô dư thấp  
    if(sodutaikhoan < 400){
    	phiphat = 15.0;
	}
	
	//b7 : tính tổng phí người dùng phải trả 
	tongphitra = nganhangtinhphi + phisec + phiphat;
	
	//b8 : in ra các khoản phí phải trả 
	cout << " \n Phi co dinh :$ " << nganhangtinhphi << endl;
	cout << " So tien phi sec la : "<< phisec << endl;
	cout << " So tien phi phi phat : "<< phiphat << endl;
	cout << " Cac khoan phi nguoi dung phai tra : "<< tongphitra << endl;
	
	return 0;
}