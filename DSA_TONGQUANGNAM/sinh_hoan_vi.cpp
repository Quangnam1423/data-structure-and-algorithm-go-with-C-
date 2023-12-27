#include<iostream>
#include<algorithm>

using namespace std;

int n , a[100];

void khoitao()
{
	cin >> n;
	for(int i = 1 ; i <= n ; i++ )
	{
		a[i] = i;
	}
}

void in()
{
	for(int i = 1 ;i <= n ; i++ )
	{
		cout << a[i];
	}
	cout << " ";
}

bool check()
{
	for(int i = 1; i <= n ; i++ )
	{
		if(a[i] != n - i + 1) return true;
	}
	return false;
}

void sinh()
{
	int x = n - 1;
	while(x > 0 && a[x] > a[x + 1]) x--;
	int j = n;
	while(j > x && a[j] < a[x]) j--;
	swap(a[x],a[j]);
	sort(a + x + 1 ,a + n + 1);
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

