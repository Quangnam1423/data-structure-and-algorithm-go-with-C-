#include<iostream>
#include<set>

using namespace std;
string a[100];
int n , k , cnt;
int c[100];

void khoitao()
{
	c[0] = 0;
	cnt = 0;
	cin >> n >> k ;
	set<string> s;
	for(int i = 1 ; i <= n; i ++ )
	{
		string x;
		cin >> x;
		s.insert(x);
	}
	for( auto x : s)
	{
		cnt++;
		a[cnt] = x;
	}
}

void in()
{
	for(int i = 1 ; i <= k; i ++ )
	{
		cout << a[c[i]] << " ";
	}
	cout << endl;
}

void Try(int i)
{
	for(int j = c[i - 1] + 1 ; j <= cnt; j ++ )
	{
		c[i] = j;
		if( i == k) in();
		else Try(i + 1);
	}
}

int main()
{
	khoitao(); 
	Try(1);
} 
