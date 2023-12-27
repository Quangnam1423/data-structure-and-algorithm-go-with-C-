#include<iostream>
#include<vector>
#include<algorithm>


int v , e , end;
std::vector<std::vector<int> > Ke;
std::vector<bool> check;
std::vector<int> ans , parent;

bool DFS(int u)
{
	check[u] = true;
	for(int k : Ke[u])
	{
		if(check[k] == false)
		{
			parent[k] = u;
			if(DFS(k) == true) return true;
		}
		else if(k != parent[u] && k == 1)
		{
			end = u;
			return true;
		}
	}
	return false;
}

void mark_road()
{
	ans.push_back(1);
	int x = end;
	while(x != 1)
	{
		ans.push_back(x);
		x = parent[x];
	}
	ans.push_back(1);
}

int main()
{
	int t; std::cin >> t;
	while(t--)
	{
		std::cin >> v >> e;
		Ke.assign(v + 1 , {});
		check.assign(v + 1 , false);
		parent.assign(v + 1 , 0);
		ans.clear();
		for(int i = 0 ; i < e ; i++ )
		{
			int a , b;
			std::cin >> a >> b;
			Ke[a].push_back(b);
			Ke[b].push_back(a);
		}
		for(auto i : Ke)
		{
			std::sort(i.begin() , i.end());
		}
		//kiem tra DFS tai dinh 1
		if(DFS(1))
		{
			mark_road();
			for(int i = ans.size() - 1 ; i >= 0 ; i-- )
			{
				std::cout << ans[i] << " ";
			}
		}
		else std::cout << "NO";
		std::cout << std::endl;
	}
	return 0;
}
/*2
6 5
1 2 1 4 2 5 4 5 3 6
6 9
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6*/

