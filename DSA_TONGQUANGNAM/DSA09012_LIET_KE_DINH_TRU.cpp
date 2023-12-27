#include<iostream>
#include<vector>
#include<queue>
#include<stack>

void DFS(std::vector<std::vector<int> > &Ke , std::vector<bool> &check , int x)
{
	for(int u : Ke[x])
	{
		if(check[u] == false)
		{
			check[u] = true;
			DFS(Ke , check , u);	
		}	
	}	
} 

bool count_pillar(std::vector<bool> &check)
{
	for(int i = 1 ; i < check.size() ; i++ )
	{
		if(check[i] == false) return true;
	}	
	return false;
} 

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int V , E;
		std::cin >> V >> E;
		std::vector<std::vector<int> > Ke(V + 1);
		std::vector<bool> check(V + 1  , false);
		std::vector<int> ans;
		for(int i = 0 ; i < E ; i++ )
		{
			int a , b;
			std::cin >> a >> b;
			Ke[a].push_back(b);
			Ke[b].push_back(a);
		}
		check[1] = true;
		DFS(Ke , check , V - 1);
		if(count_pillar(check) == true) ans.push_back(1);
		check.clear();
		check.resize(V + 1 , false);
		for(int i = 2 ; i <= V ; i++ )
		{
			check[i] = true;
			DFS(Ke , check , 1);
			if(count_pillar(check) == true) ans.push_back(i);
			check.clear();
			check.resize(V + 1 , false);
		}
		for(auto x : ans)
		{
			std::cout << x << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
