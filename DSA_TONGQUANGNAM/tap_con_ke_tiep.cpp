#include<iostream>

using namespace std;

int n , k , a[1001];

void khoitao()
{
	cin >> n >> k;
	for(int i = 1; i <= k; i++ )
	{
		cin >> a[i]; 
	}
}

void in()
{
	for(int i = 1; i <= k; i++ )
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

bool check()
{
	for(int i = 1; i <= k; i ++ )
	{
		if(a[i] != n - k + i) return true;
	}
	return false;
}

void nextGen()
{
	int x = k;
	while( x > 0 && a[x] == n - k + x  )
	{
		x--;
	}
	if( x > 0)
	{
		a[x]++;
		for(int i = x + 1 ; i <= k; i ++ )
		{
			a[i] = a[i-1] + 1;
		}
	}
}


int main()
{
	int t; cin >> t;
	while( t-- )
	{
		khoitao();
	    if(check() == 1)
	    {
		    nextGen();
		    in();
	    }
	    else
	    {
		    for(int i = 1; i <= k; i ++ )
		    {
			    a[i] = i ;
		    }
		    in();
	    }
	}
	return 0;
}
