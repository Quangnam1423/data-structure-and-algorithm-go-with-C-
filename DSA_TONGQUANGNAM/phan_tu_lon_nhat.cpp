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
		for(int i = 0; i < n; i ++ )
		{
			std::cin >> a[i];
		}
		std::sort(a , a + n);
		int x = n - 1;
		for(int i = 0 ; i < k ; i ++ )
		{
			std::cout << a[x--] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
