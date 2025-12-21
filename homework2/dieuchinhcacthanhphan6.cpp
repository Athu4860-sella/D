//6. Điều chỉnh các thành phần (Bắt buộc) 
//Công thức làm bánh với các thành phần như sau: 
//− 1.5 cốc đường 
//− 1 cốc bơ 
//− 2.75 cốc bột 
//Với các phần như trên cho ra 48 chiếc bánh. Bạn hãy viết một chương trình yêu cầu 
//người dùng nhập số lượng chiếc bánh mà họ muốn làm, sau đó hiển thị ra tỉ lệ của 
//các thành phần theo công thức trên để đủ làm được số chiếc bánh mà họ muốn.

//phân tích dê bài :
//cong thúc bánh 
//- 1.5 cốc đường
// − 1 cốc bơ 
// − 2.75 cốc bột 
// => kqua -> ra đc 48 chiếc bánh 

//cách tính
// tile = sobanhmuonlam / 48 ;
// duong = 1.5 * tile;
// bo = 1 * tile;
// bot = 2.75 * tile;
//=> đề bài yêu cầu hiên thị thành phần của làm bánh

#include <iostream>
using namespace std;
int main(){
	//b1 : khai báo biến  
	double tile ,sobanhmuonlam ;
	double  duong = 1.5 ,
	        bo = 1, 
			bot = 2.75  ;
			
    //b2 : nhập dữ liệu 
    
    cout << "So banh muon lam la : ";
    cin >> sobanhmuonlam;
    
    //b3 : tính tỉ lệ 

    tile = sobanhmuonlam / 48 ;
    
    // tỉ lệ thành phần 
    duong = 1.5 * tile;
    bo = 1 * tile;
    bot = 2.75 * tile;
    
    // nhập dữ liệu các thành phần 
    
    cout << " Luong duong can la : " <<duong << " coc " << endl;
    cout << " Luong bo can la : " << bo << " coc " << endl;
    cout << " Luong bot can la : " << bot << " coc " << endl;
    
    return 0;
}
