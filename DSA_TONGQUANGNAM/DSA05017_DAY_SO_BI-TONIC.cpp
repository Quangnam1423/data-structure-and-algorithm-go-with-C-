#include<iostream>
#include<algorithm>

int a[1000] , l[1000] , r[1000];
int n;
void handle()
{
	std::cin >> n;
	for(int i = 0 ; i < n ; i++ )
	{
		std::cin >> a[i];
	}
	l[0] = a[0];
	for(int i = 1 ; i < n ; i++ )
	{
		l[i] = a[i];
		for(int j = 0 ; j < i ; j++ )
		{
			if(a[i] > a[j] && l[j] + a[i] > l[i])
			{
				l[i] = l[j] + a[i];
			}
		}
	}
	r[n - 1] = a[n - 1];
	for(int i = n - 2 ; i >= 0 ; i-- )
	{
		r[i] = a[i];
		for(int j = n - 1 ; j > i ; j-- )
		{
			if(a[i] > a[j] && r[i] < r[j] + a[i])
			{
				r[i] = r[j] + a[i];
			}
		}
	}
	int res = 0;
	for(int i = 0 ; i < n ; i++ )
	{
		int x = l[i] + r[i] - a[i];
		res = std::max(res , x);
	}
	std::cout << res << std::endl;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		handle();
	}
	return 0;
}
