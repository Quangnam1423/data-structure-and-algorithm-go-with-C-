#include<iostream>
#include<vector>
#include<algorithm>

int v , e , count;
std::vector<std::vector<int> > Ke;
std::vector<bool> check;

void iput()
{
	std::cin >> v >> e;
	Ke.assign(v + 1 , {});
	check.assign(v + 1 , false);
	for(int i = 0 ; i < e ; i++ )
	{
		int a , b;
		std::cin >> a >> b;
		Ke[a].push_back(b);
		Ke[b].push_back(a);
	}
	for(auto k : Ke)
	{
		std::sort(k.begin() , k.end());
	}
	count = 0;
}

void DFS(int u)
{
	check[u] = true;
	for(int k : Ke[u])
	{
		if(check[k] == false)
		{
			DFS(k);
		}
	}
}

int main()
{
	int t; std::cin >> t;
	while(t--)
	{
		iput();
		for(int i = 1 ; i <= v ; i++ )
		{
			if(check[i] == false)
			{
				count++;
				DFS(i);
			}
		}
		if(count == 2) std::cout << "YES" << std::endl; 
		else std::cout << "NO" << std::endl;
	}
	return 0;
}
