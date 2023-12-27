#include<iostream>

using namespace std;

int n , a[1001];

void khoitao()
{
	cin >> n;
	for(int i = 0;i <= n; i++ )
	{
		a[i] = 0;
	}
}

void in()
{
	for(int i = 1; i <= n; i ++ )
	{
		if(a[i] == 0) cout <<'A'; else cout <<'B';
	}
	cout <<" ";
}

bool check()
{
	for(int i = 1;i <= n; i++ )
	{
		if(a[i] == 0) return true;
	}
	return false;
}

void sinh()
{
	int t = n;
	while(t > 0 && a[t] == 1)
	{
	    a[t] = 0;
		t--;	
	}	
	a[t] = 1;
}

int main()
{
	int t; cin >> t;
	while( t-- )
	{
		khoitao();
		while(check() == true )
		{
			in();
			sinh();
		}
		in();
		cout << endl;
	}
	return 0;
}
