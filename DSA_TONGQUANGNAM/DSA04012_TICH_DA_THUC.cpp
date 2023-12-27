#include<iostream>
#include<vector>
#include<cstring>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int x , y;
		std::cin >> x >> y;
		std::vector<int> a(x) , b(y);
		for(int i = 0 ; i < x ; i++ )
		{
			std::cin >> a[i];
		}
		for(int i = 0 ; i < y ; i++ )
		{
			std::cin >> b[i];
		}
		std::vector<int> c(x + y - 1, 0);
		for(int i = 0 ; i < a.size() ; i++ )
		{
			for(int j = 0 ; j < b.size() ; j++ )
			{
				c[i + j] += a[i] * b[j]; 
			}
		}
		for(auto e : c) std::cout << e << " ";
		std::cout << std::endl;
	}
	return 0;
 } 
