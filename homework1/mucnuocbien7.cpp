//7. Mức nước biển   
//Giả sử mức nước biển hiện tại dâng lên khoảng 1.5 mm mỗi năm, viết một chương 
//trình hiển thị: 
//− Số mm sẽ tăng lên so với mức nước biển hiện tại sau 5 năm. 
//− Số mm sẽ tăng lên so với mức nước biển hiện tại sau 7 năm. 
//− Số mm sẽ tăng lên so với mức nước biển hiện tại sau 10 năm.

// khai báo biến : mucnuocbien , tang5nam , tang7nam , tang10nam ;
// phép tính : 
// sau5nam = mucnuocbien * tang5nam ;
// sau7nam = mucnuocbien * tang7nam ;
// sau10nam = mucnuocbien * tang10nam ;
//in ra màn hình 

#include <iostream>
using namespace std ;
int main (){
	//b1 : khai báo biến
	double sau5nam , sau7nam , sau10nam;
	double mucnuocbien = 1.5 , 
	       tang5nam = 5,
		   tang7nam = 7,
		   tang10nam = 10  ;
		   
	//b2 : tính toán 
	sau5nam = mucnuocbien * tang5nam ;
	sau7nam = mucnuocbien * tang7nam ;
    sau10nam = mucnuocbien * tang10nam ;
    
   cout << " sau 5 nam la : " << sau5nam << endl;
   cout << " sau 7 nam la : " << sau7nam << endl;
   cout << " sau 10 nam la :" << sau10nam << endl;
   
    return 0;
	
}