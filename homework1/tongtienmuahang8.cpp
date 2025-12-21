//8. Tổng tiền  mua hàng 
//Một khách hàng trong một cửa hàng mua 5 món đồ. Giá của các món đồ như sau:  
//− Giá của món đồ thứ nhất = 15.59 đô la 
//− Giá của món đồ thứ hai = 24.59 đô la 
//− Giá của món đồ thứ ba = 6.59 đô la 
//− Giá của món đồ thứ tư = 12.59 đô la 
//− Giá của món đồ thứ năm = 3.59 đô la 
//Viết một chương trình lưu giữ giá của năm món đồ này trong năm biến. Hiển thị giá 
//của mỗi món đồ, tổng tạm tính của giỏ hàng, số tiền thuế, và tổng phải trả. Giả sử 
//thuế bán hàng là 7 phần trăm.

//phân tích đề bài
// 1 khách hàng mua 5 món -> trong năm biến
// phải tính : 
// hiển thị -> giá mỗi món ->tổng tạm tính giỏ hàng( chưa có thuế ) -> số tiền thuế -> tổng phải trả (đã có thuế) ;
// thuế bán hàng 7%

// khai báo biến : mommot , monhai , monba , monbon , monnam ;

//phép tính : 
// khai báo gia mỗi món
// tongtamtronggiohang = mommot + monhai + monba + monbon + monnam;
// sotienthue = tongtamtronggiohang * (7.0/100) ;
// tongphaitra = tongtamtronggiohang + sôtienthue ;
// in ra màn hình 

#include <iostream>
using namespace std ;
int main (){
	// b1 : khai báo biến 
	float tongtamtronggiohang , sotienthue ,tongphaitra ;
	float mommot = 15.59 , 
	      monhai = 24.59 , 
		  monba = 6.59, 
		  monbon = 12.59 , 
		  monnam = 3.59 ;
	// b2 : tính tổng tạm tính trong giỏ hàng 	  
	tongtamtronggiohang = mommot + monhai + monba + monbon + monnam;
	// b3 : tính tiền thuế 
	sotienthue = tongtamtronggiohang * (7.0/100) ;
	// b4 : tính tổng tiền phải trả 
	tongphaitra = tongtamtronggiohang + sotienthue ;
	
	cout << " Tong tam tinh cua gio hang la : "<< tongtamtronggiohang << endl;
	cout << " So tien thue la : "<< sotienthue << endl ;
	cout << " Tong tien phai tra la : " <<tongphaitra << endl ;
	
	return 0;
	
	
}

 