#include<iostream>
#include<vector>
#include<sstream>

int main()
{
	int n;
	std::cin >> n;
	std::cin.ignore();
	std::vector<std::vector<int> > a(n);
	for(int i = 0 ; i < n ; i++ )
	{
		std::string s;
		getline(std::cin , s);
		std::string tmp;
		std::stringstream ss(s);
		while(ss >> tmp)
		{
			a[i].push_back(std::stoi(tmp));
		}
	}
	for(int i = 0 ; i < n ; i++ )
	{
		for(int j = 0 ; j < a[i].size() ; j++ )
		{
			if(a[i][j] > i)
			{
				std::cout << i + 1 << " " << a[i][j] << std::endl;
			}
		}
	}
	return 0;
} 
