#include<iostream>
#include<stack>

int main()
{
	int t; std::cin >> t;
	while(t--)
	{
		std::string s;
		std::cin >> s;
		std::stack<char> st;
		for(int i = 0 ; i < s.size() ; i++ )
		{
			if(st.empty() || s[i] == '(')
			{
				st.push(s[i]);
				continue;
			}
			if(!st.empty() && st.top() == '(')
			{
				st.pop();
			} else st.push(s[i]);
		}
		std::cout << s.size() - st.size() << std::endl;
	}
	return 0;
}
