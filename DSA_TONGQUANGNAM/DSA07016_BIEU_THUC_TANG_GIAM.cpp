#include<iostream>
#include<stack>

int main()
{
	int t; std::cin >> t;
	while(t--)
	{
		std::string s;
		std::cin >> s;
		std::stack<int> st;
		st.push(1);
		int count = 1;
		for(int i = 0 ; i < s.size() ; i++ )
		{
			count++;
			if(s[i] == 'I')
			{
				while(!st.empty())
				{
					std::cout << st.top();
					st.pop();
				}
			}
			st.push(count);
		}
		while(!st.empty())
		{
			std::cout << st.top();
			st.pop();
		}
		std::cout << std::endl;
	}
	return 0;
}
