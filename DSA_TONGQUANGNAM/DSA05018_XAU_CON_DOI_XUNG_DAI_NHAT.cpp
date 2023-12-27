#include<iostream>
#include<cstring>

int LongestPalSubStr(std::string s)
{
	int n = s.size();
	int max_length = 1;
	bool table[n][n];
	std::memset(table , false , sizeof(table));
	for(int i = 0 ; i < n ; i++ )
	{
		table[i][i] = true;
	}
	for(int i = 0 ; i < n - 1 ; i++ )
	{
		if(s[i] == s[i + 1])
		{
			table[i][i + 1] = true;
			max_length = 2;
		}
	}
	for(int i = 3 ; i <= n ; i++ )
	{
		for(int k = 0 ; k < n - i + 1; k++ )
		{
			int j = k + i - 1;
			if(s[k] == s[j] && table[k + 1][j - 1])
			{
				table[k][j] = true;
				if(i > max_length) max_length = i;
			}
		}
	}
	return max_length;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::string s;
		std::cin >> s;
		std::cout << LongestPalSubStr(s) << std::endl;
	}
	return 0;
}
