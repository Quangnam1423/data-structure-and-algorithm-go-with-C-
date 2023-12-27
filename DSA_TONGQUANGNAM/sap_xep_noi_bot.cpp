#include<iostream>
#include<vector>

void swap(int &a , int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void testcase()
{
	int n;
	std::cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++ )
	{
		std::cin >> a[i];
	}
	int cnt = 1;
	std::vector<std::string> v;
	for(int i = 0 ; i < n - 1 ; i ++ )
	{
		bool check = false;
		for(int j = 0 ; j < n - i - 1 ; j ++ )
		{
			if(a[j] > a[j + 1])
			{
				swap(a[j] , a[j + 1]);
				check = true;
			}
		}
		if(check == true)
		{
			std::string x = "Buoc " + std::to_string(cnt) + ": ";
			for(int u : a) x += std::to_string(u) + " ";
			v.push_back(x);
			cnt++;
		}
	}
	for(int i = v.size() - 1 ; i >= 0 ; i-- )
	{
		std::cout << v[i] << std::endl;
	}
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		testcase();
	}
	return 0;
}
