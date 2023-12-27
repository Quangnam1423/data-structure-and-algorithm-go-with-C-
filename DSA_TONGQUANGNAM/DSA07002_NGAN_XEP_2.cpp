#include<iostream>
#include<stack>
#include<vector>

int main()
{
	std::string s;
	int n;
	int t;
	std::cin >> t;
	std::stack<int> st;
	while(t--)
	{
		std::cin >> s;
		if(s == "PUSH")
		{
			std::cin >> n;
			st.push(n);
		}
		else if(s == "POP")
		{
			if(st.empty() == false)
			{
				st.pop();
			}
		}
		else if(s == "PRINT")
		{
			if(st.empty() == true)
			{
				std::cout << "NONE" << std::endl;
			}
			else
			{
				std::cout << st.top() << std::endl;
			}
		}
	}
	return 0;
} 
