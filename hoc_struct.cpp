#include<iostream>

using namespace std;

struct sinhvien{
	string hoten;
	int tuoi;
	int chieucao;
	string nganh;
};

int main(){
	sinhvien x;
	cout<<"nhap tuoi:"<<endl;
	cin >> x.tuoi;
	cout<<"nhap chieu cao(cm)."<<endl;
	cin >> x.chieucao;
	cin.ignore();
	cout<<"nhap ho ten sinh vien."<<endl;
	getline(cin,x.hoten);
	cout<<"dien thong tin chuyen nganh dang theo hoc"<<endl;
	getline(cin,x.nganh);
	cout<<"ho ten sinh vien la:"<<x.hoten<<"\nhoc nganh:"<<x.nganh<<"\nsinh nam:"<<x.tuoi<<"\nchieu cao:"<<x.chieucao;
}
