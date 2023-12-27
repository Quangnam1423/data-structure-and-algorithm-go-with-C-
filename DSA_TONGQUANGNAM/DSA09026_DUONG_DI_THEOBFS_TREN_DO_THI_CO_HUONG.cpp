#include<iostream>
#include<vector>
#include<cstring>
#include<queue>

int V , E , start , end;

void init(std::vector<std::vector<int> > &res , std::vector<bool> &check)
{
	std::cin >> V >> E >> start >> end;
	res.resize(E + 1);
	check.resize(E + 1 , false);
	for(int i = 0 ; i < E ; i++ )
	{
		int a , b;
		std::cin >> a >> b;
		res[a].push_back(b);
	}
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::vector<std::vector<int> > res;
		std::vector<bool>check;
		std::vector<int> ans;
		init(res , check);
		std::queue<int> q;
		q.push(start);
		ans.push_back(start);
		check[start] = true;
		while(!check[end] && !q.empty())
		{
			int x = q.top();
			q.pop();
			if
		}
	}
	return 0;
}
