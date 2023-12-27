#include<iostream>
#include<vector>
#include<cstring>
#include<queue>

void handle()
{
	int V , E , u;
	std::cin >> V >> E >> u;
	std::vector<std::vector<int> > res(V + 1);
	std::vector<bool> check(V + 1 , false);
	for(int i = 0 ; i < E ; i++ )
	{
		int a , b;
		std::cin >> a >> b;
		res[a].push_back(b);
	}
	std::queue<int> q;
	q.push(u);
	while(!q.empty())
	{
		int x = q.front();
		check[x] = true;
		q.pop();
		std::cout << x << " ";
		for(int k : res[x])
		{
			if(check[k] == false)
			{
				q.push(k);
				check[k] = true;
			}
		}
	}
	std::cout << std::endl;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		handle();
	}
	return 0;
}
