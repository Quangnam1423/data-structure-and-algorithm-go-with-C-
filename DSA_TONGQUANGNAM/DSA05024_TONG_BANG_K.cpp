#include<iostream>
#include<vector>

const int MOD = 1e9 + 7;

void handle()
{
	int n , k;
	std::cin >> n >> k;
	std::vector<long long> a(n + 1);
	for(int i = 1 ; i < a.size() ; i++ )
	{
		std::cin >> a[i];
	}
	std::vector<long long> f(k + 1 , 0);
	f[0] = 1;
	for(int i = 1 ; i <= k ; i++ )
	{
		for(int j = 0 ; j < a.size() ; j++ )
		{
			if(i >= a[j])
			{
				f[i] += f[i - a[j]];
				f[i] %= MOD;
			}
		}
	}
	std::cout << f[k];
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		handle();
		std::cout << std::endl;
	}
	return 0;
}
