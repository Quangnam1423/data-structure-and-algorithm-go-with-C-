#include<iostream>
#include<stack>
#include<vector>

void handle()
{
	std::stack<char> st;
	std::string s;
	std::cin >> s;
	for(int i = 0 ; i < s.size() ; i++ )
	{
		if(s[i] != ')')
		{
			st.push(s[i]);
		}
		else
		{
			std::string tmp = "";
			while(st.top() != '(')
			{
				tmp = st.top() + tmp;
				st.pop();
			}
			st.pop();
			if(!st.empty() && st.top() == '-')
			{
				for(char j : tmp)
				{
					if(j == '-') j = '+';
					else if (j == '+') j = '-';
					st.push(j);
				}
			}
			else
			{
				for(char j : tmp)
				{
					st.push(j);
				}
			}
		}
	}
	std::string ans = "";
	while(!st.empty())
	{
		ans = st.top() + ans;
		st.pop();
	}
	std::cout << ans;
}

int main()
{
	int t; std::cin >> t;
	while(t--)
	{
		handle();
		std::cout << std::endl;
	}
	return 0;
}
