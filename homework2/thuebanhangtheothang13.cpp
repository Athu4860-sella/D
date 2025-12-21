//14. Thuế bán hàng theo tháng
//Một công ty bán lẻ phải nộp một báo cáo thuế bán hàng hàng tháng liệt kê doanh thu 
//trong tháng và số thuế bán hàng đã thu được. Viết một chương trình yêu cầu nhập 
//tháng, năm và tổng số tiền thu được tại máy tính tiền (tức là doanh thu cộng với thuế 
//bán hàng). Giả sử thuế bán hàng của tiểu bang là 4 phần trăm, và thuế bán hàng của 
//quận là 2 phần trăm. 
//Nếu biết tổng số tiền thu được và tổng số thuế bán hàng là 6 phần trăm, thì số tiền 
//bán sản phẩm có thể được tính như sau:
//s = T / 1.06 
//Trong đó, S là doanh thu bán sản phẩm, và T là tổng thu nhập (doanh thu bán sản 
//phẩm cộng với thuế bán hàng). 
//Một báo cáo của chương trình có thể tương tự như dưới đây:
//Month: Oct\ber
//Total Collected: $ 26572.89
//Sales: $ 26572.89
//Sales: $ 25068.76
//County Sales Tax: $ 501.38
//StateSalesTax: $ 501.38
//StateSalesTax: $ 1002.75
//Total Sales Tax: $ 1504.13


//phân tích đề bài :
// công ty -> bán lẻ nộp báo cáo tháng
//         -> số thuế bán đc 
// viét -> chương trình -> nhập ->tháng 
//                              -> năm 
//                              -> tông sô tiền thu đc ( doanh thu + thuế bán hàng )

// cách làm :
// tinh thuế tiểu bang , tiểu quận , tổng thu nhập 
//s = T / 1.06 -> công 

#include <iostream>
#include <iomanip>
#include <string>
using namespace std ;
int main (){
	//b1 : khai báo biến :
	double tieubang = 0.04 , 
	       tieuquan = 0.02 ,
	       tongsothuebanhang = 0.06;
	double tongthunhap , doanhthuban , nam , thuetieubang , thuetieuquan ;
	string thang;
	// b2 : nhập dữ liệu 
	cout << " Nhap so thang la : ";
	getline (cin,thang);
	
	cout << " Nhap so nam la : ";
	cin >> nam;
	
	cout << " Nhap tong tien thu nhap la : ";
	cin >> tongthunhap;
	
	// b3 : tính toán 
	doanhthuban = tongthunhap / 1.06;
	thuetieubang = doanhthuban * tieubang ;
	thuetieuquan = doanhthuban * tieuquan ;
	tongthunhap = thuetieubang + thuetieuquan;
	
	//b4 : định dạng 
	cout << fixed << setprecision(2);
	cout << "\nThang : " << thang << " " << nam << endl;
	cout << "---------------------------- \n ";
	//cout << "Tong tien thu nhap la : " << tongthunhap << endl;
	cout << "Doanh thu ban san pham la : " << doanhthuban << endl;
	cout << " Thue tieu bang la : " << thuetieubang << endl;
	cout << " Thue tieu quan la : " << thuetieuquan << endl;
	cout << " Tong thu nhap la : " << tongthunhap << endl;
	
	return 0;
	
	
}