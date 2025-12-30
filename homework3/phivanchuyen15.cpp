//15. Phí vận chuyển
//Công ty vận tải hàng hóa nhanh thu phí sau:
//Trọng lượng (Kilogram) Mức phí trên mỗi dặm
//Nhỏ hơn 2kg $1.10
//Từ 2kg → 6kg $2.20
//Từ 6kg → 10kg $3.70
//Từ 10kg → 20kg $4.80
//Viết một chương trình yêu cầu trọng lượng của gói và khoảng cách để vận chuyển, sau
//đó hiển thị các khoản phí.
//Chú ý:
//- Không chấp nhận giá trị 0 hoặc ít hơn cho trọng lượng của gói. Không chấp nhận
//trọng lượng hơn 20 kg (đây là trọng lượng tối đa của công ty).
//- Không chấp nhận khoảng cách dưới 10 dặm hoặc hơn 3. 000 dặm. Đây là khoảng
//cách tối thiểu và tối đa của công ty

// phân tích đè bài

//viết - yêu cầu -> trọng lượng gói 
//               -> khoảng cách vận chuyên 
// => hiển thị các khoản phí
//trọng lượng :  
// <= 2kg   $1.10
// < 6kg    $2.20
// < 10kg   $3.70
// < 20kg   $4.80

// chú ý : ko đc thực hiện => nếu thực hiện báo lỗi 
// trọng lượng : <= 0 kg 
//               > 20kg 

//khoảng cách : < 10 dặm 
//              > 3.000 dặm 


#include <iostream>
using namespace std;
int main(){
	//b1: khai báo biến 
	double trongluong , khoangcach ,tongphi ;
    double mucphi = 0.0;
	
	//b2 : nhập du liễu 
	cout << " Nhap trong luong cua goi : ";
	cin >> trongluong;
	
	cout << " Nhap khoang cach van chuyen : ";
	cin >> khoangcach;
	
	//b3 : kiểm tra điều kiện trọng lương và khoang cách 
	
	if((trongluong <= 0) || (trongluong > 20 )){
		cout << " Loi : Trong luong khong hop le ! " << endl; 
		return 0;
		
	}
	
	if((khoangcach < 10 ) || (khoangcach > 3000)){
		cout <<  " Loi : Khoang cach khong hop le ! " << endl; 
	}
		return 0;                   //return 0 : Kết thúc chương trình NGAY LẬP TỨC
                                    //Không chạy bất kỳ dòng code nào phía dưới nữa.
	
	// b4: xac điều kiện định phí của trọng lượng 
	if(trongluong <= 2){
		mucphi = 1.10;
	}
	else if(trongluong < 6 ){
		mucphi = 2.20;
	}
	else if(trongluong < 10 ){
		mucphi = 3.70;
	}
	else {
		mucphi = 4.80;
	}
	
	// b5 : tính tổng các khoản phí 
	tongphi = khoangcach * mucphi ;
	
	// b6 : hiển thị các khoản phí 
	
	cout << " Phi van chuyen : $ "<<tongphi << endl;
	
	return 0;
}