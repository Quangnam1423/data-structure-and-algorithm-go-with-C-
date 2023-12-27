#include<iostream>
#include<vector>

int v , e;
std::vector<std::vector<int> > Ke;
std::vector<int> check;

bool DFS(int u)
{
	check[u] = 1;
	for(int k : Ke[u])
	{
		if(check[k] == 0)
		{
			if(DFS(k) == true) return true;
		}
		else if(check[k] == 1) return true;
	}
	check[u] = 2;
	return false;
}

void process()
{
	std::cin >> v >> e;
	check.clear(); check.resize(v + 1 , 0);
	Ke.clear(); Ke.resize(v + 1);
	for(int i = 0 ; i < e ; i++ )
	{
		int a , b;
		std::cin >> a >> b;
		Ke[a].push_back(b);
	}
	bool ok = false;
	for(int i = 1 ; i <= v ; i++ )
	{
		if(check[i] == 0)
		{
			if(DFS(i))
			{
				ok = true;
				break;
			}	
		}
	}
	std::cout << (ok ? "YES" : "NO");
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		process();
		std::cout << std::endl;
	}
	return 0;
}
