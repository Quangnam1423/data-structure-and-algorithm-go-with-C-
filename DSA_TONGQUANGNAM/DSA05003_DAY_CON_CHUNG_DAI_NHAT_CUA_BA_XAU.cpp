#include<iostream>
#include<cstring>
#include<algorithm>

int f[101][101][101];

namespace personal{
	void handle()
	{
		int n , m , k , res = 0;
		std::cin >> n >> m >> k;
		std::string x , y , z;
		std::cin >> x >> y >> z;
		x = '#' + x;
		y = '#' + y;
		z = '#' + z;
		std::memset(f , 0 , sizeof(f));
		for(int i = 1; i <= n ; i++ )
		{
			for(int j = 1 ; j <= m ; j++ )
			{
				for(int l = 1 ; l <= k ; l++ )
				{
					if(x[i] == y[j] && x[i] == z[l])
					{
						f[i][j][l] = f[i - 1][j - 1][l - 1] + 1;	
					}	
					else
					{
						f[i][j][l] = std::max({f[i - 1][j][l] , f[i][j - 1][l] , f[i][j][l - 1]});
					}
					res = std::max(res , f[i][j][l]);
				} 
			}
		}
		std::cout << res;
	}
};

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		personal::handle();
		std::cout << std::endl;
	}
	return 0;
}
