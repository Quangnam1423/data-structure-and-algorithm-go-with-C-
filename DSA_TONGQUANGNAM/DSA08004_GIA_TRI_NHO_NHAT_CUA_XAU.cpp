#include<iostream>
#include<vector>
#include<queue>

void handle()
{
	int k; std::cin >> k;
	std::string s;
	std::cin >> s;
	int dd[127] = {0};
	for(char i : s) dd[i]++;
	std::priority_queue<int> q;
	for(int i : dd)
	{
		if(i > 0) q.push(i);
	}
	while(k--)
	{
		if(q.empty()) break;
		int x = q.top(); q.pop();
		x--;
		q.push(x);
	}
	long long ans = 0;
	while(!q.empty())
	{
		long long x = q.top(); q.pop();
		ans += x * x;
	}
	std::cout << ans;
}

int main()
{
	int t; std::cin >> t;
	while(t--)
	{
		handle();
		std::cout << std::endl;
	}
	return 0;
}
