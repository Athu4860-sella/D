//3. Ngày phép thuật (Bắt buộc)
//Ngày 10 tháng 6 năm 1960 được viết dưới dạng 6/10/60 có đặc điểm là tháng nhân với
//ngày thì bằng năm (chỉ tính 2 chữ số cuối của năm) thì được coi là ngày phép thuật
//Viết chương trình yêu cầu người dùng nhập vào ngày, tháng, năm (chỉ nhập 2 chữ số
//cuối). In ra ngày đó có phải là ngày phép thuật không?

// phân tích đê bai

// đề cho :
// Ngày 10 tháng 6 năm 1960 -> viết : 6/10/60 
//                          -> đặc điểm : tháng * ngày = năm ==> lấy 2 số cuối 

//yêu cầu : nhập -> ngày , tháng , năm => nhập 2 sô cuôi 

#include <iostream>
using namespace std;
int main (){
	//b1 : khai báo biên 
	int ngay , thang , nam ;
	
	// b2: nhap dữ liệu
	cout << " Nhap ngay : ";
	cin >> ngay ;
	
	cout << " Nhap thang : ";
	cin >> thang ;
	
	cout << " Nhap nam (2 chu so cuoi) : ";
	cin >> nam ;
	
	//b3 : kiem tra ngay phep thuat 
	if( thang * ngay == nam){
		cout << " Day la ngay phep thuat";
		//cin >> thang * ngay == nam;
	} else {
		cout << " Day ko phai ngay phep thuat ";
	}
 return 0;
}