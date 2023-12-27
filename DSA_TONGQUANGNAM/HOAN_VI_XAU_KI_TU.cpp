#include<iostream>

using namespace std;

int n , a[100];
bool c[100];
string s;

void khoitao()
{
	cin >> s;
	n = s.size();
	for( int i = 0;i <= n; i++ )
	{
		c[i] = true;
	}
}

void in()
{
	for(int i = 1; i <= n ; i ++ )
	{
		cout << s[a[i] - 1];
	}
	cout << " ";
}

void Try(int i)
{
	for(int j = 1; j <= n; j ++ )
	{
		if(c[j] == true)
		{
			a[i] = j;
			c[j] = false;
			if(i == n) in();
			else Try(i+1);
			c[j] = true;
		}
	}
}

int main()
{
	int t; cin >>t;
	while( t-- )
	{
		khoitao();
		Try(1);
		cout << endl;
	}
	return 0;
}
