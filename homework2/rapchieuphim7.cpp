//7. Rạp chiếu phim 
//Một rạp chiếu phim được giữ lại 20% tổng doanh thu thu được từ việc bán vé. Phần 
//còn lại chuyển cho nhà phân phối phim. Viết chương trình tính số tiền cho phòng vé 
//và nhà phân phối. Chương trình cần yêu cầu nhập tên phim, số vé cho người lớn và 
//số vé cho trẻ em đã được bán.  
//Biết:  - Giá vé cho người lớn là 10 đô la;  
//- Giá vé cho trẻ em là 6 đô la.

//phân tích đề bài:
// rạp chiếu phim giữ : 20 %
// nhà phân phối :80% 
// yêu càu :
//- nhập tên phim 
//- số vé người lớn  -> giá : 10 đô la
//-       trẻ nhỏ -> giá :  6 đô la

//cách tính:
// ta tính tổng doanh thu về số lượng người lớn hay trẻ nhỏ để biếtn đc bao nhiêu người xem rồi mới nhân cho phần trăm
//mà rạp chiếu phim hay nhà phân phối nhận đc
// khai báo biến : tongdoanhthu , venguoilon ,vetreem , 
// tongdoanhthu = ( venguoilon * 10 ) + ( vetreem * 6 );

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main (){
	//b1 : khai báo biến
	string nhaptenphim  ; 
	float rapchieuphim = 0.2 ,
	      nhaphanphoi = 0.8 ;
		  
	float  tongdoanhthu , venguoilon ,vetreem , sotienphongve , sotiennhaphanphoi ;
	
	// nhập tên phim 
	cout << " Nhap ten phim cua ban la : ";
	getline (cin,nhaptenphim) ;
	//b2 : nhập dữ liễu 
	cout << " So luong ve nguoi lon la : ";
	cin >> venguoilon;
	
	cout << " So luong ve tre em la : ";
	cin >> vetreem;
	
	//b3 : tính tổng doanh thu 
	 tongdoanhthu = ( venguoilon * 10 ) + ( vetreem * 6 );
	 
	//b4 : tính số tiền phòng vé , nhà phân phói 
	sotienphongve = tongdoanhthu * rapchieuphim;
	sotiennhaphanphoi = tongdoanhthu * nhaphanphoi;
	
	cout << fixed << setprecision(2);
	cout << " Tong doanh thu cua rap chieu phim la : " << sotienphongve << endl;
	cout << " Tong doanh thu cua nha phan phoi la : " << sotiennhaphanphoi << endl;
	
	return 0;
}