//2. Vị trí ngồi trên sân vận động 
//Có 3 loại ghế ngồi trên một sân vận động. Với một môn bóng, các ghế hạng A với 
//giá 15 đô la, các ghế hạng B có giá 12 đô la, và các ghế hạng C có giá là 9 đô la. 
//Viết chương trình yêu cầu người dùng nhập số lượng vé cho mỗi hạng ghế và hiển 
//thị tổng số tiền thu được từ các vé được bán ra. Hãy định dạng số tiền ở dạng kí hiệu 
//fixed-point, với độ chính xác 2 số thập phân đằng sau dấu phẩy, và luôn hiển thị dấu 
//phẩy thập phân trong mọi trường hợp.

//phân tích đề bài
// 3 loại ghế : -> ghê hạng A -> giá 15 đo la 
//              -> ghế hạng B -> giá 12 đo la 
//              -> ghế hạng C -> giá 9 đo la 
// viết chương trình : -> nhập số lượng vé -> mỗi hạng ghế
//                                         -> tổng tièn thu các vé 
//                                         -> hiện thị 2 số thập phận sau dấu phẩy ->luôn hiển thị dấu trong mọi trường hợp 
// hiện thị dạng -> số tiền ở dạng kí hiệu fixed-point -> 2 số thập phân -> luôn hiênt thi dấu thập phân

// cách tinh: 
// tìm hiểu số lượng vé mỗi hạng ghế : ( veA * giaA ) + ( veB * giaB ) + ( veC * giaC );=> nó cũng là công thức tính tổng 
// tiền các vé 

#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	//b1 : khai báo biến 
	int veA ,veB, veC;
	double giaA = 15 ,
	    giaB = 12 ,
		giaC = 9;
	
	double tongtienve;
	
	//b2 : nhập gia trị
	cout << " So luong ve A la : ";
	cin >> veA;
	
	cout << " So luong ve B la : ";
	cin >> veB;
	 
	cout << " So luong ve C la : ";
	cin >> veC ;
	
	tongtienve = ( veA * giaA ) + ( veB * giaB ) + ( veC * giaC );
	
	cout << fixed << setprecision (2) ;
	cout << " Tong tien ve la : " << tongtienve << endl;
	
	return 0;
	
}