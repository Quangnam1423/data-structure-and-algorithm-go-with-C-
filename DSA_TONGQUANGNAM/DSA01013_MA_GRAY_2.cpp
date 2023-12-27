#include<iostream>
#include<vector>

void handle()
{
	std::string s;
	std::cin >> s;
	std::string x(s);
	x[0] = s[0];
	for(int i = 1 ; i < s.size() ; i++ )
	{
		if(s[i] != x[i - 1])
		{
			x[i] = '1';
		}
		else x[i] = '0';
	}
	std::cout << x;
	
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		handle();
		std::cout << std::endl;
	}
	return 0;
}
