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
		std::sort(a , a + n);
		int l(0) , r = n - 1;
		while(l < r)
		{
			std::cout << a[r] << " " << a[l] << " ";
			l++; r--;
		}
		if(l == r) std::cout << a[l];
		std::cout << std::endl;
	}
	return 0;
} 
