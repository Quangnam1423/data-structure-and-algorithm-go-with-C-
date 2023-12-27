#include<iostream>
#include<cstring>
#include<vector>

std::string plus(std::string a , std::string b)
{
	std::string ans = "";
	int tmp = 0;
	int x = a.size() - 1 , y = b.size() - 1;
	while(x >= 0 && y>= 0)
	{
		tmp = tmp + (a[x] - '0') + (b[y] - '0');
		ans = std::to_string(tmp % 2) + ans;
		tmp = tmp / 2;
		x--;y--;
	}
	while(x >= 0)
	{
		tmp = tmp + (a[x] - '0');
		ans = std::to_string(tmp % 2) + ans;
		tmp = tmp / 2;
		x--;
	}
	while(y >= 0)
	{
		tmp = tmp + (b[y] - '0');
		ans = std::to_string(tmp % 2) + ans;
		tmp = tmp / 2;
		y--;
	}
	return ans;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::string a , b , ans = "";
		std::cin >> a >> b;
		int x = a.size() - 1;
		std::string tail = "";
		while(x >= 0)
		{
			if(a[x] == '1')
			{
				ans = plus(ans , b + tail);
			}
			tail += '0';
			x--;
		}
		int tmp = 1;
		long long  number = 0;
		for(int i = ans.size() - 1 ; i >= 0 ; i-- )
		{
			number += tmp * (ans[i] - '0');
			tmp *= 2;
		}
		std::cout << number << std::endl;
	}
	return 0;
}
