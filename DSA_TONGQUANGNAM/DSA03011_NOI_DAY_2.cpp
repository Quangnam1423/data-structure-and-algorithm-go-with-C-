#include<iostream>
#include<bits/stdc++.h>

long long const MOD = 1e9 + 7;

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		long n;
		long long val;
		std::priority_queue<long long , std::vector<long long> , std::greater<long long> > a;
		std::cin >> n;
		for(long i = 0 ; i < n ; i ++ )
		{
			std::cin >> val;
			a.push(val % MOD);
		}
		long long res = 0;
		while(a.size() > 1)
		{
			long long x = a.top(); a.pop();
			long long y = a.top(); a.pop();
			a.push((x%MOD + y%MOD) % MOD);
			res = ((res%MOD) + (x%MOD + y%MOD)%MOD)%MOD;
		}
		std::cout << res << std::endl;
	}
	return 0;
}

