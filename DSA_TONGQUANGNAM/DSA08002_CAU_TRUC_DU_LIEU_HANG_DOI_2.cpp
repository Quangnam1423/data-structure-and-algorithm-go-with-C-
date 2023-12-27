#include<iostream>
#include<queue>

int main()
{
	std::queue<int> q;
	int t;
	std::cin >> t;
	while(t--)
	{
		std::string s;
		std::cin >> s;
		if(s == "PUSH")
		{
			int x;
			std::cin >> x;
			q.push(x);
			continue;
		}
		if(s == "POP")
		{
			if(!q.empty())
			{
				q.pop();
				continue;
			}
		}
		if(s == "PRINTFRONT")
		{
			if(q.empty()) std::cout << "NONE"; else std::cout << q.front();
			std::cout << std::endl;
			continue;
		}
	}
}
