#include<iostream>

using namespace std;

int n ;
string a = "";

void khoitao()
{
	cin >> a;
	n = a.size();
} 

void in()
{
	for(int i = 0; i < n; i ++ )
	{
		cout << a[i];
	}
	cout << endl;
}

bool check()
{
	for(int i = 0; i < n; i++ )
	{
		if(a[i] != '0') return true;
	}
	return false;
}

void sinh()
{
	int t = n-1;
	while( t >= 0 && a[t] == '0')
	{
		a[t] = '1';
		t--;
	}
	a[t] = '0';
}

int main()
{
	int t; cin >> t;
	while( t -- )
	{
		khoitao();
		if(check() == true)
		{
			sinh();
			in();
		}
		else 
		{
			for(int i = 1 ;i <= n ; i ++ )
			{
				cout <<'1';
			}
			cout << endl;
		}
	}
    return 0;	
} 
