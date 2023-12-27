#include<iostream>
#include<vector>
#include<queue>
#include<stack>

int v , e;
std::vector<std::vector<int> > Ke;
std::vector<bool> check;

int mark_euler()
{
	int x(0);
	for(int i = 1 ; i < Ke.size() ; i++ )
	{
		if(Ke[i].size() % 2 != 0) x++;
	}
	if(x == 0) return 2;
	else if(x == 2) return 1;
	else return 0;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::cin >> v >> e;
		Ke.clear(); Ke.resize(v + 1);
		check.clear(); check.resize(v + 1 , false);
		for(int i = 0 ; i < e ; i++ )
		{
			int a , b;
			std::cin >> a >> b;
			Ke[a].push_back(b);
			Ke[b].push_back(a);
		}
		std::cout << mark_euler() << std::endl;
	}
	return 0;
}
