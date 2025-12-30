//8. Trộn màu
//Ba màu cơ bản trong một chế độ màu nào đó là red, blue, và yellow. Khi trộn từng cặp
//2 màu ta sẽ có:
//− red + blue → purple (màu tím)
//− red + yellow → orange (màu cam)
//− blue + yellow → green (màu xanh lá cây)
//Viết chương trình yêu cầu nhập tên 2 màu cơ bản, in ra màu kết quả khi pha trộn chúng.
//Nếu người dùng nhập không đúng màu cơ bản thì thông báo lỗi

//phân tích đề bài 
//Đây là bài so sánh chuỗi + điều kiện

// yêu cầu : nhập -> 2 màu cơ bản => in ra kết quả 
//           sai -> thì thông báo lỗi 

#include <iostream>
#include <string>
using namespace std;
int main (){
	//b1: khai báo biến 
	string mau1 , mau2 ;
	
	//b2 : nhập dữ liệu
	cout << " Nhap mau thu nhat : ";
	cin >> mau1 ;
	
	cout << " Nhap mau thu hai : ";
	cin >> mau2 ;
	
	// b3: xét điều kiện
	 // ! gọi là toán tử phủ định (NOT) = KHÔNG / NGƯỢC LẠI -> ko nhất thiết sẽ là cố định
	if(( mau1 != "red" && mau1 != "blue" && mau1 != "yellow") || ( mau2 != "red" && mau2 != "blue" && mau2 != "yellow")){
		cout << " Loi : Mau nhap vao khong hop le ";
	}
	
	// kiểm tra
    else {
    	if (( mau1 == "red" && mau2 == "blue" ) || (mau1 == "blue" && mau2 == "red")){
		cout << " Mau ta co : purple ";
	}
      else if (( mau1 == "red" && mau2 == "yellow" ) || (mau1 == "yellow" && mau2 == "red")){
		cout << " Mau ta co : orange ";
	}
	
	  else if (( mau1 == "blue" && mau2 == "yellow" ) || (mau1 == "yellow" && mau2 == "blue")){
		cout << " Mau ta co : green ";
	}
	  else {
		cout << " Hai mau giong nhau , khong tao mau moi ";
	}
	  	
   }
	return 0;
	
}