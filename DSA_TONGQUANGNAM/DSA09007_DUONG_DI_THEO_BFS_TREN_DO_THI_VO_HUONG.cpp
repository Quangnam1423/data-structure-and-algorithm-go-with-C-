#include<iostream>
#include<vector>
#include<cstring>
#include<queue>

int v , e , start , end;
std::vector<std::vector<int> > Ke;
std::vector<bool> check;
std::vector<int> before;

void BFS(int u)
{
	std::queue<int> q;
	q.push(u);
	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		for(int k : Ke[x])
		{
			if(check[k] == false)
			{
				before[k] = x;
				check[k] = true;
				q.push(k);
			}
			if(k == end) return;
		}
	}
	return;
}

void marks_road()
{
	if(check[end] == false)
	{
		std::cout << -1;
		return;
	}
	else
	{
		std::vector<int> ans;
		int u = end;
		while(u != start)
		{
			ans.push_back(u);
			u = before[u];
		}
		ans.push_back(start);
		for(int i = ans.size() - 1 ; i >= 0 ; i-- )
		{
			std::cout << ans[i] << " ";
		}
	}
	return;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::cin >> v >> e >> start >> end;
		Ke.clear(); Ke.resize(v + 1);
		check.clear(); check.resize(v + 1 , false);
		before.clear(); before.resize(v + 1 , 0);
		for(int i = 0 ; i < e ; i++ )
		{
			int a , b;
			std::cin >> a >> b;
			Ke[a].push_back(b);
			Ke[b].push_back(a);
		}
		check[start] = true;
		BFS(start);
		marks_road();
		std::cout << std::endl;
	}
	return 0;
}
