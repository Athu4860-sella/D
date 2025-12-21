//17. Hoa hồng chứng khoán 
//Kathryn đã mua 750 cổ phiếu với giá 35.00 USD / cổ phiếu. Cô ấy phải trả cho người 
//môi giới chứng khoán của mình khoản hoa hồng 2% cho giao dịch. Viết một chương 
//trình tính toán và hiển thị như sau: 
//− Số tiền thanh toán cho cổ phiếu (không có hoa hồng). 
//− Số tiền hoa hồng. 
//− Tổng số tiền đã thanh toán (tổng cho cổ phiếu cộng với tiền hoa hồng). 

//phân tích đè bài 
//kathryn -> mua : 750 cổ phiếu 
//       -> giá : 35.00 USD / cổ phiếu
//       -> phải trả hoa hồng :  2% cho giao dịch
// viết -> tính toán :
// => số tiền thanh toán ( chx có hoa hòng ) -> số tiền hoa hồng ->tổng tiền ( số tiền thanh toán cổ phiếu + hoa hồng )

// cách làm 
// khai báo biến : tienthanhtoan , tienhoahong , tongtien , cophieumua , giacophieu , hoahong;
// tính toán : tienthanhtoan = cophieumua * giacophieu;
//             tienhoahong = tienthanhtoan * hoahong ;
//             tongtien = tienthanhtoan + tienhoahong ;

#include <iostream>
using namespace std;
int main (){
	//b1: khai báo biến 
	double tienthanhtoan , tienhoahong  , tongtien ; 
	double cophieumua =  750 ,
	       giacophieu = 35.00 , 
		   hoahong = 0.02 ;
		   
	//b2 : tính toán 
	tienthanhtoan = cophieumua * giacophieu;
	tienhoahong = tienthanhtoan * hoahong ;
	tongtien = tienthanhtoan + tienhoahong ;
	
	cout << " so tien thanh toan la : " << tienthanhtoan << endl;
	cout << " so tien hoa hong la : " << tienhoahong << endl;
	cout << " Tong tien da thanh toan la : " << tongtien << endl;
	
	return 0;
}