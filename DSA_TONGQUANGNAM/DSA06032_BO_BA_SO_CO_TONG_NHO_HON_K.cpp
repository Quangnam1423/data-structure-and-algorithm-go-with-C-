#include<iostream>
#include<algorithm>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		long long k;
		std::cin >> n >> k;
		long long a[n];
		for(auto &x : a) std::cin >> x;
		std::sort(a , a + n);
		long ans = 0;
		for(int i = 0 ; i < n; i++ )
		{
			for(int j = i + 1 ; j < n; j ++ )
			{
				ans += std::lower_bound(a + j + 1 , a + n , k - a[i] - a[j]) - (a + j + 1);
			}
		}
		std::cout << ans << std::endl;
	}
	return 0;
}
