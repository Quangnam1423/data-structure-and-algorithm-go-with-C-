#include<iostream>
#include<vector>
#include<queue>
std::vector<std::vector<int> > Ke;
std::vector<bool> check;
std::vector<int> before;
int v , e , start , end;

void BFS()
{
	std::queue<int> q;
	check[start] = true;
	q.push(start);
	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		for(int k : Ke[x])
		{
			if(check[k] == false)
			{
				q.push(k);
				check[k] = true;
				before[k] = x;
				if(k == end) return;
			}
		}
	}
	return;
}

void Marks_history(std::vector<int> &ans)
{
	if(check[end] == false) return;
	ans.push_back(end);
	int u = before[end];
	while(u != start)
	{
		ans.push_back(u);
		u = before[u];
	}
	ans.push_back(start);
	return;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::cin >> v >> e >> start >> end;
		Ke.clear(); Ke.resize(v + 1);
		check.clear(); check.resize(v + 1 , false);
		before.clear(); before.resize(v + 1 , 0);
		for(int i = 0 ; i < e ; i++ )
		{
			int a , b;
			std::cin >> a >> b;
			Ke[a].push_back(b);
		}
		BFS();
		std::vector<int> ans;
		if(check[end] == true)
		{
			Marks_history(ans);
			for(int i = ans.size() - 1 ; i >= 0 ; i-- )
			{
				std::cout << ans[i] << " ";	
			} 
		}
		else std::cout << -1;
		std::cout << std::endl;
	}
	return 0;
}
