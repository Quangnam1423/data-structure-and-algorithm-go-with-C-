#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>

bool cmp(std::pair<long , long> a , std::pair<long , long> b)
{
	return a.first > b.first;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		std::vector<std::pair<long , long> > a;
		for(int i = 0 ; i < n ; i++ )
		{
			std::pair<long , long> x;
			std::cin >> x.first;
			x.second = i;
			a.push_back(x);
		}
		std::sort(a.begin() , a.begin() + n);
		long res = -1 , min = a[0].second , k = a[0].first;
		for(int i = 1 ; i < a.size() ; i++ )
		{
			if(a[i].first > k) res = std::max(res , a[i].second - min);
			if(a[i].second < min)
			{
				min = a[i].second;
				k = a[i].first;
			}
		}
		std::cout << res << std::endl;
	}
	return 0;
}
