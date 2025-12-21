//11. Quãng đường với mỗi bình xăng (Bắt buộc) 
//Một chiếc xe với một bình xăng 20 gallon trung bình 23.5 dặm cho mỗi gallon khi 
//lái xe trong thành phố, và 28.9 dặm cho mỗi gallon khi lái xe trên đường cao tốc. 
//Viết chương trình tính toán và hiển thị quãng đường ô tô đi được với một bình xăng 
//khi di chuyển trên thị trấn và khi di chuyển trên đường cao tốc

//phân tích bài toán 
//1 chiếc xe : 20 gallon xăng
// TB di chuyển : 23.5 dặm -> thành phố 
//                28.5 dặm -> đường cao tốc 
// viết -> tính toán : quãng đường ô tô di chuyển thành phố (thị trấn )-> di chuyển trên đường cao tốc => ( đối với bình xăng )

//cách tính : 
//khai báo biến : quangduongthanhpho , quangduongcaotoc , gallonxang , quangduong;
// quangduong = quangduongthanhpho * gallonxang ; =>  đường thành phố 
// quangduong = quangduongcaotoc * gallonxang ; => đường cao tốc 

#include <iostream> 
using namespace std ;
int main () {
	//b1 : khai báo biến 
	double thanhpho ,duongcaotoc ;
	double quangduongthanhpho = 23.5, 
	       quangduongcaotoc = 28.9 ,
		   gallonxang = 20 ;
		   
	//b2 : tính toán 
	thanhpho = quangduongthanhpho * gallonxang ;
	duongcaotoc  = quangduongcaotoc * gallonxang ;
	
	cout << " Quang duong di chuyen thanh pho la : "<< thanhpho << endl;
	cout << " Quang duong di chuyen duong cao toc la : " << duongcaotoc << endl;
	
	return 0;
	
}


