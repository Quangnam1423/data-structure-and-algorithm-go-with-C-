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
		int res(0);
		for(int i = 0 ; i < s.size() ; i++ )
		{
			if(s[i] == ')' && st.empty() )
			{
				res++;
				st.push('(');
				continue;
			}
			if(s[i] == ')' && st.top() == '(')
			{
				st.pop();
				continue;
			}
			st.push(s[i]);
		}
		std::cout << res + (st.size() / 2) << std::endl;
	}
	return 0;
}
