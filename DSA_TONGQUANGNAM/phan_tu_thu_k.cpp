#include<iostream>
#include<algorithm>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n , m , k;
		std::cin >> n >> m >> k;
		int x = m + n;
		int a[x];
		for(int i = 0 ; i < x ; i ++ )
		{
			std::cin >> a[i];
		}
		std::sort(a , a + x);
		std::cout << a[k - 1] << std::endl;
	}
	return 0;
}
