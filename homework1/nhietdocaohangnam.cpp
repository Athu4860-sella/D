//19. Nhiệt độ cao hàng năm 
//Nhiệt độ cao trung bình tháng 7 là 85 độ F ở New York City, 88 độ F ở Denver, và 
//106 độ F ở Phoenix. Viết chương trình tính toán và báo cáo nhiệt độ trung bình mới 
//trong tháng 7 của các thành phố nếu nhiệt độ ở mỗi thành phố tăng lên 2%

//phân tích đề bài 
// nhiệt đo TB tháng 7 : ->  New York City : 85 độ F 
//                       -> Denver :   88 độ F 
//                      -> Phoenix : 106 độ F
// viết -> tính toan:
// => báo cáo nhiệt độ TB tháng 7 
// => Nếu nhiệt độ mỗi thành phố -> tăng 2% 

//cách tính : Nhiệt đọ mới = Nhiệt độ cũ * (1 + 0.02 ) ;-> ( 1 đại diện 100% giá trị ban đầu <=> VD : 100% = 85 độ F)
//khai báo biến :  NewYorkCity ,Denver , Phoenix , nhietdotang , domoi , docu ;
// tính toán : domoiNewYorkCity = NewYorkCity * ( 1 + nhietdotang );
//             domoiDenver =  Denver * ( 1 + nhietdotang );
//            domoiPhoenix = Phoenix  * ( 1 + nhietdotang );
// in ra kq

#include <iostream>
using namespace std;
int main(){
	//b1: khái báo biến 
	float domoiNewYorkCity ,domoiDenver , domoiPhoenix;
	float NewYorkCity = 85.0 ,
	      Denver = 88.0 ,
		  Phoenix = 106.0 ,
		  nhietdotang = 0.02 ;
		  
	//b2 : tính toán
	domoiNewYorkCity = NewYorkCity * ( 1 + nhietdotang ); 
	domoiDenver =  Denver * ( 1 + nhietdotang );
	domoiPhoenix = Phoenix  * ( 1 + nhietdotang );
	
	cout << " Nhiet do moi cua NewYorkCity la : " << domoiNewYorkCity << " do F "<< endl;
	cout << " Nhiet do moi cua Denver la : " << domoiDenver << " do F "<< endl;
	cout << " Nhiet do moi cua Phoenix la : " << domoiPhoenix << " do F "<< endl;
	
	return 0;
	
	
	
}

