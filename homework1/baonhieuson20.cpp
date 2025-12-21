//20. Bao nhiêu sơn 
//Một nhãn hiệu sơn quảng cáo rằng sơn của họ có thể phủ được 340 feet vuông trên 
//mỗi gallon. Viết chương trình xác định và báo cáo xấp xỉ số lượng gallon sơn cần 
//thiết để sơn cho hai lớp áo trên hàng rào bằng gỗ cao 6 feet và dài 100 feet. 

// phân tích đề bài : 
// sơn có thể phủ : 340 feet vuông/ gallon 
// viết -> tính toán : báo cáo xâp xỉ số lượng gallon 
//                     Cần sơn 2 lớp
//                     hàng rào : cao -> 6 feet 
//                                dài -> 100 feet 

//cách tính :
// diện tích HCN : CD * CC ;
// cần sơn 2 lớp : diện tích HCN * 2 ;
// tính số lượng gallon : cần sơn 2 lớp / lop sơn có thể phủ  ;

// tính toán : 
// khai bao biến : dientich , sonhailop , soluonggallon ;
// dientich = cao * dai ;
// sonhailop = dientich * 2 ;
// soluonggallon = sonhailop / sonphu ;

#include <iostream >
using namespace std ;
int main (){
	//b1 : khai báo biến 
	float cao = 6 , 
	     dai = 100 , 
		 sonphu = 340;
	float dientich , sonhailop , soluonggallon ;
	
	//b2 : tính toán 
	dientich = cao * dai ;
	sonhailop = dientich * 2 ; // cần sơn 2 lớp -> ta nhân 2 
	soluonggallon = sonhailop / sonphu ;
	
	cout << " Dien tich HCN la : "<< dientich << endl;
	cout << " So luong can son cho 2 lop la :" << sonhailop << endl;
	cout << " so luong gallon xap xi la : " <<soluonggallon << endl;
	
	return 0;
}