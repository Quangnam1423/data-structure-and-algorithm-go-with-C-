#include<iostream>
#include<stack>
#include<vector>

int main()
{
	int t; std::cin >> t;
	while(t--)
	{
		int n; std::cin >> n;
		int a[n] , next_greater[n] , smaller[n];
		for(int i = 0 ; i < n ; i++ )
		{
			std::cin >> a[i];
		}
		std::stack<int> st;
		// next greater process
		for(int i = 0 ; i < n ; i++ )
		{
			if(st.empty() || a[i] <= a[st.top()])
			{
				st.push(i);
				continue;
			}
			while(!st.empty() && a[i] > a[st.top()])
			{
				next_greater[st.top()] = i;
				st.pop();
			}
			st.push(i);
		}
		while(!st.empty())
		{
			next_greater[st.top()] = -1;
			st.pop();
		}
		// smaller process
		for(int i = 0 ; i < n ; i++ )
		{
			if(st.empty() || a[i] >= a[st.top()])
			{
				st.push(i);
				continue;
			}
			while(!st.empty() && a[i] < a[st.top()])
			{
				smaller[st.top()] = a[i];
				st.pop();
			}
			st.push(i);
		}
		while(!st.empty())
		{
			smaller[st.top()] = -1;
			st.pop();
		}
		for(int i = 0 ; i < n ; i++ )
		{
			if(next_greater[i] == -1)
			{
				std::cout << -1 << " ";
			}
			else
			{
				std::cout << smaller[next_greater[i]] << " ";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
