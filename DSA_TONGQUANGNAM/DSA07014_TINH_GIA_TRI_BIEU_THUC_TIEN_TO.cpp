#include<iostream>
#include<stack>
#include<vector>
#include<cmath>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::string s;
		std::cin >> s;
		std::stack<int> st;
		for(int i = s.size() - 1 ; i >= 0 ; i-- )
		{
			if(s[i] == '-')
			{
				int x = st.top(); st.pop();
				int y = st.top(); st.pop();
				int z = x - y;
				st.push(z);
				continue;
			}	
			if(s[i] == '+')
			{
				int x = st.top(); st.pop();
				int y = st.top(); st.pop();
				int z = y + x;
				st.push(z);
				continue;
			}
			if(s[i] == '*')
			{
				int x = st.top(); st.pop();
				int y = st.top(); st.pop();
				int z = y * x;
				st.push(z);
				continue;
			}
			if(s[i] == '/')
			{
				int x = st.top(); st.pop();
				int y = st.top(); st.pop();
				int z = x / y;
				st.push(z);
				continue;
			}
			if(s[i] == '^')
			{
				int x = st.top(); st.pop();
				int y = st.top(); st.pop();
				int z = std::pow(y , x);
				st.push(z);
				continue;
			}
			int t = s[i] - '0';
			st.push(t); 
		}
		std::cout << st.top() << std::endl;
	}
	return 0;
}
