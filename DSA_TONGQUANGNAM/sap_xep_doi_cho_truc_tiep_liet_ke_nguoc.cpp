#include<iostream>
#include<vector>

void swap(int &a , int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		int a[n];
		std::vector<std::string> s;
		for(int &x : a) std::cin >> x;
		for(int i = 0 ; i < n - 1 ; i ++ )
		{
			for(int j = i + 1 ; j < n ; j ++ )
			{
				if(a[i] > a[j]) swap(a[i] , a[j]);
			}
			std::string x = "Buoc " + std::to_string(i + 1) + ": ";
			for(int e = 0 ; e < n ; e++ )
			{
				x += std::to_string(a[e]) + " ";
			} 
			s.push_back(x);
		}
		for(int i = s.size() - 1 ; i >= 0 ; i -- )
		{
			std::cout << s[i] << std::endl;
		}
	}
	return 0;
}
