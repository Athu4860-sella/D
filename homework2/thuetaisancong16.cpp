//16. Thuế tài sản công dân cao tuổi 
//Quận Madison cung cấp một khoản miễn thuế chủ nhà $ 5,000 cho những người cao 
//tuổi của nó. Ví dụ: nếu ngôi nhà của một người cao tuổi được định giá là 158.000
//đô la, giá trị được đánh giá của nó sẽ là 94.800 đô la, như đã giải thích ở trên. Tuy 
//nhiên, anh ta sẽ chỉ trả thuế trên 89.800 đô la. Với mức thuế năm ngoái là 2,64 đô la 
//cho mỗi 100 đô la giá trị được đánh giá, thuế tài sản sẽ là 2.370,72 đô la. Ngoài việc 
//giảm thuế, công dân cao tuổi được phép trả thuế tài sản của họ thành bốn lần như 
//nhau. Khoản thanh toán hàng quý đến hạn cho tài sản này sẽ là $ 592,68. Viết một 
//chương trình yêu cầu người dùng nhập giá trị thực của một phần tài sản và thuế suất 
//hiện hành cho mỗi $ 100 giá trị được đánh giá. Sau đó, chương trình sẽ tính toán và 
//báo cáo mức thuế bất động sản hàng năm mà một chủ nhà cao cấp sẽ phải trả cho 
//bất động sản này và hóa đơn thuế hàng quý sẽ là bao nhiêu. 

//phân tích đề bài
// quận Madison -> cung cấp miễn thuế cho người cao tuổi $500
// nhà cho người cao tuổi  => định gia 158.000 $ -> giá trị đánh giá 94.000 $ 
//(  94.000 / 158.000 = 0.6 -> là giá trị thực <=> 158.000 * 0.6 =  94.000 -> là giá trị đc đánh giá )
// tuy nhiên anh ta -> sẽ chỉ trả 89.800 đô la ( 94.000  - 5,000 = 89.800 => giá trị sau khi miễn thuế )
// Năm ngoái thuế -> 2,64 đô la cho mỗi 100 đô la ( (89.800 / 100 ) * 2,64 = 2.370,72 đô la => là thuế tài sản )
//  ngoài ra công dân cao tuổi đc phép trả thuế -> 4 lần ( 2.370,72  / 4 = 592,68 )-> thuế hàng quý 
// thanh toán hàng quý -> tài san sẽ là $ 592,68

// cahs làm :
// 

//viết -> yêu cầu -> nhập giá trị thực -> tài sản
//                                     -> thuế suất hiện hành mỗi $ 100 giá trị => đánh giá 

//chương trình sẽ báo cáo mức thuế -> bất động sản hằng năm => chu nhà phải trả -> bất động sản 
//                                                                              -> hóa đơn 
//                                                                              -> thuế hàng quý


#include <iostream>
using namespace std;
int main (){
	//b1 : khai báo biên 
	double giatridanhgia ,danhgiagiatri , thuesuat ,thuehangquy , thuehangnam , thuemienthue  ;
	
	// b2: nhập dữ liệu 
	cout << " Nhap gia tri thuc cua tai san : ";
	cin >> danhgiagiatri;
	
	cout << " Nhap thu suat hien hanh moi $100 gia tri : ";
	cin >> thuesuat ;
	
	//b3 : tính toán 
	giatridanhgia = danhgiagiatri * 0.6; // giá trị đuc đánh gia là 60%
	
    thuemienthue = giatridanhgia - 5000 ; // miễn thuế 5000 $ đói với người cao tuổi 
    
    thuehangnam = ( thuemienthue / 100 ) * thuesuat; // tinhs thuế suất hiện hành $100 mỗi giá tri 
    
    thuehangquy = thuehangnam / 4 ; // thuế cho người cao tuôi đc phép trả 4 lần 
    
    //b4 : in ra màn hinh
    cout << " Gia tri duoc danh gia : " << giatridanhgia << endl;
    cout << " Mien thue cho nguoi cao tuoi :  " << thuemienthue << endl;
    cout << " Gia tri thue hang nam : " << thuehangnam << endl;
    cout << " Gia tri thue hang quy : " << thuehangquy << endl;
    
    return 0;
	
	
}
