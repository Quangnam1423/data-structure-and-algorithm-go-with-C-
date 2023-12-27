#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int n;
	std::cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i ++ )
	{
		std::cin >> a[i];
	}
	std::vector<int> v;
	for(int i = 0 ; i < n ; i ++ )
	{
		v.push_back(a[i]);
		std::sort(v.begin() , v.end());
		std::cout << "Buoc " << i << ": ";
		for(int j = 0; j < v.size() ; j ++ )
		{
			std::cout << v[j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
