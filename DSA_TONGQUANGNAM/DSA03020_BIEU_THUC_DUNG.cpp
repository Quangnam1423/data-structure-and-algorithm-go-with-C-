#include<iostream>
#include<stack>

void handle()
{
	std::string s;
	std::cin >> s;
	std::stack<char> st;
	int cnt(0);
	for(int i = 0 ; i < s.size() ; i++ )
	{
		if(s[i] == ']')
		{
			if(st.empty())
			{
				cnt++;
				st.push('[');
			}
			else
			{
				if(st.top() == '[')
				{
					st.pop();
				}
			}
		}else st.push(s[i]);
	}
	std::cout << cnt + st.size() / 2;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		handle();
		std::cout << std::endl;
	}
	return 0;
 } 
