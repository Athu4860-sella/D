//13. Giá một bo mạch 
//Một công ty điện tử bán một bo mạch với lợi nhuận là 35 phần trăm. Viết chương 
//trình tính toán giá bán của một bo mạch có chi phí là 14.95 đô la. Hiện kết quả lên 
//màn hình.

//phân tích bai toán 
// bán 1 bo mạch chủ lợi nhuận : 35 %
// viết -> tính toán -> giá bán 1 bo : 14.95 đô ( chưa tính lãi -> vì thế ta cần tính cả lãi nữa )
// cần tìm tiền lãi và giá bán cuối cùng của nó 

// cách tính:
//khai báo biến : tienlai , loinhuan , giaban ,chiphisanxuat ;
//tính toán :
// tienlai = chiphisanxuat  * loinhuan;
//gia ban = tienlai + chiphisanxuat ;

#include <iostream>
using namespace std ;
int main (){
	//b1 : khai báo biến :
	float  loinhuan = 0.35 ,
	       chiphisanxuat = 14.95  ;
	float tienlai , giaban ;
	
	//b2 : tính toán 
	tienlai = chiphisanxuat * loinhuan;
	giaban = tienlai + chiphisanxuat ;
	
	cout << " tien lai la : " <<tienlai << endl ;
	cout << " gia ban la : " << giaban << endl;
	
	return 0;
	
	
}
