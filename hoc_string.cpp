//Coded by Tong Quang Nam 09/09/2022
//learn string version 2.0.4

#include<iostream>
#include<cstring>

// -length()
// -size()
// -truy cap ki tu cua xau thong qua chi so 
// -cin,getline
// -noi hai chuoi vs nhau bang cach su dung dau cong "+"
// -a.compare(b) de so sanh hai chuoi ki tu tra ve 1 neu a lon hon tra ve 0 neu bang tra ve -1 neu be hon
// -a.substr(vi tri can cat,so ki tu can cat(neu khong co thi mac dinh cat tu vi tri do den cuoi cung))
// -stoll(a string) bien thanh 1 so nguyen
// -to_string chuyen so nguyen thanh chuoi ki tu 
// -stringstream ss(name_of_string)
// -string thuc chat la 1 vector<char> co bo sung them 1 so ham va 1 so thuoc tinh nen no co toan bo tinh chat cua mot vector nhu ham size(),
//      push_back,toan_tu []
// streamstring name_of_ss(name of the string) #include<sstream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	cout<<s<<"\n";
	//cin.ignore();// mac dinh la xoa 1 ki tu khi gap dau enter,toi da co the xoa 32767 ki tu 
	// cin.ignore dung trong truong hop tranh bi troi lenh khi dung getline
	
	string n;
	getline(cin,n);
	cout<<n<<"\n";
	string tongquangnam;
	//cin.ignore();
	getline(cin,tongquangnam);
	cout<<tongquangnam.size()<<endl;
	
	return 0;
}

