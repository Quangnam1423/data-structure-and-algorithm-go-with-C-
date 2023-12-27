#include<iostream>

const long long MOD = 123456789;

long long poww(long long n , long long k)
{
	if(k == 0) return 1;
	long long x = poww(n , k / 2);
	if(k % 2 == 0) return (x * x) % MOD;
	else return (n * (( x * x) % MOD)) % MOD;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		long long n;
		std::cin >> n;
		std::cout << poww(2 , n - 1);
		std::cout << std::endl;
	}
	return 0;
}
