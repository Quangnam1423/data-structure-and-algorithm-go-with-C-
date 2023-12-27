#include<iostream>
#include<algorithm>

long handle(long a[] , long n)
{
	long f[n + 1];
	f[0] = 1;
	for(long i = 1 ; i < n ; i ++ )
	{
		f[i] = 1;
		for(long j = 0 ; j < i ; j ++ )
		{
			/* TODO (#1#): 
			if(a[i] >= a[j] && f[i] < f[j] + 1)
			{
				f[i] = f[j] + 1;
			}
		}
	}
	return *std::max_element(f , f + n);
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		long n;
		std::cin >> n;
		long a[n];
		for(auto &x : a) std::cin >> x;
		std::cout << n - handle(a , n) << std::endl;
	}
	return 0;
}
