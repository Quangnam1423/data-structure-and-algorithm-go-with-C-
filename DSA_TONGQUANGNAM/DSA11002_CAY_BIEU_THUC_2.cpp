#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<queue>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		std::string s[n];
		for(int i = 0 ; i < n ; i++ )
			 std::cin >> s[i];
		// nhap tham so moi test case
		std::queue<int> st;
		for(int i = n - 1 ; i >= 0 ; i-- )
		{
			if(s[i] == "+")
			{
				int x = st.front(); st.pop();
				int y = st.front(); st.pop();
				int z = x + y;
				st.push(z);
				continue;
			}
			if(s[i] == "-")
			{
				int x = st.front(); st.pop();
				int y = st.front(); st.pop();
				int z = y - x;
				st.push(z);
				continue;
			}
			if(s[i] == "/")
			{
				int x = st.front(); st.pop();
				int y = st.front(); st.pop();
				int z = y / x;
				st.push(z);
				continue;
			}
			if(s[i] == "*")
			{
				int x = st.front(); st.pop();
				int y = st.front(); st.pop();
				int z = x * y;
				st.push(z);
				continue;
			}
			st.push(std::stoi(s[i]));
		}
		std::cout << st.front() << std::endl;
	}
	return 0;
}
