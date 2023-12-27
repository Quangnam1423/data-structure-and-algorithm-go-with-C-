#include<iostream>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		long long n;
		std::cin >> n;
		long long a[n];
		for(auto &x : a) std::cin >> x;
		long long cnt(0);
		for(int i = 1 ; i < n ; i++ )
		{
			if(a[i] < a[i - 1]) 
			{
				cnt = i;
				break;	
			}
		}
		std::cout << cnt << std::endl;
	}
	return 0;
}
