#include<iostream>
#include<vector>

struct tap_canh{
	int dau , cuoi;
};

int v , e , start;
std::vector<std::vector<int> > Ke;
std::vector<bool> check;
std::vector<tap_canh> ans;

void iput()
{
	std::cin >> v >> e >> start;
	Ke.assign(v + 1 , {});
	check.assign(v + 1 , false);
	ans.clear();
	for(int i = 0 ; i < e ; i++ )
	{
		int a , b;
		std::cin >> a >> b;
		Ke[a].push_back(b);
		Ke[b].push_back(a);
	}
}

void DFS(int u)
{
	check[u] = true;
	for(int k : Ke[u])
	{
		if(check[k] == false)
		{
			ans.push_back({u , k});
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


int main()
{
	int t; std::cin >> t;
	while(t--)
	{
		iput();
		DFS(start);
		if(mark_road() == true)
		{
			for(int i = 0 ; i < ans.size() ; i++ )
			{
				std::cout << ans[i].dau << " " << ans[i].cuoi;
				std::cout << std::endl;
			}
		}
		else std::cout << -1 << std::endl;
	}
	return 0;
}
