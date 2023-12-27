#include<iostream>
#include<vector>
#include<utility>
#include<cstring>

void DFS(std::pair<int , int> x , std::vector<std::vector<int> > &Ke , std::vector<bool> &check , int u)
{
	for(int k : Ke[u])
	{
		if(check[k] == false)
		{
			if((u == x.first && k == x.second) || (k == x.first && u == x.second))
			{
				continue;
			}
			else
			{
				check[k] = true;
				DFS(x , Ke , check , k);
			}
		}
	}
}

bool count_pillar(std::vector<bool> &check)
{
	for(int i = 1 ; i < check.size() ; i++ )
	{
		if(check[i] == false) return true;
	}
	return false;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		// nhap du lieu dau vao cho test case.
		int V , E;
		std::cin >> V >> E;
		std::vector<std::pair<int , int> > Canh(E + 1);
		std::vector<std::vector<int> > Ke(V + 1);
		std::vector<bool> check(V + 1 , false);
		for(int i = 0 ; i < E ; i++ )
		{
			std::cin >> Canh[i].first >> Canh[i].second;
			Ke[Canh[i].first].push_back(Canh[i].second);
			Ke[Canh[i].second].push_back(Canh[i].first);	
		} 
		for(int i = 0 ; i < E ; i++ )
		{
			check[1] = true;
			DFS(Canh[i] , Ke , check , 1);
			if(count_pillar(check) == true) std::cout << Canh[i].first << " " << Canh[i].second << " ";
			check.clear();
			check.resize(V + 1 , false);
		}
		std::cout << std::endl;
	}
	return 0;
}
