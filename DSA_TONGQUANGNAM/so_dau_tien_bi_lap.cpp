#include<iostream>
#include<map>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		long long n;
		std::cin >> n;
		long long a[n];
		std::map<long long , int > mp;
		for(auto &x : a)
		{
			std::cin >> x;
			mp[x]++;
		}
		bool check = false;
		for(auto x : a)
		{
			if(mp[x] > 1)
			{
				std::cout << x << std::endl;
				check = true;
				break;
			}
		}
		if(check == false) std::cout << "NO" << std::endl;
	}
	return 0;	
} 
