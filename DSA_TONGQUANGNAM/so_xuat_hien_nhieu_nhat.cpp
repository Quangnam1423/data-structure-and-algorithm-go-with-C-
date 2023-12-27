#include<iostream>
#include<vector>
#include<utility>
#include<map>
#include<algorithm>

bool cmp(std::pair<int , int> a , std::pair<int , int> b)
{
	return a.second > b.second;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		std::map<int , int > mp;
		for(int i = 0 ; i < n; i ++ )
		{
			int x;
			std::cin >> x;
			mp[x]++;
		}
		std::vector<std::pair<int , int> > v(mp.begin() , mp.end());
		std::sort(v.begin() , v.end() , cmp);
		if(v[0].second > n/2 ) std::cout << v[0].first << std::endl; else std::cout << "NO" << std::endl;
	}
	return 0;	
} 
