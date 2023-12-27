#include<iostream>
#include<stack>
#include<vector>

int main()
{
	int t; std::cin >> t;
	while(t--)
	{
		std::string s;
		std::cin >> s;
		std::stack<std::string> st1;
		std::stack<int> st2;
		int num = 0;
		for(int i = 0 ; i < s.size() ; i++ )
		{
			if(s[i] >= '0' && s[i] <= '9')
			{
				while(s[i] >= '0' && s[i] <= '9')
				{
					num = num * 10 + s[i] - '0';
					i++;
				}
				i--;
				continue;
			}
			// xu li number dang truoc
			if(s[i] == '[')
			{
				if(num)
				{
					st2.push(num);
					num = 0;
				} else st2.push(1);
				st1.push(std::string(1 , s[i]));
				continue;
			}
			if(s[i] == ']')
			{
				std::string x = "";
				while(!st1.empty() && st1.top() != "[")
				{
					x = st1.top() + x;
					st1.pop();
				}
				st1.pop();
				int k = st2.top();
				st2.pop();
				for(int i = 0 ; i < k ; i++ )
				{
					st1.push(x);
				}
				continue;
			}
			st1.push(std::string(1 , s[i]));
		}
		std::string ans = "";
		while(!st1.empty())
		{
			ans = st1.top() + ans;
			st1.pop();
		}
		std::cout << ans << std::endl;
	}
	return 0;
}
