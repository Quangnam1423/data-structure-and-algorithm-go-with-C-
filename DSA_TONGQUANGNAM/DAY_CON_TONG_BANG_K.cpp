#include<iostream>
#include<algorithm>

using namespace std;

int n , k , a[100] = {};
int c[100] = {};
int cnt;
bool sys;

void khoitao()
{
	cin >> n >> k;
	for(int i = 0 ; i < n ; i ++ )
	{
		cin >> a[i];
	}
	sort(a , a + n);
	cnt = 0;
	sys = false;
}

bool check()
{
	int tong(0);
	for(int i = 0; i < n; i ++ )
	{
		tong += c[i]*a[i];
	}
	if(tong == k ) return true;
	return false;
}

void in()
{
	int x = cnt;
	cout << "[";
	for(int i = 0; i < n ; i ++ )
	{
		if(c[i] == 1 && x != 1) 
		{
			cout << a[i] << " ";
			x--;
			continue;
		}
		if(c[i] == 1 && x == 1) 
		{
			cout << a[i] << "]";
			x--;
			continue;
		}
	}
	cout << " ";
}

void Try(int i)
{ 
	for(int j = 1; j >= 0; j -- )
	{
		c[i] = j;
		if(c[i] == 1) cnt++;
		if(i == n - 1)
		{
			if(check() == true )
			{
				in();
				sys = true;
			}
		}
		else Try(i + 1);
		if(c[i] == 1) cnt--;
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		khoitao();
		Try(0);
		if(sys == false) cout << -1;
		cout << endl;	
	}
	return 0;
}
