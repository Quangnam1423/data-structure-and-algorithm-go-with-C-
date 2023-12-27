#include<iostream>
#include<iomanip>
using namespace std;
int cnt ;
char n;
int a[100] = {0};
int c[100];
void khoitao()
{
	cin >> n;
	cnt = n - 'A' + 1;
	for(int i = 0 ; i <= cnt; i ++ )
	{
		c[i] = 0;	
	} 
}

void in()
{
	for(int i = 1; i <= cnt; i ++ )
	{
		cout << static_cast<char>(a[i] + 'A' - 1);
	}
	cout << endl;
}

bool kiemtra(int a)
{
	if(a == 1 || a == 5) return true;
	return false;
}

bool check()
{
	for(int i = 2 ;i < cnt; i++ )
	{
		if(kiemtra(a[i]) == true)
		{
			if(kiemtra(a[i - 1]) == false && kiemtra(a[i + 1]) == false) return false;
		}
	}
	return true;
}

void Try(int i)
{
	for(int j = 1; j <= cnt ; j++ )
	{
		if(c[j] == 0)
		{
			a[i] = j;
			c[j] = 1;
			if(i == cnt && check() == true) in();
			else Try(i + 1);
			c[j] = 0;
		}
	}
}

int main()
{
	khoitao();
	Try(1);
	return 0;
}

