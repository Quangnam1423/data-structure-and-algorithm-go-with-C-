#include<iostream>
#include<cstring>
#include<vector>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int k;
		std::string a , b;
		std::cin >> k >> a >> b;
		int x = a.size() - 1 , y = b.size() - 1;
		std::string ans = "";
		int tmp = 0;
		while(x >= 0 && y>= 0)
		{
			tmp = tmp + (a[x] - '0') + (b[y] - '0');
			ans = std::to_string(tmp % k) + ans;
			tmp = tmp / k;
			x--;y--;
		}
		while(x >= 0)
		{
			tmp = tmp + (a[x] - '0');
			ans = std::to_string(tmp % k) + ans;
			tmp = tmp / k;
			x--;
		}
		while(y >= 0)
		{
			tmp = tmp + (b[y] - '0');
			ans = std::to_string(tmp % k) + ans;
			tmp = tmp / k;
			y--;
		}
		if(tmp != 0) ans = std::to_string(tmp) + ans;
		std::cout << ans << std::endl;
	}
	return 0;
}
