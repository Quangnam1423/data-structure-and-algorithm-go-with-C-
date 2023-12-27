#include<iostream>
#include<algorithm>

using namespace std;
int n , a[1001];

void in()
{
	for(int i = 1; i <= n; i++ )
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void khoitao()
{
	cin >> n;
	for( int i = 1; i <= n ; i++ )
	{
		cin >> a[i];
	}
}

bool check()
{
	for(int i = 1; i <= n ; i++ )
	{
		if (a[i] != n - i + 1) return true;
	}
	return false;
}

void nextGen()
{
	int x = n - 1;
	while(x > 0 && a[x] > a[x + 1]) x--;
	int t;
	for( int i = n ; i >= x ; i -- )
	{
		if(a[i] > a[x])
		{
			t = i;
			break;
		}
	}
	swap(a[x],a[t]);
	sort(a+x+1,a+n+1);
}

int main()
{
int t;
cin >> t;
while(t--)
{
		
	khoitao();
	if(check() == 1) 
	{
		nextGen();
		in();
	}
	else
	{
		for(int i = 1; i <= n; i ++ )
		cout << i << " ";
		cout << endl;
	}
}
	return 0;
}
