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
		for(auto &o : a) std::cin >> o;
		std::sort(a , a + n);
		if(a[0] == a[n - 1]) std::cout << - 1<< std::endl;
		else std::cout << a[0] << " " << a[1] << std::endl;
	}
	return 0;
}
