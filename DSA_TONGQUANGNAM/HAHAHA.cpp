#include<iostream>

using namespace std;

int n , a[1001] ;

void khoitao()
{
	cin >> n ;
	for(int i = 0; i <= n; i ++ )
	{
		a[i] = 0;
	}
}

void in()
{
	for(int i = 1; i <= n; i ++ )
	{
		if(a[i] == 1) cout << 'H'; else cout <<'A';
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
	if(a[1] != 1 || a[n] != 0) return false;
	for(int i = 1; i < n ; i ++ )
	{
		if(a[i] == 1 && a[i + 1] == 1) return false;
	}
	return true;
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
