//16. Chạy đua
//Viết chương trình nhập vào tên và thời gian hoàn thành cuộc đua của 3 vận động viên.
//Sau đó in ra xếp hạng của 3 người theo thứ tự nhất nhì ba.
//Chú ý: báo lỗi nếu nhập thời gian đua là số âm.

//phân tích đề bài

// viết -> nhập -> tên
//              -> thời gian | => của 3 vận đọng viên 
//-> in ra xếp hàng => nhất -> nhì -> ba 

// báo lỗi : -> nhập thời gian âm ( > 0 )

#include <iostream>
#include <string>
using namespace std ;
int main(){
	//b1 : khai báo biến 
	double thoigian1 , thoigian2 , thoigian3 ;
	string ten1 , ten2 , ten3 ;
	
	//b2: Nhập dữ liệu 
	cout << " Nhap ten van dong vien 1 : ";
	cin >> ten1 ;
	cout << " Nhap thoi gian 1 : ";
	cin >> thoigian1 ;
	
	cout << " Nhap ten van dong vien 2 : ";
	cin >> ten2 ;
	cout << " Nhap thoi gian 2 : ";
	cin >> thoigian2 ;
	
	cout << " Nhap ten van dong vien 3 : ";
	cin >> ten3 ;
	cout << " Nhap thoi gian 3 : ";
	cin >> thoigian3 ;
	
	//b3 : điều kiện nếu nhập thời gian âm
	if((thoigian1 < 0 ) || (thoigian2 < 0) || (thoigian3 < 0)){
		cout << " Loi : Thoi gian dua khong duoc la so am ";
		return 0 ;
	}
	
	// b4: xác định điều kiện xếp hạng
	// Đặc điểm quan trọng:
//    Chỉ 1 nhánh duy nhất được chạy
//    Khi if đúng → bỏ qua toàn bộ else if và else

	if((thoigian1 <= thoigian2) && (thoigian1 <= thoigian3)){
		cout << " \n Giai nhat ! "<< ten1 ;
		
		if(thoigian2 <= thoigian3){
			cout << " \n Giai nhi ! " << ten2 ;
			cout << " \n Giai ba ! " << ten3 ;
		}
		else{
			cout << " \n Giai nhi : " << ten3 ;
			cout << " \n Giai ba : " << ten2 ;
	}
}
	
	else if((thoigian2 <= thoigian1) && (thoigian2 <= thoigian3)){
		cout << " \n Giai nhat : "<< ten2 ;
	
		if(thoigian1 <= thoigian3){
			cout << " \n Giai nhi : " << ten1 ;
			cout << " \n Giai ba : " << ten3;
		}
		else{
			cout << " \n Giai nhi : " << ten3 ;
			cout << " \n Giai ba : " << ten1 ;
	}
}
	
	else{
		cout << " \n Giai nhat : "<< ten3 ;
		
		if(thoigian1 <= thoigian2){
			cout << " \n Giai nhi : " << ten1 ;
			cout << " \n Giai ba : " << ten2 ;
		}
		else{
			cout << " \n Giai nhi : " << ten2 ;
			cout << " \n Giai ba : " << ten1 ;
	}
}

	return 0;
	
}