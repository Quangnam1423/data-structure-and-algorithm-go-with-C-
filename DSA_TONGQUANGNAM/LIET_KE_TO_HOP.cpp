#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

int k , n , a[100] = {} , idx ;
int c[100];

void khoitao()
{
	idx = 0;
	cin >> k >> n;
	int d;
	set<int> s;
	for(int i = 0 ; i < k; i ++ )
	{
		cin >> d;
		s.insert(d);
	}
	for( auto x : s)
	{
		idx++;
		a[idx] = x;
	}
	for(int i = 1 ; i <= idx; i ++ )
	{
		c[i] = i;
	}
}

void in()
{
	for(int i = 1 ; i <= n ; i ++ )
	{
		std::cout << a[c[i]] << " ";
	}
	std::cout << std::endl;
}

bool check()
{
	for(int i = 1; i <= n ; i++ )
	{
		if(c[i] != idx - n + i) return true;
	}
	return false;
}

void nextGen()
{
	int x = n;
	while( x > 0 && c[x] == idx - n + x) x--;
	c[x]++;
	for(int i = x + 1; i <= n; i ++ )
	{
		c[i] = c[i - 1] + 1;
	}
}	

int main()
{
	khoitao();
	while(check() == true)
	{
		in();
		nextGen();
	}
	in();
	return 0;
}
