#include<iostream>
#include<algorithm>

int a[20][20] , c[20] = {}, d1[20] = {} , d2[20] = {};
int res , sum;

void Try(int i)
{
	for(int j = 1 ; j <= 8 ; j++ )
	{
		if(c[j] == 0 && d1[i - j + 8] == 0 && d2[i + j - 1] == 0)
		{
			c[j] = 1; 
			d1[i - j + 8] = 1; d2[i + j - 1] = 1;
			sum += a[i][j];
			if(i == 8)
			{
				res = std::max(res , sum);
			}
			else Try(i + 1);
			sum -= a[i][j];
			c[j] = 0; d1[i - j + 8] = 0; d2[i + j - 1] = 0;
		}
	}
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		res = 0; sum = 0;
		for(int i = 1 ; i <= 8 ; i++ )
		 	for(int j = 1 ; j <= 8 ; j++ )
		 		std::cin >> a[i][j];
		Try(1);
		std::cout << res << std::endl;
	}
	return 0;	
} 
