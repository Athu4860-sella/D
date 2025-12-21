//12. Tính toán mẫu đất 
//Một mẫu đất tương đương với 43.560 feet vuông. Viết chương trình tính toán số mẫu 
//đất trên một khu đất có diện tích 391.876 feet vuông.

//phân tich bài toán :
// 1 mẫu : 43.560 feet vuông 
// viết -> tính toán -> số mẫu đất 
// 1 khu đất có diện tích : 398.876 feet vuông 

// các tính :
// khai báo biến : maudat , dientichkhudat , somau ;
// tính : somau = dientichkhudat / maudat ;

#include <iostream>
using namespace std;
int main () {
	//b1 : khai báo biến 
	float somau ;
	float maudat = 43.560, 
	      dientichkhudat = 398.876 ; 
	      
	//b2 : tinh toán 
	somau = dientichkhudat / maudat ;
	
	cout << " So mau la : " <<somau << endl;
	
	return 0;
	 
	      
}