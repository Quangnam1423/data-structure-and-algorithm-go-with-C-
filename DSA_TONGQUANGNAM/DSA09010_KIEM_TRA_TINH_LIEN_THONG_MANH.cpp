#include<iostream>
#include<vector>
#include<queue>
#include<cstring>

int v , e;
std::vector<std::vector<int> > Ke;
std::vector<bool> check;

void DFS(int u)
{
	for(int k : Ke[u])
	{
		if(check[k] == false)
		{
			check[k] = true;
			DFS(k);
		}
	}
}

bool mark()
{
	for(int i = 1 ; i <= v ; i++ )
	{
		if(check[i] == false) return false;
	}
	return true;
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
		}
		bool oke = true;
		for(int i = 1 ; i <= v ; i++ )
		{
			DFS(i);
			if(mark() == false)
			{
				std::cout << "NO";
				oke = false;
				break;
			}
			else
			{
				check.clear(); check.resize(v + 5 , false);
				continue;
			}
		}
		if(oke) std::cout << "YES";
		std::cout << std::endl;
	}
	return 0;
}
