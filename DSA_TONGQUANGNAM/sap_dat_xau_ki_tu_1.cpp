#include<iostream>
#include<algorithm> 


int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::string s;
		std::cin >> s;
		int dd[127] = {};
		int maxx = 0;
		for(char i : s )
		{
			dd[i]++;
			maxx = std::max(maxx , dd[i]);
		}
		if(maxx <= (s.length() + 1) / 2) std::cout << 1 << std::endl;
		else std::cout << -1 << std::endl;
	}
	return 0;
}

