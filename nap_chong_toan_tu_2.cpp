#include<iostream>

using namespace std;

class PhanSo
{
	private:
		int tu , mau ;
	public:
		//constructor:
		PhanSo()
		{
			tu = 0;
			mau = 0;
		}
		PhanSo(int a , int b)
		{
			this -> tu = a;
			this -> mau = b;
		}
		void nhap();
		void xuat();
		friend PhanSo operator + (PhanSo a, PhanSo b);
};

istream& operator >> (istream& in , Phan)

PhanSo operator + (PhanSo a, PhanSo b)
{
	PhanSo x;
	x.tu = a.tu + b.tu;
	x.mau = a.mau + b.mau;
	return x;
}

void PhanSo::nhap()
{
	cin >> tu >> mau ;
}

void PhanSo::xuat()
{
	cout << tu << " / " << mau << " ";
}



int main()
{
	PhanSo a(1,2), b(1,4);
	PhanSo x = a + b;
	x.xuat();
	return 0;
} 
