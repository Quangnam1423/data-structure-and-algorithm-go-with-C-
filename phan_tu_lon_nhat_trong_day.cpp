#include<iostream>
#include<set>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		long long n , k;
		std::cin >> n >> k;
		long long a[n];
		for(auto &x : a) std::cin >> x;
		std::set<long long> s;
		for(int i = 0 ; i < k ; i ++ )
		{
			s.insert(a[i]);
		}
		for(int i = k ; i < n ; i++ )
		{
			std::cout << *s.rbegin() << " ";
			s.erase(s.find(a[i - k]));
			s.insert(a[i]);	
		} 
		std::cout << *s.rbegin() << std::endl;
	}
	return 0;
}
