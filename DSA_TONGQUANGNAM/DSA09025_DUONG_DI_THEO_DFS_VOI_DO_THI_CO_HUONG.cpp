#include<iostream>
#include<vector>
#include<cstring>
int V , E , start , end;
bool oke;
void dothi(int u , std::vector<std::vector<int> > &res , std::vector<bool> &check , std::vector<int> &ans)
{
	ans.push_back(u);
	check[u] = true;
	if(u == end)
	{
		oke = true;
		return;
	}
	for(auto k : res[u])
	{
		if(check[k] == false)
		{
			dothi(k , res , check , ans);
			if(oke) return;
		}
	}
	ans.pop_back();
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::cin >> V >> E >> start >> end;
		std::vector<std::vector<int> > res(E + 1);
		std::vector<bool> check(E + 1 , false);
		std::vector<int> ans;
		oke = false;
		for(int i = 0 ; i < E ; i++ )
		{
			int a , b;
			std::cin >> a >> b;
			res[a].push_back(b);
		}
		dothi(start , res , check , ans);
		if(check[end] == false)
		{
			std::cout << -1 << std::endl;
		}
		else
		{
			for(auto x : ans)
			{
				std::cout << x << " ";
			}
			std::cout << std::endl;
		}
	}
	return 0;
}
