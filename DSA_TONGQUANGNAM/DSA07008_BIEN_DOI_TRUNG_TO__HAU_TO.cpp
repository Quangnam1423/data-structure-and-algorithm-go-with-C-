#include<iostream>
#include<vector>
#include<cstring>
#include<stack>

int value(char x)
{
	if(x == '^') return 4;
	if(x == '*' || x == '/') return 3;
	if(x == '+' || x == '-') return 2;
	return 1;
}

int main()
{
	int t; std::cin >> t;
	while(t--)
	{
		std::string s; std::cin >> s;
		std::string res = "";
		std::stack<char> st;
		for(int i = 0 ; i < s.size() ; i++ )
		{
			if(s[i] == '(') st.push(s[i]);
			else if(s[i] == ')')
			{
				while(st.top() != '(')
				{
					res += st.top();
					st.pop();
				}
				st.pop();
			}
			else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
			{
				while(!st.empty() && value(st.top()) >= value(s[i]))
				{
					res += st.top();
					st.pop();
				}
				st.push(s[i]);
			}
			else res += s[i];
		}
		while(!st.empty())
		{
			if(st.top() != '(') res += st.top();
			st.pop();
		}
		std::cout << res << std::endl;
	}
	return 0;
}
