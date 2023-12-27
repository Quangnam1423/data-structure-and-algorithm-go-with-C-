#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

class PhanSo{
	private:
		long long tu , mau;
	public:
		friend std::istream& operator >> (std::istream &input , PhanSo &a)
		{
			input >> a.tu >> a.mau;
			return input;
		}
		friend std::ostream& operator << (std::ostream &output , PhanSo a)
		{
			std::cout << a.tu << "/" << a.mau;
			return output;
		}
};

struct sinhvien{
	string id , name , sdt , email;
};

void nhap(sinhvien &a)
{
	cin >> a.id;
	cin.ignore();
	getline(cin , a.name);
	cin >> a.sdt >> a.email;
	return;
}

int main()
{
	int n;
	std::cin >> n;
	sinhvien a[n];
	cin.ignore();
	for (int i = 0 ; i < n ; i++ )
	{
		nhap(a[i]);
	}
	for (int i = 0 ; i < n ; i++ )
	{
		cout << a[i].id << " " << a[i].name << " " << a[i].sdt << " " << a[i].email;
		std::cout << std::endl;
	}
	return 0;
} 
