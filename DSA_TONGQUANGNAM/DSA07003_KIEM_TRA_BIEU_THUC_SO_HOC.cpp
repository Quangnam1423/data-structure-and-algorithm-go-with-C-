#include<iostream>
#include<cstring>
#include<stack>

void Handle()
{
	std::string s;
	std::getline(std::cin , s);
	std::stack<char> st;
	bool check;
	for(int i = 0 ; i < s.size() ; i++ )
	{
		if(s[i] == ')')
		{
			check = true;
			while(st.top() != '(' )
			{
				if(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
				{
					check = false;
				}
				st.pop();
			}
			st.pop();
			if(check == true) break;
		}
		else st.push(s[i]);
	}
	if(check) std::cout << "Yes" << std::endl; 
	else std::cout << "No" << std::endl;
}

int main()
{
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--)
	{
		Handle();
	}
	return 0;
}
