//22. Điểm đông và sôi
//Bảng sau liệt kê các điểm đông đặc và sôi của một số chất. Viết một chương trình yêu
//cầu người dùng nhập một nhiệt độ và sau đó hiển thị các chất sẽ đông đặc ở nhiệt độ
//đó và những chất sẽ sôi ở nhiệt độ đó. Ví dụ, nếu người dùng nhập -20, chương trình
//sẽ báo rằng nước sẽ đóng băng và oxy sẽ sôi ở nhiệt độ đó.
//Chất Nhiệt độ đông(0F) Nhiệt độ sôi (0F)
//Cồn Ethyl -173 172
//Thủy ngân -38 676
//Oxy -362 -306
//Nước 32 212


// phân tích dề bài 

// viết -> yêu cầu -> nhập => nhiệt độ 

// sau đó -> hiển thị các chất -> đông đặc 
//                             -> nhiệt độ 
//                             -> chất sôi -> nhiệt độ 

#include <iostream>
using namespace std;
int main(){
	//b1: khai báo biến 
	double nhietdo ;
	
	//b2: Nhập dữ liệu
	
	cout << " Nhap nhiet do : ";
	cin >> nhietdo;
	
	//b3 : xác định điều kiện nhiệt độ đông 
	
	cout <<  " Cac chat nhiet do dong :  ";
	
	// điều kiện
	
	if(nhietdo <= -173){
		cout << " Con Ethyl ";
	}
	if(nhietdo <= -38){
		cout << " Thuy ngan ";
	}
	if(nhietdo <= -362){
		cout << " Oxy ";
	}
	
	
	if(nhietdo <= 32){
		cout << " Nuoc ";
	}
	
	// b4 : xác định điều kiện nhiệt độ sôi 
	cout << "\n Cac chat nhiet do soi : ";
	
	// điều kiện 
	if(nhietdo >= 172){
		cout << " Con Ethyl ";
	}
	if(nhietdo >= 676){
		cout << " Thuy ngan ";
	}
	if(nhietdo >= -306){
		cout << " Oxy ";
	}
	if(nhietdo >= 212){
		cout << " Nuoc ";
	}
	
	return 0;
	
	
}