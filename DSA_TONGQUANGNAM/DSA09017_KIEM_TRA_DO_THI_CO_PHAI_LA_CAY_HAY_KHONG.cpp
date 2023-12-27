#include<iostream>
#include<vector>

int v;
std::vector<std::vector<int> > Ke;
std::vector<bool> check;
std::vector<int> before;

bool DFS(int u)
{
	check[u] = true;
	for(int k : Ke[u])
	{
		if(check[k] == false)
		{
			before[k] = u;
			if(DFS(k) == true) return true;
		}
		else if(k != before[u]) return true;
	}
	return false;
}

void process()
{
	std::cin >> v;
	check.assign(v + 1 , false);
	Ke.assign(v + 1 , {});
	before.assign(v + 1 , 0);
	for(int i = 0 ; i < v - 1 ; i++ )
	{
		int a , b;
		std::cin >> a >> b;
		Ke[a].push_back(b);
		Ke[b].push_back(a);
	}
	bool ok = false;
	for(int i = 0 ; i < v ; i++ )
	{
		if(check[i] == false)
		{
			if(DFS(i) == true)
			{
				ok = true;
				break;
			}
		}
	}
	std::cout << (ok ? "NO" : "YES");
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
