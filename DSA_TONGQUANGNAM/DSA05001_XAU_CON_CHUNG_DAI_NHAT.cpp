#include<iostream>
#include<algorithm>

int main()
{
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--)
	{
		std::string x , y;
		std::getline(std::cin , x);
		std::getline(std::cin , y);
		int n =x.size();
		int m = y.size();
		int a[n + 1][m + 1];
		for(int i = 0 ; i <= n ; i ++ )
		{
			for(int j = 0 ; j <= m ; j ++ )
			{
				if(i == 0 || j == 0)
				{
					a[i][j] = 0;
				}
				else
				{
					if(x[i - 1] == y[j - 1])
					{
						a[i][j] = a[i - 1][j - 1] + 1;
					}
					else
					{
						a[i][j] = std::max(a[i - 1][j] , a[i][j - 1]);
					}
				}
			}
		}
		std::cout << a[n][m] << std::endl;
	}
	return 0;	
} 
