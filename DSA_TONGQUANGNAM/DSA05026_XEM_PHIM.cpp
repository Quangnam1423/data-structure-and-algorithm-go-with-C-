#include<iostream>
#include<cstring>
#include<algorithm>

int main()
{
	int max , n;
	std::cin >> max >> n;
	int w[n + 1];
	for(auto &x : w) std::cin >> x;
	int F[n + 1][max + 1];
	std::memset(F , 0 , sizeof(F));
	for(int i = 1 ; i < n + 1 ; i++ )
	{
		for(int j = 1; j < max + 1 ; j++ )
		{
			if(j < w[i])
			{
				F[i][j] = F[i - 1][j];
			}
			else
			{
				F[i][j] = std::max(F[i - 1][j] , F[i - 1][j - w[i]] + w[i]);
			}
		}
	}
	std::cout << F[n][max] << std::endl;
	return 0;
}
