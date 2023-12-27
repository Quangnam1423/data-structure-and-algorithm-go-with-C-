#include<iostream>
#include<algorithm>

void handle()
{
	long long n , k;
	std::cin >> n >> k;
	long long a[n];
	for(auto &x : a) std::cin >> x;
	std::sort(a , a + n);
	long long ans(0);
	for(auto i = n - 1 ; i >= 0 ; i-- )
	{
		ans += (a + i) - std::upper_bound(a , a + i , a[i] - k);
	}
	std::cout << ans << std::endl;
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
