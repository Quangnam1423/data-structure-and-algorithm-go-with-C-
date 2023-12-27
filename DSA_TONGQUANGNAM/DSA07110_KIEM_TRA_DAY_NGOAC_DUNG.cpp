#include<iostream>
#include<stack>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::string s;
		std::cin >> s;
		std::stack<char> st;
		for(int i = 0 ; i < s.size() ; i++ )
		{
			if(s[i] == ')' && !st.empty() && st.top() == '(')
			{
				st.pop();
			}
			else if(s[i] == ']' && !st.empty() && st.top() == '[')
			{
				st.pop();
			}
			else if ( s[i] == '}' && !st.empty() && st.top() == '{')
			{
				st.pop();
			}
			else st.push(s[i]);
		}
		if(st.empty()) std::cout << "YES" << std::endl;
		else std::cout << "NO" << std::endl;
	}
	return 0;
}
