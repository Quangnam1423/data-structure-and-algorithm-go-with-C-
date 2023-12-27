#include<iostream>
#include<vector>

int main()
{
	int n;
	std::cin >> n;
	std::vector<std::vector<int> > v(n);
	for(int i = 0 ; i < n ; i++ )
	{
		for(int j = 0 ; j < n ; j++ )
		{
			int x;
			std::cin >> x;
			if(x)
			{
				v[i].push_back(j + 1);
			}
		}
	}
	for(int i = 0 ; i < v.size() ; i++ )
	{
		for(int j = 0 ; j < v[i].size() ; j++ )
		{
			std::cout << v[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;	
} 
