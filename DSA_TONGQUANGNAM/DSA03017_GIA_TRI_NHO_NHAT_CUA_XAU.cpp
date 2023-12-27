#include<iostream>
#include<map>
#include<utility>

void handle(int k , std::string s)
{
	std::map<char , int> mp;
	for(int i = 0 ; i < s.size() ; i++ )
	{
		mp[s[i]]++;
	}
	for(int i = 0 ; i < k ; i++ )
	{
		int idx = -1;
		char x;
		for(auto it : mp)
		{
			if(it.second > idx)
			{
				idx = it.second;
				x = it.first;
			}
		}
		mp[x] -= 1;
	}
	long long int tong(0);
	for(auto it : mp)
	{
		tong += it.second * it.second;
	}
	std::cout << tong;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int k;
		std::string s;
		std::cin >> k >> s;
		handle(k , s);
		std::cout << std::endl;
	}
	return 0;
}
