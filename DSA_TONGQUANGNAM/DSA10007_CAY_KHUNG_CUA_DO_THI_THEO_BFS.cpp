#include<iostream>
#include<vector>
#include<queue>

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

void BFS(int u)
{
	std::queue<int> q;
	check[u] = true;
	q.push(start);
	while(!q.empty())
	{
		int x = q.front(); q.pop();
		for(int k : Ke[x])
		{
			if(check[k] == false)
			{
				check[k] = true;
				q.push(k);
				ans.push_back({x , k});
			}
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
		BFS(start);
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
