#include<iostream>
#include<algorithm>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		long n , k;
		std::cin >> n >> k;
		long a[n];
		for(auto &x : a) std::cin >> x;
		std::sort(a , a + n);
		bool check = false;
		for(long i = 0 ; i < n ; i ++ )
			for(long j = i + 1 ; j < n ; j ++ )
				if(std::binary_search(a + j + 1 , a + n , k - a[i] - a[j]))
				{
					std::cout << "YES";
					j = n; i = n;
					check = true;
				}
		if(check == false) std::cout << "NO";
		std::cout << std::endl;		
	}
	return 0;
}
