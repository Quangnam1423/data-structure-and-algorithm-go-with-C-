#include<iostream>
#include<algorithm>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n , k;
		std::cin >> n >> k;
		int a[n];
		for(int i = 0 ; i < n ; i ++ )
		{
			std::cin >> a[i];
		}
		std::sort(a , a + n);
		int cnt(0);
		for(int i = 0 ; i < n ; i ++ )
		{
			if(a[i] > k ) break;
			for(int j = i + 1 ; j < n ; j ++ )
			{
				if(a[j] > k) break;
				if(a[i] + a[j] == k) cnt++;
			}
		}
		std::cout << cnt << std::endl;
	}
	return 0;
}
