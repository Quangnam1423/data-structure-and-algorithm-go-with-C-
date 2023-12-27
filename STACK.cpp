// stack.pop() --- erase the last element
//stack.top()--- return the value of top element
//stack.push --- push a element on the top of the stack
// stack.size()-- return the size of the stack
// stack.empty() --- return whether stack is empty
#include<iostream>
#include<stack>

int main()
{
//	std::stack<int> st;
//	st.push(1);
//	st.push(2);
//	st.push(3);
//	std::cout << st.top() << std::endl;
//	st.pop();
//	std::cout << st.top() << std::endl;
//	return 0;
	int n;
	std::cin >> n;
	int a[n] , b[n];
	for(int &x : a) std::cin >> x;
	std::stack<int> st;
	for(int i = 0 ; i < n ; i ++ )
	{
		if(st.empty())
		{
			st.push(i);
		}
		else
		{
			while(!st.empty() && a[st.top()] < a[i])
			{
				b[st.top()] = a[i];
				st.pop();
			}
			st.push(i);
		}
	}
	while(!st.empty())
	{
		b[st.top()] = -1;
		st.pop();
	}
	for(int i : b) std::cout << i << " ";
	return 0;
}
