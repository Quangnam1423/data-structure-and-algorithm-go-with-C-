#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

long long Count = 1; 

struct SinhVien{
	string name , clas , b_date;
	double p;
};

void nhapThongTinSV (SinhVien &a)
{
	getline(std::cin , a.name);
	std::cin >> a.clas >> a.b_date >> a.p;
	if (a.b_date[1] == '/') a.b_date = '0' + a.b_date;
	if(a.b_date[4] == '/') a.b_date.insert(3 , "0");
	return;
}

void inThongTinSV (SinhVien a)
{
	std::cout << "N20DCCN001" << " "
			  << a.name << " " << a.clas
			  << " " << a.b_date << " "
			  << fixed << setprecision(2) << a.p;
			  
	return;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}

