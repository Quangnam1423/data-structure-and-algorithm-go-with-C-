#include<iostream>
#include<vector>
#include<stack>

int v , e , start , end;
std::vector<std::vector<int> > Ke;
std::vector<bool> check;
std::vector<int> before;

void DFS(int u)
{
	for(int k : Ke[u])
	{
		if(check[k] == false)
		{
			check[k] = true;
			before[k] = u;
			DFS(k);
		}
	}
}

void mark_road()
{
	if(check[end] == false)
	{
		std::cout << -1;
		return;
	}
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
		DFS(start);
		mark_road();
		std::cout << std::endl;
	}
	return 0;
}
