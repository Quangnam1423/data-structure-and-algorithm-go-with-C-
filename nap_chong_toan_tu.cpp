#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>

using namespace std;

class PhanSo 
{
	private:
		int tu;
		int mau;
	public:
		void nhap()
		{
			cin >> tu >> mau ;
		}
		
		void xuat()
		{
			cout << tu << " / " << mau << " ";
		}
		
		//constructor
		PhanSo()
		{
			tu = 0;
			mau = 0;
		}
		PhanSo(int a , int b)
		{
			this->tu = a;
			this->mau = b;
		}
		
		PhanSo operator + (PhanSo b)
		{
			PhanSo x;
			x.tu = tu * b.mau + mau * b.tu;
			x.mau = mau * b.mau;
			return x;
		}
};
 
int main()
{
	PhanSo a , b;
	a.nhap(); b.nhap();
	PhanSo c = a + b;
	c.xuat();
	return 0;
}
