//5. Tỉ lệ nam và nữ 
//Viết một chương trình yêu cầu người dùng nhập vào số lượng người nam và số lượng 
//người nữ của một lớp. Chương trình sẽ hiển thị tỉ lệ phần trăm của nam và nữ ra màn hình.  
//Gợi ý: Giả sử có 8 nam và 12 nữ trong một lớp. Do đó tổng sĩ số của lớp là 20. Tỉ lệ 
//phần trăm của nam có thể được tính bằng công thức 8 : 20 = 0.4 hoặc 40 phần trăm. Tỉ 
//lệ phần trăm của nữ có thể được tính bằng công thức 12 : 20 = 0.6 hoặc 60 phần trăm. 

// phân tích đề bài 
//yêu cầu:
//- nhập số lượng nam , nữ 
//- tổng học sinh 
//- tỉ lệ phần trăm của nam , nữ 

//cách tính  :
// tong = nam + nu ;
// 

#include <iostream>
using namespace std;
int main (){
	//b1 : khai báo biến 
	double nam , nu , tong , tilenu ,tilenam , tongphantramnam , tongphantramnu  ;
	
	//b2 : nhập dữ liệu 
	cout << " Nhap so luong nam la : ";
	cin >> nam;
	
	cout << " Nhap so luong nu la : ";
	cin >> nu;
	
	//b3 : tính tổng học sinh
	tong = nam + nu ;
	cout << " Tong so luong hoc sinh la : "<< tong << endl;
	
	//b4 : tính tỉ lệ phần trăm
	

	tongphantramnu  = nu / tong * 100 ;
	tongphantramnam  = nam / tong * 100 ;
	
	cout << " Tong phan tram so hoc sinh nam la : "<<tongphantramnu  << " % " <<endl;
	cout << " Tong phan tram so hoc sinh nu la : "<<tongphantramnam  << " % " <<endl;
	
	return 0;
	
	
}