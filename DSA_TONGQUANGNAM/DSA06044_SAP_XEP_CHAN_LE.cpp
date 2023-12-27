#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int n;
	std::cin >> n;
	int a[n];
	for(int i = 0 ; i < n; i ++ )
	{
		std::cin >> a[i];
	}
	std::vector<int> odd;
	std::vector<int> even;
	for(int i = 0 ; i < n ; i ++ )
	{
		if(i % 2 == 0) odd.push_back(a[i]); else even.push_back(a[i]); 
	}
	std::sort(odd.begin() , odd.end() );
	std::sort(even.begin() , even.end() , std::greater<int>());
	int odd_idx = 0 , even_idx = 0;
	for(int i = 0 ; i < n ; i ++ )
	{
		if(i % 2 == 0)
		{
			std::cout << odd[odd_idx++] << " ";
		}
		else std::cout << even[even_idx++] << " ";
	}
	return 0;
}
