#include<iostream>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		long long  n , k;
		std::cin >> n >> k;
		long long a[n];
		for(long long i = 0 ; i < n ; i ++ )
		{
			std::cin >> a[i];
		}
		long cnt(0);
		long long sum = a[0] + a[1] + a[2];
		if(sum < k) cnt++;
		for(long long i = 3 ; i < n ; i++ )
		{
			sum = sum - a[i - 3] + a[i];
			if(sum < k) cnt++;
		}
		std::cout << cnt << std::endl;
	}
	return 0;
}
