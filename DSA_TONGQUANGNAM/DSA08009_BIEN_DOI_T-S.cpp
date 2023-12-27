#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<utility>
#include<map>

void handle()
{
	std::map<int , bool> mp;
	int s , t;
	std::cin >> s >> t;
	std::queue<std::pair<int , int> > q;
	q.push({s , 0});
	while(!q.empty())
	{
		std::pair<int , int> x = q.front();
		q.pop();
		if(x.first == t)
		{
			std::cout << x.second;
			return;
		}
		if(x.first - 1 == t || x.first * 2 == t)
		{
			std::cout << x.second + 1;
			return;
		}
		if(x.first <= t && mp[x.first * 2] == 0)
		{
			q.push({x.first * 2 , x.second + 1});
			mp[x.first * 2] = true;
		}
		if(x.first - 1 >= 0 && mp[x.first - 1] == false)
		{
			q.push({x.first - 1 , x.second + 1});
			mp[x.first - 1] = true;
		}
	}
}

int main()
{
	int t; std::cin >> t;
	while(t--)
	{
		handle();
		std::cout << std::endl;
	}
	return 0;
}
