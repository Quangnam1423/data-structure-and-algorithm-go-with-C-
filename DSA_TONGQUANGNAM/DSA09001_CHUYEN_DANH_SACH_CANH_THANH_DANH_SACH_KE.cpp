#include<iostream>
#include<vector>

void handle()
{
	int n , m;
	std::cin >> n >> m;
	std::vector<std::vector<int> > a(n + 1);
	for(int i = 0 ; i < m ; i++ )
	{
		int x , y;
		std::cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for(int i = 1 ; i < a.size() ; i++ )
	{
		std::cout << i << ": ";
		for(int j = 0 ; j < a[i].size() ; j++ )
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}
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
