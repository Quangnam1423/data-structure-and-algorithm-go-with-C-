#include<iostream>
#include<algorithm>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n , m;
		std::cin >> n >> m;
		int x = n + m;
		long a[x];
		for(auto &i : a) std::cin >> i;
		std::sort(a , a + x);
		for(auto i : a) std::cout << i << " ";
		std::cout << std::endl;
	}
	return 0;
}
