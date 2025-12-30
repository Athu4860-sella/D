//Viết chương trình yêu cầu người dùng nhập tháng và năm, cho biết tháng đó có bao
//nhiêu ngày. Sử dụng tiêu chí sau để xác định năm nhuận:
//- Xác định xem năm có chia hết cho 100 hay không. Nếu đó là một năm nhuận nếu
//và chỉ nếu năm đó chia hết cho 400. Ví dụ, 2000 là năm nhuận nhưng 2100 không
//phải năm nhuận.
//- Nếu năm không chia hết cho 100 thì đó là năm nhuận nếu và chỉ nếu năm đó chia
//hết 4. Ví dụ, năm 2008 là năm nhuận nhưng năm 2009 không phải năm nhuận.
//Dưới đây và ví dụ chương trình trình chạy:
//Nhập vào 1 tháng (1-12): 2 [Enter]
//Nhập vào 1 năm: 2008 [Enter]
//Số ngày: 29

// phân tích đề bài
// yêu cầu -> nhập : tháng 
//                 : năm   || => tháng đó có bao nhiêu ngày 

// tiêu chí xác định năm nhuận:
// chia hết cho 100 và 400 thì đó là năm nhuận 
// ko chia hết cho 100 và chia 4 => thì đó là năm nhuận 

#include <iostream>
using namespace std ;
int main(){
	//b1 : khai báo biến 
	int thang , nam ;
	bool namnhuan = false ; // Vì chưa kiểm tra gì cả, thì ta CHƯA CÓ LÝ DO để nói năm đó là năm nhuận.
                            // Chưa chứng minh được là đúng → coi là sai trước
//	                     // nếu ko gán :    Biến chưa có giá trị
//👉                                         Có thể là true hoặc false ngẫu nhiên
//                                          Chương trình chạy sai


	//b2 : nhập dữ liệu
	cout << " Nhap so thang : ";
	cin >> thang;
	
	cout << " Nhap so nam : ";
	cin >> nam;
	
	//b3 : xác định năm nhuận
	if( nam % 100 == 0 ){
		if ( nam % 400 == 0 )
		namnhuan = true ;
	}
	else {
		if( nam % 4 == 0)
		namnhuan = true ; 
		}
		
	//b4 : xác định sso ngày trong tháng 
	switch (thang){
		case 1 : case 3 : case 5 : case 7 : case 8 : case 10 :  case 12 :
		cout << " 31 ngay ";
		break ;
		
		case 4 : case 6 : case 9 : case 11 :
		cout << " 30 ngay ";
		break ;
		
		case 2 :
			if(namnhuan)
		    cout << " 29 ngay "; // ko có dấu {} vì cần 2 câu lệnh trở lên trong đk kiện mới cần dấu {}
		    
		    else 
		    cout << " 28 ngay ";
		break ;
	}
		
	return 0;
}
	
	