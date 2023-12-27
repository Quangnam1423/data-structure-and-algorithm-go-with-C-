#include<iostream>
#include<map>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n , k;
		std::cin >> n >> k;
		std::map<int , int > mp;
		for(int i = 0 ; i < n ; i ++ )
		{
			int x;
			std::cin >> x;
			mp[x]++;
		}
		if(mp[k]) std::cout << mp[k] << std::endl;
		else std::cout << -1 << std::endl;
	}
	return 0;
}
