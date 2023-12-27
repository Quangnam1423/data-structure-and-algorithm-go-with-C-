#include<iostream>
#include<vector>
#include<sstream>
#include<cstring>

int main()
{
	int n;
	std::cin >> n;
	int a[n][n];
	std::memset(a , 0 , sizeof(a));
	std::vector<std::vector<int> > v(n);
	std::cin.ignore();
	for(int i = 0 ; i < n ; i++ )
	{
		std::string x;
		getline(std::cin , x);
		std::stringstream ss(x);
		std::string tmp;
		while(ss >> tmp)
		{
			v[i].push_back(std::stoi(tmp));
		}
	}
	for(int i = 0 ; i < v.size() ; i++ )
	{
		for(int j = 0 ; j < v[i].size() ; j++ )
		{
			a[i][v[i][j] - 1] = 1; 
		}
	}
	for(int i = 0 ; i < n ; i ++ )
	{
		for(int j = 0 ; j < n ; j++ )
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
