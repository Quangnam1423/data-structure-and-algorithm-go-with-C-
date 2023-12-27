#include<iostream>
#include<algorithm>
#include<cstring>

void handle()
{
	int k;
	std::string s;
	std::cin >> k;
	std::cin >> s;
	if(k >= s.size())
	{
		std::sort(s.begin() , s.end() , std::greater<char>()); 
		std::cout << s;
	}
	else
	{
		for(int i = 0 ; i < k ; i++ )
		{
			int x = i;
			for(int j = i + 1 ; j < s.size() ; j++ )
			{
				if(s[j] >= s[x])
				{
					x = j;
				}
			}
			if(s[x] == s[i] && k < s.size())
			{
				k++;
				continue;
			}
			else std::swap(s[x] , s[i]);
		}
		std::cout << s;
	}
	std::cout << std::endl;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		handle();
	}
	return 0;
}
