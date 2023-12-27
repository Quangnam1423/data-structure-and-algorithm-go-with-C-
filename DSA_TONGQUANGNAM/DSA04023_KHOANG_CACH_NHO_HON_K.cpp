#include<iostream>
#include<algorithm>
#include<vector>

void handle()
{
	long long n , k;
	std::cin >> n >> k;
	long long a[n];
	for(int i = 0 ; i < n ; i++ )
	{
		std::cin >> a[i];
	}
	std::sort(a , a + n);
	long long cnt(0);
	for(long long i = 1 ; i < n ; i++ )
	{
		cnt += (a + i) - std::upper_bound(a , a + i , a[i] - k);
	}
	std::cout << cnt ;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		handle();
		std::cout << std::endl;
	}
	return 0;
}
