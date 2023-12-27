#include<bits/stdc++.h>


using namespace std;

//-private
//-public
//-protected
//constructor ham khoi tao 
// co the nap chong constructor
class SinhVien{
	//thuoc tinh va phuong thuc
	private:
		string id,ten,ns;
		double gpa;
	public:
		SinhVien(string name,string ten,string date);
		void xinchao();
		void dihoc();
		
};
//implementation: thuc hien
SinhVien::SinhVien(string name,string ten,string date){
	
}
void SinhVien::xinchao(){
	cout<<"say halo"<<endl;
}
void SinhVien::dihoc(){
	cout<<"di hoc thoi nao!"<<endl;
}
int main(){
	SinhVien x("name","nammeme","namamma");
	x.xinchao();
	x.dihoc();
	return 0;
}
