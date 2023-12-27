#include<iostream>

const long long MOD = 1e9 + 7;


long long poww (long long n , long long k)
{
	if(k == 0) return 1;
	long long x = poww(n , k / 2) % MOD;
	if(k % 2 == 0) return (x * x) % MOD;
	else return n * ((x * x) % MOD) % MOD;
}


int main()
{
	long long n , k;
	do
	{
		std::cin >> n >> k;
		if(n != 0 || k != 0)
		{
			std::cout << poww(n , k) << std::endl;
		}
	}while(n != 0 || k != 0);
	return 0;
}
