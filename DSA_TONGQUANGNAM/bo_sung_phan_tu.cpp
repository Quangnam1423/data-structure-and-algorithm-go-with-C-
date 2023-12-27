#include<iostream>
#include<algorithm>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		int a[n];
		for(auto &x : a) std::cin >> x;
		std::sort(a , a + n , std::greater<int>());
		int cnt(0);
		for(int i = 0 ; i < n - 1 ; i ++ )
		{
			if(a[i] - a[i + 1] ) cnt += a[i] - a[i + 1] - 1;
		}
		std::cout << cnt << std::endl;
	}
	return 0;
}
