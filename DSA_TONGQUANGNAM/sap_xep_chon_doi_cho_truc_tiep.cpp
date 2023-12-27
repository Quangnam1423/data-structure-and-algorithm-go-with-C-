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
	int n;
	std::cin >> n;
	int a[n];
	for(auto &x : a) std::cin >> x;
	std::vector<std::string> v;
	for(int i = 0 ; i < n - 1 ; i++ )
	{
		std::string x = "Buoc " + std::to_string(i + 1) + ": ";
		int min = i;
		for(int j = i + 1 ; j < n ; j ++ )
		{
			if(a[j] < a[min]) min = j;
		}
		swap(a[i] , a[min]);
		for(int e = 0 ; e < n ; e++ )
		{
			x += std::to_string(a[e]) + " ";
		}
		v.push_back(x);
    }
    for(int i = v.size() - 1 ; i >= 0 ; i-- )
    {
    	std::cout << v[i] << std::endl;
	}
	return 0;
}
