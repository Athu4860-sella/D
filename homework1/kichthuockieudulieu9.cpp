//9. Kích thước kiểu dữ liệu 
//Bạn được giao công việc của một lập trình viên trong Cyborg supercomputer. Một 
//trong các bước để hoàn thành các công việc tính toán là bạn cần phải biết được các 
//kiểu dữ liệu sẽ sử dụng sau đây có kích thước bao nhiêu byte: kiểu char, kiểu int, kiểu 
//float, và kiểu double. Tuy nhiên bạn lại không có bất kỳ tài liệu kĩ thuật nào để tra cứu 
//thông tin này cả. Hãy viết chương trình C++ để xác định xem không gian bộ nhớ cần 
//cho việc chứa các kiểu dữ liệu này là bao nhiêu và hiển thị chúng ta màn hình. 

// phân tích bài toán :
// 1 lập trình viên -> biết -> kiểu dữ liệu kích thước bao nhiêu byte : kiểu char -> kiểu int -> kiểu float -> kiểu double ;
// viết chương trình -> để biết ko gian cần chứa -> ? 

// cách tính :
// sử dụng lệnh : sizeof (...) => thay vô chỗ tróng từng kiểu dữ liệu

#include <iostream>
using namespace  std;
int main (){
	cout << " kich thuoc kieu char la : " << sizeof(char) << endl;
	cout << " kich thuoc kieu int la : " << sizeof(int) << endl;
	cout << " kich thuoc kieu float la : " << sizeof(float) << endl;
	cout << " kich thuoc kieu double la : " << sizeof(double) << endl;
	
	return 0;
	
	
}