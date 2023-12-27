#include<iostream>
#include<stack>
#include<vector>

int main()
{
	std::string s;
	int n;
	std::stack<int> stk;
	while(std::cin >> s)
	{
		if( s == "push")
		{
			std::cin >> n;
			stk.push(n);
		}
		else if(s == "pop")
		{
			stk.pop();
		}
		else if(s == "show")
		{
			std::vector<int> a;
			if(stk.empty() == true)
			{
				std::cout << "empty" << std::endl;
				continue;
			}
			while(stk.empty() == false)
			{
				a.push_back(stk.top());
				stk.pop();
			}
			for(int i = a.size() - 1 ; i >= 0 ; i-- )
			{
				std::cout << a[i] << " ";
				stk.push(a[i]);
			}
			std::cout << std::endl;
		}
	}
	return 0;
}
