#include<iostream>
#include<vector>
#include<algorithm>

int v , e;
std::vector<std::vector<int> > Ke;
std::vector<bool> check;
int res , tmp;

void DFS(int u , int &res)
{
	res++;
	check[u] = true;
	for(int k : Ke[u])
	{
		if(check[k] == false)
		{
			DFS(k , res);
		}
	}
}

void process()
{
	res = 0 , tmp = 0;
	std::cin >> v >> e;
	check.assign(v + 1 , false);
	Ke.assign(v + 1 , {});
	for(int i = 0 ; i < e ; i++ )
	{
		int a , b;
		std::cin >> a >> b;
		Ke[a].push_back(b);
		Ke[b].push_back(a);
	}
	for(int i = 1 ; i <= v ; i++ )
	{
		int x = res;
		DFS(i , res);
		tmp = std::max(tmp ,res - x);
	}
	std::cout << tmp;
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
