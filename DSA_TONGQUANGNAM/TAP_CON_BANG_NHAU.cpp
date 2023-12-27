#include<iostream>

using namespace std;

int a[100] = {};
int c[100] = {};
int n;
bool cnt;

void khoitao()
{
	cin >> n;
	for(int i = 0 ; i < n; i ++ )
	{
		cin >> a[i];
	}
	for(int i = 0 ; i < 100 ; i ++ )
	{
		c[i] = 0;
	}
	cnt = false;
}

void check()
{
	long tong1 = 0 , tong2 = 0;
	for(int i = 0 ; i < n ; i ++ )
	{
		if(c[i] == 1) tong1 += a[i]; else tong2 += a[i];
	}
	if(tong1 == tong2) cnt = true;
}

void Try(int i)
{
	for(int j = 0 ; j <= 1; j ++ )
	{
		c[i] = j;
		if(i == n - 1)
		{
			check();
		}
		else Try(i + 1);
	}
}

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		khoitao();
		Try(0);
		if(cnt == true) cout << "YES" << endl; else cout << "NO" << endl;
	}
	return 0;
}
