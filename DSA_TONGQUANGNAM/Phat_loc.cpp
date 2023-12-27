#include<iostream>

using namespace std;

int a[100] , n ;

void khoitao()
{
	cin >> n ;
	for(int i = 1 ; i <= n ; i ++ )
	{
		a[i] = 0;
	}
}

bool check()
{
	for(int i = 1 ; i <= n ; i ++ )
	{
		if( a[i] == 0) return true;
	}
	return false;
}

void in()
{
	for(int i = 1 ; i <= n; i ++ )
	{
		if(a[i] == 0) cout << 6;
		else cout << 8;
	}
	cout << endl;
}

void nextGen()
{
	int x= n ;
	while( x > 0 && a[x] == 1)
	{
		a[x] = 0;
		x--;
	}
	a[x] = 1;
}

bool find8()
{
	for(int i = 1 ; i <= n ; i ++ )
	{
		if(a[i] == 1 && a[i + 1] == 1) return false;
	}
	return true;
}

bool find6()
{
	for(int i = 1 ; i < n - 2; i ++ )
	{
		if(a[i] == 0 && a[i + 1] == 0 && a[i + 2] == 0 && a[i + 3] == 0) return false;
	}
	return true;
}

bool back_front()
{
	if(a[1] == 1 && a[n] == 0) return true;
	else return false;
}

int main()
{
	khoitao();
	if(n < 6) return 0;
	else
	{
		while(check() == true)
		{
			if(find8() == true && find6() == true && back_front() == true) in();
			nextGen();
		}
		if(find8() == true && find6() == true && back_front() == true) in();
	}
	return 0;
}
