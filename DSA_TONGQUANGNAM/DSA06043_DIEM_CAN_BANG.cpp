#include<iostream>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		int prefix_sum[n + 1] = {};
		for(int i = 1; i <= n; i ++ )
		{
			int x;
			std::cin >> x;
			prefix_sum[i] = prefix_sum[i - 1] + x;
		}
		bool check = false;
		for(int i = 1 ; i <= n ; i ++ )
		{
			if(prefix_sum[i - 1] == (prefix_sum[n] - prefix_sum[i]) )
			{
				std::cout << i << std::endl;
				check = true;
				break;
			}
		}
		if(check == false) std::cout << -1 << std::endl;
	}
	return 0;
}
