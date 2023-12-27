#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>

int main()
{
	int t; std::cin >> t;
	while (t--)
	{
		int n , x;
		std::cin >> n >> x;
		int a[n];
		std::unordered_map<int , int> mp;
		for (int i = 0 ; i < n ; i++ )
		{
			std::cin >> a[i];
			mp[a[i]]++;
		}
		bool check = false;
		for (int i = 0 ; i < n ; i++ )
		{
			if(mp[x + a[i]])
			{
				check = true;
				std::cout << 1;
				break;
			}
		}
		if (!check) std::cout << -1;
		std::cout << std::endl;
	}
	return 0;
}