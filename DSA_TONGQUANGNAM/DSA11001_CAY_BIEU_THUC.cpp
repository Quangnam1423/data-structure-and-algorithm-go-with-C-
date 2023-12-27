#include<iostream>
#include<stack>

int main()
{
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--)
	{
		std::stack<std::string> st;
		std::string s;
		std::cin >> s;
		for(int i = 0 ; i < s.size() ; i++ )
		{
			if(s[i] == '-' || s[i] == '+' || s[i] == '*' || s[i] == '/' || s[i] == '^')
			{
				std::string se = st.top(); st.pop();
				std::string fi = st.top(); st.pop();
				fi = fi + s[i] + se;
				st.push(fi);
			}	
			else st.push(std::string(1 , s[i]));
		}
		std::cout << st.top() << std::endl;
	}
	return 0;
}
