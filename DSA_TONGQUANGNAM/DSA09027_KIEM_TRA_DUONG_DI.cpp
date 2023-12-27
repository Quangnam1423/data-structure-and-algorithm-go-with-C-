#include<iostream>
#include<vector>
#include<cstring>

int v , e;
std::vector<std::vector<int> > Ke;
std::vector<bool> check;
std::vector<int> before;

void DFS (int start , int end)
{
	for(int k : Ke[start])
	{
		if(check[k] == false)
		{
			check[k] = true;
			DFS(k , end);
		}
	}
}


int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::cin >> v >> e;
		check.clear(); check.resize(v + 1 , false);
		Ke.clear(); Ke.resize(v + 1);
		for(int i = 0 ; i < e ; i++ )
		{
			int a , b;
			std::cin >> a >> b;
			Ke[a].push_back(b);
			Ke[b].push_back(a);
		}
		int test;
		std::cin >> test;
		while(test--)
		{
			int start , end;
			std::cin >> start >> end;
			check.clear(); check.resize(v + 1 , false);
			check[start] = true;
			DFS(start , end);
			if(check[end] == true) std::cout << "YES" << std::endl;
			else std::cout << "NO" << std::endl;
		}
	}
	return 0;
}
