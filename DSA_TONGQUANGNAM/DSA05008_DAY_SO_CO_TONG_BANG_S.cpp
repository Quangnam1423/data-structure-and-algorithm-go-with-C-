#include<iostream>
#include<vector>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n , S;
		std::cin >> n >> S;
		std::vector<int> a(n);
		for(int i = 0 ; i < n ; i ++ ) std::cin >> a[i];
		std::vector<bool> dp(S + 1 , false);
		dp[0] = true;
		for(int i = 0 ; i < n ; i ++ )
		{
			for(int j = S ; j >= a[i] ; j--)
			{
				if(dp[j - a[i]] == true)
				{
					dp[j] = true;
				}
			}
		}
		if(dp[S]) std::cout << "YES" << std::endl;
		else std::cout << "NO" << std::endl;
	}
	return 0;
}
