#include<iostream>
#include<algorithm>
#include<vector>
#include<limits>

int res;

void Try(long n , int cnt)
{
	if(n == 1)
	{
		res = std::min(res , cnt);
		return;
	}
	if(cnt >= res) return;
	if(n % 3 == 0)
	{
		Try(n / 3 , cnt + 1);
	}
	if(n % 2 == 0)
	{
		Try(n / 2 , cnt + 1);
	}
	Try(n - 1 , cnt + 1);
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		long n;
		std::cin >> n;
		res = INT_MAX;
		Try(n , 0);
		std::cout << res << std::endl;
	}
	return 0;
}
