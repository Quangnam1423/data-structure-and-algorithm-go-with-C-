#include<iostream>
#include<map>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::map<char , int> mp;
		int n;
		std::cin >> n;
		for(int i = 0 ; i < n; i ++ )
		{
			std::string s;
			std::cin >> s;
			for(int j = 0 ;j < s.size() ; j ++ )
			{
				mp[s[j]]++;	
			} 
		}
		for(auto x : mp)
		{
			std::cout << x.first << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
