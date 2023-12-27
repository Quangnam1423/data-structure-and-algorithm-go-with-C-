#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		long long a[n];
		for(auto &x : a) std::cin >> x;
		std::sort(a , a + n);
		long long Min = 1e9 + 1;
		for(int i = n - 1 ; i > 0 ; i -- )
		{
			Min = std::min(Min , (a[i] - a[i - 1]));	
		} 
		std::cout << Min << std::endl;
	}
	return 0;
}
