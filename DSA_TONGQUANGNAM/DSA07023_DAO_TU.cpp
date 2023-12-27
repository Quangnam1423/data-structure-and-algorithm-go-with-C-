#include<iostream>
#include<vector>
#include<sstream>
#include<stack>

int main()
{
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--)
	{
		std::string s;
		std::getline(std::cin , s);
		std::string tmp;
		std::stringstream ss(s);
		std::stack<std::string> st;
		while(ss >> tmp)
		{
			st.push(tmp);
		}
		while(!st.empty())
		{
			std::cout << st.top() << " ";
			st.pop();
		}
		std::cout << std::endl;
	}
}
