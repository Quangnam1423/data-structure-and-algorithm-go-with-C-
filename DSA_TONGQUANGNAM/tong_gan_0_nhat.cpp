#include<iostream>
#include<cmath>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		int a[n];
		for(int i = 0 ; i < n; i ++ )
		{
			std::cin >> a[i];
		}
		int big = 1e9 + 7;
		for(int i = 0 ; i < n ; i ++ )
		{
			for(int j = i + 1 ; j < n ; j ++ )
			{
				int sum = a[i] + a[j];
				if(abs(sum) < abs(big))
				{
					big = sum;
				}
			}
		}
		std::cout << big << std::endl;
	}
	return 0;
}
