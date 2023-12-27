#include<iostream>
#include<algorithm>

long long Lis(long long *a , long n)
{
	long long Lis[n + 1] = {};
	Lis[1] = a[1];
	for(long i = 2 ; i <= n ; i ++ )
	{
		Lis[i] = std::max(Lis[i - 1] , Lis[i - 2] + a[i]);
	}
	return *std::max_element(Lis + 1, Lis + n + 1);
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		long n;
		std::cin >> n;
		long long a[n + 1];
		for(long i = 1 ; i <= n ; i++ ) std::cin >> a[i];
		std::cout << Lis(a , n) << std::endl;	
	}	
	return 0;
}
