#include<iostream>
#include<algorithm>
#include<cstring>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n , S;
		std::cin >> n >> S;
		int w[n + 1];
		int v[n + 1];
		for(int i = 1 ; i <= n ; i ++ ) std::cin >> w[i];
		for(int i = 1 ; i <= n ; i ++ ) std::cin >> v[i];
		int dp[n + 1][S + 1];
		std::memset(dp , 0 , sizeof(dp));
		for(int i = 1 ; i <= n ; i ++ )
			for(int j = 1 ; j <= S ; j++ )
			{
				dp[i][j] = dp[i - 1][j];
				if(j >= w[i])
				{
					dp[i][j] = std::max(dp[i][j] , dp[i - 1][j - w[i]] + v[i]);
				}
			}
		std::cout << dp[n][S] << std::endl;
	}
}
