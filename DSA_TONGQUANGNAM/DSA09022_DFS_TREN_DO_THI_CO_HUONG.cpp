#include<iostream>
#include<vector>
#include<cstring>

void dothi(int u , std::vector<std::vector<int> > &res , std::vector<bool> &check)
{
	std::cout << u << " ";
	check[u] = true;
	for(int x : res[u])
	{
		if(check[x] == false)
		{
			dothi(x , res , check);
		}
	}
}

void handle()
{
	int V , E , u;
	std::cin >> V >> E >> u;
	std::vector<std::vector<int> > res(V + 1);
	std::vector<bool> check(V + 1 , false);
	for(int i = 0 ; i < E ; i ++ )
	{
		int a , b;
		std::cin >> a >> b;
		res[a].push_back(b);
	}
	dothi(u , res , check);
	std::cout << std::endl;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		handle();
	}
	return 0;
}
