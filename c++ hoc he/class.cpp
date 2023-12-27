#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

struct PhanSo{
	long long tu , mau;
}; 

struct SinhVien{
	string id , name , clas , date;
	double point; 
};

long long ucln (long long x , long long y)
{
	if (y == 0) return x;
	return ucln(y , x % y);
}

void process (PhanSo a , PhanSo b)
{
	PhanSo C;
	C.tu = (a.tu * b.mau + b.tu * a.mau) * (a.tu * b.mau + b.tu * a.mau);
	C.mau = (a.mau * b.mau) * (a.mau * b.mau);
	long long res = ucln(C.tu , C.mau);
	C.tu /= res;
	C.mau /= res;
	std::cout << C.tu << "/" << C.mau << " ";
	PhanSo D;
	D.tu = C.tu * b.tu * a.tu;
	D.mau = C.mau * b.mau * a.mau;
	res = ucln(D.tu , D.mau);
	D.tu /= res;
	D.mau /= res;
	std::cout << D.tu << "/" << D.mau;
	std::cout << std::endl;
	return;
}

void get_information(SinhVien &a , int order)
{
	a.id = "B20DCCN";
	a.id += std::string(3 - std::to_string(order).size() , '0') + std::to_string(order);
	std::cin.ignore();
	getline(std::cin , a.name);
	std::cin >> a.clas >> a.date >> a.point;
	if (a.date[1] == '/') a.date = '0' + a.date;
	if(a.date[4] == '/') a.date.insert(3 , "0");
	return;
}

void show_information(SinhVien a)
{
	std::cout << a.id << " " << a.name << " "
			  << a.clas << " " << a.date << " "
			  << fixed << setprecision(2) << a.point;
	
	return;
}

void nhap(SinhVien *a , int n)
{
	for (int i = 0 ; i < n ; i++ )
	{
		get_information(a[i] , i + 1);
	}
	return;
}

void in(SinhVien *a , int n)
{
	for (int i = 0 ; i < n ; i++ )
	{
		show_information(a[i]);
		std::cout << std::endl;
	}
	return;
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
