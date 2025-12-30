//17. Cá nhân tốt nhất
//Viết chương trình yêu cầu nhập tên vận động viên nhảy sào, ngày thi đấu, chiều cao
//nhảy (được tính bằng mét) của 3 vận động viên có thành tích tốt nhất. Sau đó chương
//trình sẽ hiển thị danh sách theo thứ tự thành tích đạt được

// phân tích đê bài 

// viết -> nhập -> tên vận động viên nhảy sao
//              -> ngày thi đấu 
//              -> chiều cao nhảy (m) => 3 người thành tốt nhất 

// hiện thị danh sách thứ tự thành tích 
// xác thực đầu vao 
// -> chấp nhân ( <2.0 m -> < 5.0 m )-> chiều cao 

// điều kiện :
// so sánh chiều cao nhảy -> nhảy càng cao -> thành tích tốt 

#include <iostream>
#include <string>
using namespace std;
int main (){
	//b1 : khai báo biến 
	double chieucao1 , chieucao2 , chieucao3 ;
	string ngaythidau1 , ngaythidau2 , ngaythidau3  ;
	string tenvandongvien1 , tenvandongvien2 , tenvandongvien3 ;
	
	//b2 : nhập dữ liệu
	cout << " Nhap ten van dong vien nhay sao 1 : ";
	getline (cin,tenvandongvien1) ;
	cout << " Nhap ngay thi dau : ";
	getline (cin ,ngaythidau1);
	cout << " Nhap chieu cao nhay 1 (m) : ";
	cin >> chieucao1;
	// điều kiện chiêu cao 
	if((chieucao1 < 2.0) || (chieucao1 > 5.0)){
		cout << " Loi : chieu cao khong hop le ! "<< endl;
		return 0;
	}
	
	cin.ignore(); // bỏ ký tự ENTER
	
	cout << "\nNhap ten van dong vien nhay sao 2 : ";
	getline (cin,tenvandongvien2) ;
	cout << " Nhap ngay thi dau : ";
	getline (cin ,ngaythidau2);
	cout << " Nhap chieu cao nhay 2 (m) : ";
	cin >> chieucao2 ;
	
	// điều kiện chiêu cao 
	if((chieucao2 < 2.0) || (chieucao2 > 5.0)){
		cout << " Loi : chieu cao khong hop le ! "<<  endl;
		return 0;
	}
	
	cin.ignore(); // bỏ ký tự ENTER
	
	cout << "\nNhap ten van dong vien nhay sao 3 : ";
	getline (cin , tenvandongvien3) ;
	cout << " Nhap ngay thi dau : ";
	getline (cin , ngaythidau3) ;
	cout << " Nhap chieu cao nhay 3 (m) : ";
	cin >> chieucao3 ;
	// điều kiện chiêu cao 
	if((chieucao3 < 2.0) || (chieucao3 > 5.0)){
		cout << " Loi : chieu cao khong hop le ! "<< endl;
		return 0;
	}
	
	cin.ignore(); // bỏ ký tự ENTER
	
	// b3: điều kiện so sánh chiều cao 
	
	cout << " \n====Ket qua xep hang==== \n " ;
	
	if((chieucao1 >= chieucao2) && (chieucao1 >= chieucao3)){
		cout << " Hang 1 " << tenvandongvien1 << " - " << chieucao1 << " m "<< endl;
		
		if(chieucao2 >= chieucao3){
		cout << " Hang 2 " << tenvandongvien2 << " - " << chieucao2 << " m "<< endl;
		cout << " Hang 3 " << tenvandongvien3 << " - " << chieucao3 << " m "<< endl;
	}
	   else {
	   	cout << " Hang 2 "<< tenvandongvien3 << " - " << chieucao3 << " m "<< endl;
		cout << " Hang 3 "<< tenvandongvien2 << " - " << chieucao2 << " m "<< endl;
	   } 
}
    else if((chieucao2 >= chieucao1) && (chieucao2 >= chieucao3)){
		cout << " Hang 1 " << tenvandongvien2 << " - " << chieucao2 << " m "<< endl;
		
		if(chieucao1 >= chieucao3){
		cout << " Hang 2 " << tenvandongvien1 << " - " << chieucao1 << " m "<< endl;
		cout << " Hang 3 " << tenvandongvien3 << " - " << chieucao3 << " m "<< endl;
	}
	   else {
	   	cout << " Hang 2 " << tenvandongvien3 << " - " << chieucao3 << " m "<< endl;
		cout << " Hang 3 " << tenvandongvien1 << " - " << chieucao1 << " m "<< endl;
	   } 
}

    else{
		cout << " Hang 1 " << tenvandongvien3 << " - " << chieucao3 << " m "<< endl;
		
		if(chieucao1 >= chieucao2){
		cout << " Hang 2 " << tenvandongvien1 << " - " << chieucao1 << " m "<< endl;
		cout << " Hang 3 " << tenvandongvien2 << " - " << chieucao2 << " m "<< endl;
	}
	   else {
	   	cout << " Hang 2 " << tenvandongvien2 << " - " << chieucao2 << " m "<< endl;
		cout << " Hang 3 " << tenvandongvien1 << " - " << chieucao1 << " m "<< endl;
	   } 
}

	return 0;
	
	
	
}
