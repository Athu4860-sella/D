//18. Tiêu thụ nước tăng lực 
//Một công ty nước ngọt gần đây đã khảo sát 16,500 khách hàng của mình và thấy 
//rằng khoảng 15% trong số những người được khảo sát mua một hoặc nhiều nước 
//tăng lực mỗi tuần. Trong số những khách mua nước tăng lực, có khoảng 58% trong 
//số họ thích nước tăng lực có vị cam. Viết chương trình hiển thị như sau: 
//Số lượng khác hàng gần đúng trong cuộc khảo sát mua một hoặc nhiều nước tăng 
//lực trong mỗi tuần. 
//Số lượng khách hàng gần đúng trong cuộc khảo sát thích nước tăng lực có vị cam. 

//phân tích bài toán :
// khảo sát : 16,500 khách hàng
//            15% mua một /nhiều nước tăng lực mỗi tuần 
//            58% thích tăng lực cam 
// viết -> tính toán :
//=> số lượng khác -> ? -> mua  1 / nhiều nước tăng lực 
//=> số lượng khách -> ? -> thích vị cam 

//cách làm :
// khai báo biến : nuocvicam , cacnuocvikhac ,khachhang ,soluongkhac ,soluongkhach ;
// tính toán : soluongkhac = khachhang * cacnuocvikhac ;
//             soluongkhach = soluongkhac * nuocvicam; (trong số lương khách thích nước khác thì có 58% người thích cam , nó ở chung trong 	trong phần số lượng khách khác .)

#include <iostream>
using namespace std ;
int main (){
	//b1 : khai báo biến 
	double soluongkhac ,soluongkhach ;
	float  nuocvicam = 0.58 , 
	       khachhang =  16500  ,
	       cacnuocvikhac = 0.15;
	       
	       
	//b2 : tính toán 
	soluongkhac = khachhang * cacnuocvikhac ;
	soluongkhach = soluongkhac * nuocvicam;
	
	cout << " So luong mua mot hoac nhieu nhieu tang luc la : " << soluongkhac << endl;
	cout << " So luong khach thich nuoc vi nuoc cam la : " << soluongkhach << endl;
	
	return 0;
	
}