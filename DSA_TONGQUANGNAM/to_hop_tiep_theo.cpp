#include<iostream>

using namespace std;

int n , k  , a[100];

void khoi_tao()
{
	cin >> n >> k ;
	for( int i = 1 ; i <= k ; i++ )
	{
		cin >> a[i];
	}
}

bool check()
{
	for(int i = 1 ; i <= k ; i ++ )
	{
		if(a[i] != n - k + i) return true;
	}
	return false;
}

int sinh()
{
	int x = k;
	while( x > 0 && a[x] == n - k + x) x--;
	int cnt = k - x + 1;
	if ( cnt == 1) return 1;
	else
	{
		int s = a[x + 1] - a[x] - 1;
		if(s >= cnt) return cnt; else return s;
	}
}

int main()
{
	int t; cin >> t;
	while( t-- )
	{
		khoi_tao();
		if(check() == false) cout << k << endl;
		else
		{
			cout << sinh() << endl;
		} 
	}	
	return 0;
}
