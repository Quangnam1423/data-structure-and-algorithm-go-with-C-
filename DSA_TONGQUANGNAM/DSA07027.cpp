#include<iostream>
#include<stack>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		int a[n] , c[n] = {};
		for(int i = 0 ; i < n ; i++ )
		{
			std::cin >> a[i];
		}
		std::stack<int> st;
		for(int i = 0 ; i < n ; i++ )
		{
			if(st.empty() || a[i] <= a[st.top()])
			{
				st.push(i);
			}
			else
			{
				while(!st.empty() && a[i] > a[st.top()])
				{
					c[st.top()] = a[i];
					st.pop();
				}
				st.push(i);
			}
		}
		while(!st.empty())
		{
			c[st.top()] = -1;
			st.pop();
		}
		for(int i = 0 ; i < n ; i++ )
		{
			std::cout << c[i] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
