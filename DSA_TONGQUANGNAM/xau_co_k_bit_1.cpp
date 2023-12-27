#include<iostream>

using namespace std;

int n , a[1001] , k;

void khoitao()
{
	cin >> n >> k;
	for(int i = 0; i <= n; i ++ )
	{
		a[i] = 0;
	}
}

void in()
{
	for(int i = 1; i <= n; i ++ )
	{
		cout << a[i];
	}
	cout << endl;
}

bool check()
{
	for(int i = 1; i <= n ; i ++ )
	{
		if(a[i] != 1) return true;
	}
	return false;
}

void sinh()
{
	int x = n;
	while(x > 0 && a[x] == 1)
	{
		a[x] = 0;
		x--;
	}
	a[x] = 1;
}

bool condition()
{
	int cnt(0);
	for(int i = 1 ;i <= n ; i ++ )
	{
		if(a[i] == 1) cnt++;
	}
	if(cnt == k ) return true; else return false;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		khoitao();
		while(check() == true)
		{
			if(condition() == true) in();
			sinh();
		}
		if(condition() == true) in();
	}
	return 0;
}
