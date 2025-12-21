/*
Dự đoán sale 
Phòng sale The East Coast của một công ty tạo ra 58 phần trăm của tổng doanh thu. 
Dựa trên tỉ lệ phần trăm đó, viết một chương trình đoán xem Phòng sale The East 
Coast này sẽ tạo ra con số là bao nhiêu nếu công ty có doanh thu là 8.6 triệu đô trong 
năm nay. 

*/
// yeu cau : tinh so tien cua phan kinh doanh 
// voi cong thuc kinhdoanh = 58 phan tram loi nhuan cua cong ty 
//loi nhuan cong ty là 8.6 trieu dô 8600000
// in ra man hinh 
//buoc 1 khai bao bien tien kinh doanh
//voi kieu du lieu la so thap phan 
// buoc 2 : tinh toan gia tri bang cong thuc tien kinh doanh = (8.6 * 58) / 100
// buoc 3 : in ra man hinh cout << TienKD << endl; 

#include <iostream>
using namespace std;
int main(){
	float TienKD;
	
	TienKD = (8.6 * 58) / 100;
	
	cout << TienKD;
	return 0; 
} 
