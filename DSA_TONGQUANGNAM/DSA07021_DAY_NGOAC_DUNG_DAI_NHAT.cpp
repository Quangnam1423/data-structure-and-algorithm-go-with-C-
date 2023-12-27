#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::string s;
		std::cin >> s;
		s = '*' + s;
		std::stack<char> st;
		int v[s.size()] = {};
		st.push(0); 
		for(int i = 1 ; i < s.size() ; i++ )
		{
			if(s[i] == ')' && !st.empty() && s[st.top()] == '(')
			{
				v[i] = i - st.top() + 1 + v[st.top() - 1];
				st.pop();
			}
			else
			{
				st.push(i);
			}
		}
		int res(0);
		for(int i = 0 ; i < s.size() ; i++ )
		{
			res = std::max(res , v[i]);
		}
		std::cout << res << std::endl;
	}
	return 0;
}
