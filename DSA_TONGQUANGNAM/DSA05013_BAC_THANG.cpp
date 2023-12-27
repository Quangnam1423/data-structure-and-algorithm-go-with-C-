#include<iostream>
const long long MOD = 1e9 + 7;

void tinh(int n , int k)
{
	long long f[100005] = {};
	long long tmp = 0;
	for(int i = 1; i <= k ; i ++ )
	{
		f[i] = (tmp + 1) % MOD;
		tmp = (tmp + f[i]) % MOD;
	}
	for(int i = k + 1; i <= n ; i ++ )
	{
		for(int j = 1 ; j <= k ; j ++ )
		{
			f[i] = (f[i] + f[i - j]) % MOD;
		}
	}
	std::cout << f[n];
}
 
int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n , k;
		std::cin >> n >> k;
		tinh(n , k);
		std::cout << std::endl;
	}
	return 0;	
} 
