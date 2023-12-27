#include<iostream>
#include<algorithm>
#include<cmath>

void handle()
{
	unsigned long cnt(0);
	unsigned long n;
	std::cin >> n;
	unsigned long a[n];
	for(unsigned long i = 0 ; i < n ; i++ )
	{
		std::cin >> a[i];
	}
	std::sort(a , a + n);
	for(auto i = 0 ; i < n - 2 ; i++ )
	{
		for(auto j = i + 1 ; j < n - 1 ; j++ )
		{
			unsigned long C = std::pow(a[i] , 2) + std::pow(a[j] , 2);
			unsigned long c = std::sqrt(C);
			if(c * c == C && std::binary_search(a + j + 1, a + n , c))
			{
				std::cout << "YES" << std::endl;
				return;
			}
		}	
	} 
	std::cout << "NO" << std::endl;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		handle();
	}
	return 0;
}
