#include<iostream>
#include<algorithm>

int n , a[100] = {}, c[100] = {};

namespace personal
{
    void khoitao()
	{
		std::cin >> n;
		for(int i = 1; i <= n ; i ++ )
		{
			c[i] = i;
			std::cin >> a[i];
		}
		std::sort(a + 1 , a + n + 1);
	}

	void in()
	{
		for(int i = 1 ; i <= n ; i ++ )
		{
			std::cout << a[c[i]] << " ";
		}
		std::cout << std::endl;
	}

	bool check()
	{
		for(int i = 1; i <= n ; i++ )
		{
			if(c[i] != n - i + 1) return true;
		}
		return false;
	}

	void nextGen()
	{
		int x = n - 1;
		while( x > 0 && c[x] > c[x + 1]) x--;
		int j = n;
		while(j > x && c[j] < c[x]) j--;
		std::swap(c[x] , c[j]);
		std::sort(c + x + 1 , c + n + 1);
	}	
};
int main()
{
	personal::khoitao();
	while(personal::check() == true) 
	{
		personal::in();
		personal::nextGen();
	}
	personal::in();
	return 0;
//	personal::khoitao();
//	for(int i = 1 ; i <= n ; i ++ )
//	{
//		std::cout << a[i] << " ";
//	}
//	std::cout << std::endl ;
//	for( int i = 1 ; i <= n ; i ++ )
//	{
//		std::cout << a[c[i]] << " ";
//	}
}
