/*
5.Hóa đơn nhà hàng 
Viết một chương trình tính thuế và tip trên một hóa đơn nhà hàng cho vị khách quen 
với số tiền phải trả cho bữa ăn là 88.67 đô. Thuế là 6.75 phần trăm chi phí bữa ăn. 
Tiền tip là 20 phần trăm tổng tiền sau khi cộng thêm thuế. Hiển thị chi phí bữa ăn, 
số tiền thuế, số tiền tip, và tổng hóa đơn ra màn hình. 
*/
// tính toán xử lí : viết chương tinh thuế và tip 
// số tiền phải trả sau bữa ăn : 88.67 đô 

//thục tế của bài là : chi phí bữa ăn này là 88.67 đô ( chưa tính tiền thuế  + và + tiền tip)
// phân tích phép toán :
//hãy khai báo biến 
// B1:
// Tiền thuế : chi phí bữa ăn * Thuế 
// tổng tiền sau khi cộng thuế : tiền thuế + chi phí bữa ăn 

// b2 : 
// Tiền tip : chi phí bữa ăn * tiền tip 

// b3 : 
// tổng chi phí của bữa ăn : chi phí bữa ăn + tiền thuế + tiền tip 

//in ra màn hình 

#include <iostream>
using namespace std;
int main (){
	// khai báo biến 
	float tienthue , tongtiensaucongthue , tientip , tongchiphi;
	// b1
	
	tienthue = 88.67 * (6.75/100) ;
	tongtiensaucongthue = 88.67 + tienthue ;
	
	//b2 
	tientip =  tongtiensaucongthue * (20.0/100) ;
	
	//b3 
	tongchiphi = 88.67 + tienthue + tientip ;
	
	cout << " tien thue la : " << tienthue << endl;
	cout << " tong tien sau cong thue la : " << tongtiensaucongthue << endl ;
	cout << " tien tip la :" << tientip << endl;
	cout << " tong chi phi la : " << tongchiphi << endl;
	return 0;
	
	
}

