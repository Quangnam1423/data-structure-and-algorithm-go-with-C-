#include<iostream>

int n , k , a[101] , c[101];
int cnt;

void khoitao()
{
	std::cin >> n >> k;
	for(int i = 1 ; i <= n ; i ++ )
	{
		std::cin >> a[i];
	}
	for(int i = 1 ; i <= k; i++ )
	{
		c[i] = i;
	}
	cnt = 0;
}

bool check()
{
	for(int i = 1 ; i <= k ; i++ )
	{
		if(c[i] != n - k + i) return true;
	}
	return false;
}

void count()
{
	for(int i = 1 ; i < k ; i++ )
	{
		if(a[c[i]] >= a[c[i + 1]]) return;
	}
	cnt++;
	return;
}

void Next_gen()
{
	int x = k;
	while(x > 0 && c[x] == n - k + x) x--;
	c[x]++;
	for(int i = x + 1 ; i <= k ; i++ )
	{
		c[i] = c[i - 1] + 1;
	}
}



int main()
{
	khoitao();
	count();
	while(check() == true)
	{
		Next_gen();
		count();
	}
	std::cout << cnt;
	return 0;	
} 
