// phân tích bài toán
// Đầu vào : doanh thu công ty = 8.6 tỷ
// tính toán Xử lý : doan phu phòng bán hàng bằng 58 % tổng doanh thu công ty
// đầu ra : doanh thu của Phòng bán hàng
// các bước
//  bước 1: Khai báo biến doanhthu, dtpkd 
// bước 2: tính dtpkd = (doanhthu * 58)/100 
// bước 3: in ra kết quả dtpkd

//Bài 2 : Dự đoán sale
//Phòng sale The East Coast của một công ty tạo ra 58 phần trăm của tổng doanh thu.
//Dựa trên tỉ lệ phần trăm đó, viết một chương trình đoán xem Phòng sale The East
//Coast này sẽ tạo ra con số là bao nhiêu nếu công ty có doanh thu là 8.6 triệu đô trong
//năm nay.

// phân tích bài toán
// Đầu vào : doanh thu công ty = 8.6 tỷ
// tính toán Xử lý : doan phu phòng bán hàng bằng 58 % tổng doanh thu công ty
// đầu ra : doanh thu của Phòng bán hàng
// các bước
// bước 1: Khai báo biến doanhthu, dtpkd 
// bước 2: tính dtpkd = (doanhthu * 58)/100 
// bước 3: in ra kết quả dtpkd
#include <iostream>
using namespace std;
int main(){
	// bước 1: khai báo biến
	float dt; // khai báo biến dt là doanh thu của công ty
	float dtpkd;  // khai báo biến dtpkd biến doanh thu phong kinh doanh
	dt = 8.6;// gán giá trị cho biến dt
	// bước 2: tính doanh thu của phòng kinh doanh
	// công thức tính dtpkd = (dt * 58 ) /100
	dtpkd = dt * 58/100;
	// bước 3: in ra kết quả doanh thu của phòng kinh doanh
	cout << "doanh thu cua phong kinh doanh "<< dtpkd;
	return 0;
}