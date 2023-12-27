#include<iostream>
#include<map>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::map<int , int > mp;
		int n , m;
		std::cin >> n >> m;
		int a[n] , b[m];
		for(auto &x : a)
		{
			std::cin >> x;
			mp[x] ++;
		}
		for(auto &x : b)
		{
			std::cin >> x;
			mp[x]++;
		}
		for(auto x : mp)
		{
			std::cout << x.first << " ";
		}
		std::cout << std::endl;
		for(auto x : mp)
		{
			if(x.second >= 2) std::cout << x.first << " ";
		}
		std::cout << std::endl;
	}
	return 0;
} 
