#include<queue>
#include<iostream>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		std::queue<std::string> q;
		q.push("1");
		std::cout << 1 << " ";
		int cnt(1);
		while(true)
		{
			std::string s;
			s = q.front();
			q.pop();
			std::cout << s + "0" << " ";
			q.push(s + "0");
			if(++cnt >= n) break;
			std::cout << s + "1" << " ";
			q.push(s + "1");
			if(++cnt >= n) break;
		}
		std::cout << std::endl;
	}
	return 0;
}
