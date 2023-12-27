#include<iostream>
#include<vector>
#include<queue>
#include<stack>

int v , e;
std::vector<std::vector<int> > Ke;
std::vector<int> deg_cong , deg_tru;
std::vector<bool> check;

int mark_euler()
{
	int x = 0;
	for(int i = 1 ; i <= v ; i++ )
	{
		if(deg_cong[i] == deg_tru[i])
		{
			check[i] = true;
		}
		else x++;
	}
	if(x == 0) return 1; else return 0;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::cin >> v >> e;
		Ke.clear(); Ke.resize(v + 1);
		deg_cong.clear(); deg_cong.resize(v + 1 , 0);
		deg_tru.clear(); deg_tru.resize(v + 1 , 0);
		check.clear(); check.resize(v + 1 , false);
		for(int i = 0 ; i < e ; i++ )
		{
			int a , b;
			std::cin >> a >> b;
			Ke[a].push_back(b);
			deg_cong[a]++;
			deg_tru[b]++;
		}
		std::cout << mark_euler() << std::endl;
	}
	return 0;
}
