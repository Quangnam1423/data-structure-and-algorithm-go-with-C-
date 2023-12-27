#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::vector<int> s;
		int n;
		std::cin >> n;
		long a[100005];
		long max_left[100005] , min_right[100005];
		for(int i = 0 ; i < n ; i++ )
			std::cin >> a[i];
			
			
		max_left[0]= a[0] , min_right[n - 1] = a[n - 1];
		
		for(int i = 1 ; i < n ; i++ )
		{
			if(a[i] >= max_left[i - 1])
			{
				max_left[i] = a[i];
			}
			else max_left[i] = max_left[i - 1];
		}
		for(int i = n - 2 ; i >= 0 ; i-- )
		{
			if(a[i] <= min_right[i + 1])
			{
				min_right[i] = a[i];
			}
			else min_right[i] = min_right[i + 1];
		}
		for(int i = 0 ; i < n - 1 ; i++ )
		{
			if(max_left[i] <= min_right[i + 1]) s.push_back(i + 1);
		}
		std::cout << s.size() << std::endl;
		for(int i = 0 ; i < s.size() ; i++ )
		{
			std::cout << s[i] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
