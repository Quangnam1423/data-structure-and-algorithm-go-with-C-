#include<iostream>
#include<vector>

int v , e;
std::vector<std::vector<int> > Ke;
std::vector<bool> check;

bool DFS(int u , int parent)
{
	check[u] = true;
	for(int k : Ke[u])
	{
		if(check[k] == false)
		{
			if(DFS(k , u) == true) return true;
		}
		else if (k != parent)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::cin >> v >> e;
		check.clear(); check.resize(v + 5 , false);
		Ke.clear(); Ke.resize(v + 5);
		for(int i = 0 ; i < e ; i++ )
		{
			int a , b;
			std::cin >> a >> b;
			Ke[a].push_back(b);
			Ke[b].push_back(a);
		}
		bool oke = false;
		for(int i = 1 ; i <= v; i++ )
		{
			if(check[i] == false)
			{
				if(DFS(i , 0))
				{
					oke = true;
					break;
				}
			}
		}
		std::cout << (oke ?"YES" : "NO");
		std::cout << std::endl;
	}
	return 0;
}
