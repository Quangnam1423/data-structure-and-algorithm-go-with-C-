#include<iostream>
#include<vector>

int v , e;
std::vector<std::vector<int> > Ke;
std::vector<bool> check;
bool ok;

void DFS(int u , int count)
{
	if(count == v) ok = true;
	if(ok) return;
	for(int k : Ke[u])
	{
		if(check[k] == false)
		{
			check[k] = true;
			DFS(k , count + 1);
			check[k] = false;
		}
	}
}

void process()
{
	std::cin >> v >> e;
	Ke.assign(v + 100 , {});
	for(int i = 0 ; i < e ; i++ )
	{
		int a , b;
		std::cin >> a >> b;
		Ke[a].push_back(b);
		Ke[b].push_back(a);
	}
	ok = false;
	for(int i = 1 ; i <= v ; i++ )
	{
		check.assign(v + 100 , false);
		check[i] = true;
		DFS(i , 1);
		if(ok) break;
	}
	std::cout << (ok ? 1 : 0);
	return;
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
