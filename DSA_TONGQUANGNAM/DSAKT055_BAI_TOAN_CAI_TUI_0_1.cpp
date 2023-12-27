#include<iostream>
#include<cstring>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n , max;
		std::cin >> n >> max;
		int C[n + 1];
		int V[n + 1];
		for(int i = 1 ; i <= n ; i ++ ) std::cin >> C[i];
		for(int i = 1 ; i <= n ; i ++ ) std::cin >> V[i];
		int f[n + 1][max + 1];
		std::memset(f , 0 , sizeof(f));
		for(int i = 1 ; i <= n ; i ++ )
		{
			for(int j = 1 ; j <= max ; j ++ )
			{
				f[i][j] = f[i - 1][j];
				if(j >= C[i])
				{
					f[i][j] = std::max(f[i][j] , f[i - 1][j - C[i]] + V[i]);
				}
			}	
		} 
		std::cout << f[n][max] << std::endl;
	}
	return 0;
}
