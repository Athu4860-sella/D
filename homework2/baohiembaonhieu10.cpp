//10. Bảo hiểm bao nhiêu? 
//Nhiều chuyên gia tài chính khuyên rằng chủ sở hữu bất động sản nên bảo hiểm ngôi 
//nhà hoặc tòa nhà của họ ít nhất 80% số tiền mà nó sẽ chi phí để thay thế cấu trúc. 
//Viết một chương trình yêu cầu người dùng nhập chi phí thay thế của một tòa nhà, 
//sau đó hiển thị số tiền bảo hiểm tối thiểu mà họ nên mua cho tài sản đó.

//phân tích đề bài :
// bảo hiểm ngôi nhà hoặc tòa nha : 80%
//yêu cầu : 
//- nhập chi phí thay thế 
//- hiển thị số tiền bảo hiểm cần mua 

//cách làm ;
//khai báo biến : baohiemcanmua , chiphithaythe;
// baohiemcanmua = chiphithaythe * 0.8 

#include <iostream>
using namespace std ;
int main (){
	//b1: khai báo biến 
	double baohiemcanmua , chiphithaythe;
	
	//b2 : nhập dữ liệu 
	cout << " Nhap chi phi thay the la : " ;
	cin >> chiphithaythe;
	
	//b3 : tính toán bảo hiểm cần mua 
	 baohiemcanmua = chiphithaythe * 0.8 ;
	cout << " Bao hiem toi thieu la : " << baohiemcanmua << endl;
	
	return 0;
}