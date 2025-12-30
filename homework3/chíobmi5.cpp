//5. Chỉ số BMI
//Chỉ số BMI được tính theo công thức lấy cân nặng (kg) chi cho bình phương của chiều
//cao (tính theo mét). Nếu BMI lớn hơn 25 là thừa cân, nhỏ hơn 18.5 là gầy, trong khoảng
//18.5 đến 25 là bình thường.
//Viết chương trình yêu cầu người dùng nhập chiều cao và cân nặng của họ. sau đó cho
//biết họ đang ở mức cân nặng nào trong 3 loại trên

// phân tích đề bài 

// công thức : cân nặng / (chiều cao (m))^2
// BMI : > 25 -> thừa cân 
//       < 18,5 -> gầy 
//       khoảng 18,5 <= BMI <= 25 -> binh thường 

// yêu cầu -> nhập -> chiều cao
//                 -> chiều nặng ==> để bt họ ở mức nào 

#include <iostream>
#include <cmath>
using namespace std;
int main (){
	//b1 : khai báo biến 
	double chieucao , cannang , bmi ;
	
	//b2 : nhập du liệu 
	cout << " Nhap chieu cao (m) : ";
	cin >> chieucao;
	
	cout << " Nhap cang nang (kg) : ";
	cin >> cannang ;
	
	//b3 : công thức phép toán 
	bmi = cannang / pow(chieucao ,2) ;
	
	// b4 : kiem tra BMI 
	if (bmi < 18.5 ){
		cout << " Chi so BMI " << bmi << endl;
		cout << " Tinh trang : gay ";
	}
	else if (bmi > 25 ){
		cout << " Chi so BMI " << bmi << endl;
		cout << " Tinh trang : Thua can ";

	}
	else if (bmi <= 25){
		cout << " Chi so BMI " << bmi << endl;
		cout << " Tinh trang : Binh thuong ";
	}
   return 0;	
}