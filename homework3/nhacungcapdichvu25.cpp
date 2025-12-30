//25. Nhà cung cấp dịch vụ di động
//Một nhà cung cấp dịch vụ điện thoại di động có ba gói đăng ký khác nhau cho khách
//hàng của mình:
//− Gói A: Giá $ 39,99 trên 1 tháng thì được cung cấp 450 phút. Số phút thêm là
//$ 0,45 cho mỗi phút.
//− Gói B: Giá $ 59,99 trên 1 tháng thì được cung cấp 900 phút. Số phút thêm là
//$ 0,40 cho mỗi phút.
//− Gói C: Giá $ 69,99 trên 1 tháng thì được cung cấp số phút không giới hạn.
//Viết chương trình tính toán hóa đơn hàng tháng của khách hàng. Chương trình sẽ hỏi
//khách hàng đã mua gói nào và đã sử dụng bao nhiêu phút. Sau đó, nó sẽ hiển thị tổng
//số tiền đến hạn.
//Xác thực đầu vào: Đảm bảo người dùng chỉ chọn gói A, B hoặc C

// phân tích đề bài 

// viết-> chương trình tính toán -> hàng tháng 
 //     -> chương trình hỏi : -> khách hàng đã mua gói nào 
 //                           -> đã sử dụng bao nhiêu phút 
 //  ==> hiển thị tổng số tiền đến hạn.
 
 
 #include <iostream>
 using namespace std;
 int main(){
 	//b1: khai báo biến 
 	char goi ;
 	int sophut ;
 	double tongtien = 0;
 	
 	//b2: nhập dự liệu
 	cout << " Nhap goi ma khach hang da mua (A,B,C) : ";
 	cin >> goi;
 	
 	cout << " Nhap so phut : ";
 	cin >> sophut;
 	
 	//b3: kiểm tra điều kiên 
 	if(sophut < 0 ){
 		cout << " Loi : so lieu nhap khong hop le ! ";
 		return 0;
	 }
	 
	 // điều kiện chọn gói 
	 if(goi == 'A' || goi == 'a' ){
	 	if(sophut <= 450)
	 	tongtien = 39.99;
	 	
	 	else {
	 		tongtien = 39.99 + (sophut - 450 ) * 0.45;  // sử dụng hết phút đã đang kí -> sẽ tính thêm tiền 
		 }
	 }
	 
	  else if(goi == 'B' || goi == 'b' ){
	 	if(sophut <= 900)
	 	tongtien = 59.99;
	 	
	 	else {
	 		tongtien = 59.99 + (sophut - 900 ) * 0.40;  // sử dụng hết phút đã đang kí -> sẽ tính thêm tiền 
		 }
	 }
	 
	   else if(goi == 'C' || goi == 'c' ){
	     tongtien = 69.99;
	 }
	 else {
	 	cout << " Loi : goi dang ki khong hop le ! ";
	 }
	 
	 //in kết quả 
	 cout << " Tong tien phai tra : $ " << tongtien << endl;
	 
	 
	 return 0;
 }