#include<iostream>
#include<utility>
#include<map>
#include<vector>
#include<algorithm>

bool cmp(std::pair<int , int > a , std::pair<int , int> b)
{
	if(a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::map<int , int> mp;
		int n;
		std::cin >> n;
		for(int i = 0 ; i < n ; i++ )
		{
			int x;
			std::cin >> x;
			mp[x]++;
		}
		std::vector<std::pair<int , int >> v(mp.begin() , mp.end());
		std::sort(v.begin() , v.end() , cmp);
		for(int i = 0 ; i < v.size() ; i++ )
		{
			for(int j = 0 ; j < v[i].second ; j++ )
			{
				std::cout << v[i].first << " ";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
