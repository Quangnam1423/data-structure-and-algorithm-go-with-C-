#include<iostream>
#include<iomanip>

using namespace std;

class SinhVien
{
	//thuoc tinh va phuong thuc...
	private:
		string ten , id , ns;
		double gpa;
	public:
		SinhVien();
		SinhVien(string ten , string id , string ns , double gpa);
		void in();
		void nhap();
		 
		
};

SinhVien::SinhVien()
{ 

};

SinhVien::SinhVien(string ten,string id, string ns, double gpa)
{
	this->id = id;
	this->ten = ten;
	this->ns = ns;
	this->gpa = gpa;
}


void SinhVien::nhap()
{
	cout << " nhap ten: "; getline(cin,this->ten);
	cout <<" nhap id: "; getline(cin,this->id);
	cout << " nhap ns: "; getline(cin, this-> ns);
	cout << " nhap diem: "; cin >> gpa;
}



void SinhVien::in()
{
	cout << this->ten << " " << this->id << " " << ns << " " << fixed << setprecision(2) << gpa << " ";
}



int main()
{
	SinhVien x[3];
	for(int i = 0 ; i < 3 ; i ++){
		if ( i ) {
			cin.ignore();
			x[i].nhap();
		}
		else x[i].nhap();
	}
	for(int i = 0 ; i < 3 ; i ++){
		x[i].in();
		cout << endl;
	}
	return 0;
} 
