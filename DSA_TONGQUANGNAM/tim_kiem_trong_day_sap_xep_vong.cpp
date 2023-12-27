#include<iostream>
#include<algorithm>

int search_linear(int *a , int n , int x)
{
	for(int i = 0 ; i < n ; i++ )
	{
		if(a[i] == x) return i;
	}
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n , x;
		std::cin >> n >> x;
		int a[n];
		for(auto &o : a) std::cin >> o;
		std::cout << search_linear(a , n , x) + 1;
		std::cout << std::endl;
	}
	return 0;
}
