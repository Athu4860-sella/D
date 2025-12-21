//4. Lượng mưa trung bình 
//Viết một chương trình tính toán lượng mưa trung bình trong 3 tháng. Chương trình 
//yêu cầu người dùng nhập vào tên của mỗi tháng, như là June, July; và lượng mưa 
//(đơn vị đo là inches) của mỗi tháng. Sau đó chương trình hiển thị ra thông báo tương 
//tự như sau: 
//“Lượng mưa trung bình của tháng June, July, và August là 6.72 inches.”. 

//phân tích dề bài:
// viết -> tính toán -> lượng mưa TB 3 tháng 

// cách làm :
//khai bao biến :  thang1 , thang2 , thang 3 ;
// tính toán lượng mưa TB : ( luong1 + luong2 + luong3)/3 ;
// nhập cả lượng nước mưa để tính toán ;

#include <iostream>
#include <string>
using namespace std;
int main(){
	//b1 : khai báo biến 
	string thang1 , thang2 , thang3 ;
	double luong1 , luong2 , luong3 , trungbinh ;
	
	//b2 : nhập dữ liệu
	
	// nhập tên tháng  
	cout << " Nhap ten thang thu nhat la : ";
	cin >> thang1;
	
	cout << " Nhap ten thang thu hai la : ";
	cin >> thang2;
	
	cout << " Nhap ten thang thu ba la : ";
	cin >> thang3 ;
	
	// nhập lượng mưa 
	
	cout << " Nhap luong mua cua thang la : ";
	cin >> luong1;
	
	cout << " Nhap luong mua cua thang la : ";
	cin >> luong2;
	
	cout << " Nhap luong mua cua thang la : ";
	cin >> luong3 ;
	
	// tính trung bình 
	
	trungbinh =  ( luong1 + luong2 + luong3)/3 ;
	
	cout << " Luong mua TB cua thang la : " << thang1 << " , " << thang2 << " , " <<thang3 << " , " << trungbinh << " inches " << endl;
	
	return 0;
	
	
}