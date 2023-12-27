#include<iostream>
#include<stack>
#include<algorithm>

int main()
{
	int n; 
	std::cin >> n;
	int a[n] , b[n];
	for(int &x : a) std::cin >> x;
	std::stack<int> st;
	int res = INT_MIN;
	int i = 0;
	while(i < n)
	{
		if(st.empty() || a[i] >= a[st.top()])
		{
			st.push(i);
			++i;
		}
		else
		{
			int idx = st.top();
			st.pop();
			if(st.empty())
			{
				res = std::max(res , i * a[idx]);
			}
			else
			{
				res = std::max(res , a[idx] * (i - st.top() - 1));
			}
		}
	}
	while(!st.empty())
	{
		int idx = st.top();
		st.pop();
		if(st.empty())
		{
			res = std::max(res , i * a[idx]);
		}
		else
		{
			res = std::max(res , a[idx] * (i - st.top() - 1));
		}
	}
	std::cout << res << std::endl;
	return 0;
 } 
