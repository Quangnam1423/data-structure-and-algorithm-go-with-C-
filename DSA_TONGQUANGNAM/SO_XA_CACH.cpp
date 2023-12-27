#include<iostream>

using namespace std;

int n , a[100] , c[100];

void khoitao()
{
	cin >> n;
	for(int i = 0 ; i <= 99; i ++ )
	{
		c[i] = 0;
	}
}

bool Abs(int a , int b)
{
	if(abs(a - b) == 1) return false;
	return true;
}

bool check()
{
	for(int i = 1 ; i < n ; i ++ )
	{
		if(Abs(a[i] , a[i + 1]) == false) return false;
	}
	return true;
}

void in()
{
	for(int i = 1 ; i <= n ; i ++ )
	{
		cout << a[i];
	}
	cout << endl;
}

void Try(int i)
{
	for(int j = 1 ; j <= n ; j++ )
	{
		if(c[j] == 0)
		{
			a[i] = j;
			c[j] = 1;
			if(i == n && check() == true) in();
			else Try(i + 1);
			c[j] = 0;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		khoitao();
		Try(1);
	}
	return 0;
}
