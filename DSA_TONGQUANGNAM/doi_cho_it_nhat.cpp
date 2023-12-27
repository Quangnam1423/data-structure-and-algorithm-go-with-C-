#include<iostream>
#include<algorithm>

int main()
{
	int t;
	std::cin >>t;
	while(t--)
	{
		int n;
		std::cin >> n;
		int a[n];
		for(int i = 0 ; i < n; i ++ )
		{
			std::cin >> a[i];
		}
		int cnt(0);
		for(int i = 0 ;i < n ; i ++ )
		{
			int k = i;
			for(int j = i + 1; j < n ; j ++ )
			{
				if(a[j] < a[k]) k = j;
			}
			if(k != i) 
			{
				cnt++;
				std::swap(a[i] , a[k]);
			}
		}
		std::cout << cnt <<std::endl;
	}
	return 0;
}
