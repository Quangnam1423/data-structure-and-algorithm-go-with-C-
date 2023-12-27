#include<iostream>

void handle()
{
	int n;
	int a[100005] , l[100005] , r[100005];
	std::cin >> n;
	for(int i = 0 ; i < n ; i++ )
		std::cin >> a[i];
	l[0] = 1;
	r[n - 1] = 1;
	for(int i = 1 ; i < n ; i++ )
	{
		l[i] = 1;
		if(a[i] > a[i - 1])
		{
			l[i] = l[i - 1] + 1;
		}
	}
	for(int i = n - 2 ; i >= 0 ; i-- )
	{
		r[i] = 1;
		if(a[i] > a[i + 1])
		{
			r[i] = r[i + 1] + 1;
		}
	}
	int res(0);
	for(int i = 0 ; i < n ; i++ )
	{
		res = std::max(res , l[i] + r[i] - 1);
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
