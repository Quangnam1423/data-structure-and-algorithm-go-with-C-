#include<iostream>
#include<vector>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		long n , k;
		std::cin >> n >> k;
		long long a[n];
		long x(-1);
		for(long i = 0 ; i < n ; i ++ )
		{
			std::cin >> a[i];
			if(a[i] <= k) x = i;
		}
		if(x >= 0) std::cout << x + 1 <<std::endl; else std::cout << -1 << std::endl;
	}
	return 0;
}
