#include<iostream>

const int MOD = 1e9 + 7;

long long poww (long long n , long long k)
{
	if(k == 0) return 1;
	long long x = poww(n , k / 2) % MOD;
	if(k % 2 == 0) return (x * x) % MOD;
	else return n * ((x * x) % MOD) % MOD;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		long long n , k;
		std::cin >> n >> k;	
		std::cout << poww(n , k);
		std::cout << std::endl;
	}
	return 0;
}
