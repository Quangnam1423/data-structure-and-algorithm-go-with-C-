#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<utility>
#include<cstring>

int n , minKc , ans;
int a[20][20];
bool check[20];

void Try(int ind , int cou , int val)
{
	if(val + minKc * (n - cou + 1) >= ans) return;
	if(cou == n)
	{
		val += a[ind][1];
		ans = std::min(ans , val);
		return;
	}
	for(int i = 2 ; i <= n ; i++ )
	{
		if(check[i] == false)
		{
			check[i] = true;
			Try(i , cou + 1 , val + a[ind][i]);
			check[i] = false;
		}
	}
	return;
}

void handle()
{
	std::memset(check , false , sizeof(check));
	minKc = ans = INT_MAX;
	std::cin >> n;
	for(int i = 1 ; i <= n ; i++ )
	{
		for(int j = 1 ; j <= n ; j++ )
		{
			std::cin >> a[i][j];
			minKc = std::min(a[i][j] , minKc);
		}
	}
	check[1] = 1;
	Try(1 , 1 , 0);
	std::cout << ans;
}

int main()
{
	handle();
	return 0;
}
