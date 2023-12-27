#include<iostream>
#include<vector>

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

bool mark_road()
{
	for(int i = 1 ; i <= v ; i++ )
	{
		if(check[i] == false) return false;
	}
	return true;
}

void process()
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
	for(int i = 1 ; i <= v ; i++ )
	{
		if(i == 1)
		{
			check[i] = true;
			DFS(2);
			if(mark_road() == true)
			{
				check.assign(v + 1 , false);
			}
			else
			{
				std::cout << i << " ";
				check.assign(v + 1 ,false);
			}
		}
		else
		{
			check[i] = true;
			DFS(1);
			if(mark_road() == true)
			{
				check.assign(v + 1 , false);
			}
			else
			{
				std::cout << i << " ";
				check.assign(v + 1 , false);
			}
		}
	}
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
