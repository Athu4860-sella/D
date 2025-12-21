//1. Số dặm trên mỗi Gallon (Bắt buộc) 
//Viết chương trình tính toán mức tiêu thụ xăng của ô tô. Chương trình này sẽ yêu cầu 
//người dùng nhập số gallon xăng xe có thể chứa, và nhập số dặm nó có thể đi được  khi 
//được đổ đầy xăng. Sau đó nó sẽ hiển thị số dặm có thể được lái đi trên mỗi gallon xăng.

//pphân tích bài toán :
// viết -> tính toán mức dộ tiêu thụ xăng ô tô 
// yêu cầu -> nhập sô gallon xăng xe -> có thể chứa 
//         -> nhập số gallon xăng -> có thể đi 
//khai báo biến : sodammoigallon , sodam ,sogallonxang ;
// => cách tính : hiện thị số dăm lái đi -> lái đi trên mỗi gallon xăng 
//          sodammoigallon =   sodam / sogallonxang;

#include <iostream>
using namespace std ;
int main (){
	//b1 : khai báo biến 
	double sodammoigallon ;
	double sodam ;
	double sogallonxang ;
	
	//b2 : nhập giá trị cho các biến 
	cout << " So dam moi gallon la : " ;
	cin >> sogallonxang ;
	
	cout << " so dam la : " ;
	cin >> sodam ;
	
	sodammoigallon =   sodam / sogallonxang;
	
	cout << " so dam moi gallon di duoc la : " << sodammoigallon << endl;
	
	return 0;
	
	
}