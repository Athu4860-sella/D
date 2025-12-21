/* Thue bán hàng (Bat buoc) 
Viet m?t chýõng tr?nh tính t?ng thu? bán hàng trên m?t gi? hàng 95 ðô. Gi? s? thu? bán 
hàng c?a m?t ti?u bang là 4 ph?n trãm, và thu? bán hàng cua qu?n là 2 phan trãm. 
*/

//tinh tong thue  ban hang tren mot gio hang 95 do 
// thue mot tieu bang : 4%
// thue ban hang : 2%
//gia hang 95 do
//tinh các gia tri : thue tieu bang = 95.0 * 0.04 , thue quan = 95.0 * 0.02  , tong tien thue = thue tieu bang + thue quan;
// in ra man hinh 

#include <iostream> 
using namespace std;
int main (){
	float Thuetieubang , Thuequan , Tongtienthue ;
	
	Thuetieubang = 95.0 * 0.04 ;
	Thuequan = 95.0 * 0.02 ;
	Tongtienthue = Thuetieubang + Thuequan ;
	
	cout << "Thue tieu bang la:" << Thuetieubang << endl;
	cout << "Thue quan la:" << Thuequan << endl;
	cout << "Tong tien thue la :" << Tongtienthue << endl;
	return 0; 
	 
} 
