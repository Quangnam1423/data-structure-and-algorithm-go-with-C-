#include<iostream>
#include<stack>
#include<cstring>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::string s;
		std::cin >> s;
		std::stack<std::string> st;
		for(int i = s.size() - 1 ; i >= 0 ; i-- )
		{
			if(s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*' || s[i] == '^')
			{
				std::string fi = st.top(); st.pop();
				std::string se = st.top(); st.pop();
				std::string tmp = fi + se + s[i];
				st.push(tmp); 
			}
			else st.push(std::string(1 , s[i]));
		}
		std::cout << st.top() << std::endl;
	}
	return 0;
}
