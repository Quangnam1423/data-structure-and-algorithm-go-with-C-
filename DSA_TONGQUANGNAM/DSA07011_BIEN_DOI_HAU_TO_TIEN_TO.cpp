#include<iostream>
#include<vector>
#include<stack>
#include<cstring>

int main()
{
	int t; std::cin >> t;
	while(t--)
	{
		std::string s;
		std::cin >> s;
		std::stack<std::string> st;
		for(int i = 0 ; i < s.size() ; i++ )
		{
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
			{
				std::string se = st.top(); st.pop();
				std::string fi = st.top(); st.pop();
				fi = s[i] + fi + se;
				st.push(fi);
				continue;
			}
			else
			{
				st.push(std::string(1 , s[i]));
			}
		}
		std::cout << st.top() << std::endl;
	}
	return 0;
}
