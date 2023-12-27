#include<iostream>

using namespace std;

int n , k , a[100];

void khoitao()
{
	cin >> n >> k;
	for(int i = 1;i <= n; i++ )
	{
		a[i] = i;
	}
}

void in()
{
	for(int i = 1;i <= k; i++ )
	{
		cout << a[i];
	}
	cout << " ";
}

bool check()
{
	for(int i = 1; i <= k; i++ )
	{
		if(a[i] != n - k + i) return true;
	}
	return false;
}

void sinh()
{
	int x = k;
	while(x > 0 && a[x] == n - k + x) x--;
	a[x]++;
	for(int i = x + 1; i <= k; i++ )
	{
		a[i] = a[i - 1] + 1;
	}
}

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		khoitao();
		while(check() == true)
		{
			in();
			sinh();
		}
		in();
		cout << endl;
	}
	return 0;
}







