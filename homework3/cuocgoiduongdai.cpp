//24. Cuộc gọi đường dài
//Một nhà cung cấp dịch vụ đường dài cho các cuộc gọi điện thoại:
//Thời gian gọi Tiền trên 1 phút (cent)
//00:00-06 :59 0.05
//07 :00-19 :00 0.45
//19 :01-23 :59 0.20
//Viết chương trình yêu cầu thời gian bắt đầu và số phút của cuộc gọi, đồng thời hiển thị
//cước phí. Chương trình sẽ yêu cầu thời gian được nhập dưới dạng số dấu chấm động ở
//dạng HH.MM. Ví dụ: 07:00 giờ sẽ được nhập là 07.00 và 16:28 giờ sẽ được nhập là
//16.28.
//Xác thực đầu vào: Chương trình không chấp nhận thời gian lớn hơn 23:59. Ngoài ra,
//không có số nào có hai chữ số cuối cùng lớn hơn 59 sẽ được chấp nhận. Gợi ý: Giả sử
//num là một biến dấu phẩy động, biểu thức sau sẽ cung cấp cho bạn phần phân số của
//nó: num - static_cast <int> (num)


// phân tích đề bài

// viết -> yêu cầu -> thời gian bắt đầu 
//                 -> số phút cuộc gọi  ==> hiển thị cước phí 

// chương trình -> yêu cầu -> nhập thời gian 
//                            -> dưới dạng số chấm động (HH.MM)

//vd : 7:00 -> nhập 7.00 
//     16:28-> nhập 16.28

// xác thực đầu vào 
// -> ko chấp nhận -> thời gian < 23:59
// 2 chữ số cuối cung < 59 
// num - static_cast <int> (num) -> nó giúp chuyển từ số thực sang số nguyên (vd : 16.25 -> 16 -> sô nguyên )

#include <iostream>
using namespace std ;
int main(){
	//b1: khai báo biến 
	double thoigian , tongcuocphi , giaphut ;
	int sophut , gio , phut ;
	
	//b2 : Nhập dữ liệu
	cout << " Nhap thoi gian : ";
	cin >> thoigian;
	
	cout << " Nhap so phut : ";
	cin >> sophut;
	
	// b3 : tách giờ và phút
	gio = static_cast <int> (thoigian);  // -> nó giúp chuyển từ số thực sang số nguyên (vd : 16.25 -> 16 -> sô nguyên )
    phut = (thoigian - gio )* 100 ;
    
    //b4 : điều kiện 
    if(thoigian < 0 || sophut < 0 || gio < 0 || thoigian > 23 || phut > 59 ){
    	cout << " Loi : Du lieu nhap va khong hop le ! ";
    	return 0;
	}
	
	// b5 : xác định giá
	if(gio < 7){
	 giaphut = 0.05;	//phút = giá tiền 
	}
	else if(gio < 19){
	  giaphut = 0.45;	
	}
	else{
	  giaphut = 0.20;	
	}
	
	// b6 : tính tiền tổng cước phí
	tongcuocphi = sophut * giaphut ;
	
	// in ra 
	cout << " Tong cuoc phi la : "<< tongcuocphi << " cent " << endl;
	
	return 0;
	
}
