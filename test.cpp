#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>

int main()
{
	int t; std::cin >> t;
	while (t--)
	{
		std::string s;
		std::cin >> s;
		for (long long unsigned int i = 0 ; i < s.size() ; i++ )
		{
			if(!isdigit(s[i]))
			{
				s[i] = ' ';
			}
		}
		std::cout << s;
		std::vector<int> v;
		std::stringstream ss(s);
		std::string temp;
		while(ss >> temp)
		{
			v.push_back(std::stoi(temp));
		}
		std::cout << *min_element(v.begin() , v.end());
		std::cout << std::endl;
	}
	return 0;
}