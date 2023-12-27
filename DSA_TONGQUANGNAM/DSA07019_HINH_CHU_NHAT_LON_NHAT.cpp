#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

int main()
{
	int t; std::cin >> t;
	while(t--)
	{
		long n;
		std::cin >> n;
		long a[n] , left[n] , right[n];
		for(int i = 0 ; i < n ; i++ )
		{
			left[i] = 0;
			std::cin >> a[i];
			right[i] = i + 1;
		}
		std::stack<long> st;
		for(long i = 0 ; i < n ; i++ )
		{
			if(st.empty() || a[i] >= a[st.top()])
			{
				st.push(i);
				continue;
			}
			while(!st.empty() && a[i] < a[st.top()])
			{
				right[st.top()] = i;
				st.pop();
			}
			st.push(i);
		}
		while(!st.empty())
		{
			right[st.top()] = n;
			st.pop();
		}
		for(long i = n - 1 ; i >= 0 ; i-- )
		{
			if(st.empty() || a[i] >= a[st.top()])
			{
				st.push(i);
				continue;
			}
			while(!st.empty() && a[i] < a[st.top()])
			{
				left[st.top()] = i + 1;
				st.pop();
			}
			st.push(i);
		}
		while(!st.empty())
		{
			left[st.top()] = 0;
			st.pop();
		}
		long res = 0;
		for(long i = 0 ; i < n ; i++ )
		{
			long x = a[i] * (right[i] - left[i]);
			res = std::max(res , x);
		}
		std::cout << res << std::endl;
	}
	return 0;
}
