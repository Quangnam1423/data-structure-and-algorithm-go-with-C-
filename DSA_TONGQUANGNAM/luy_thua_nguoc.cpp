#include<iostream>

const long long MOD = 1e9 + 7;

long long n , k;

long long rev(long long n);
void khoitao()
{
	std::cin >> n;
	k = rev(n);
}

long long poww(long long n , long long k)
{
	if(k == 0) return 1;
	long long x = poww(n , k / 2);
	if(k % 2 == 0) return ( x * x) % MOD;
	else return n * ((x * x) % MOD) % MOD;
}

long long rev(long long n)
{
	long long res(0);
	while(n > 0)
	{
		res = res * 10 + n % 10;
		n /= 10;
	}
	return res;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		khoitao();
		std::cout << poww(n , k);
		std::cout << std::endl;
	}
	return 0;
}
