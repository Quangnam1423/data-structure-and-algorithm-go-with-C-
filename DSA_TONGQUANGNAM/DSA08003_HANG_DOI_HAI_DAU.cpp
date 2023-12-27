#include<iostream>
#include<deque>

int main()
{
	int t;
	std::cin >> t;
	std::deque<int> dq;
	while(t--)
	{
		std::string s;
		std::cin >> s;
		if(s == "PUSHBACK")
		{
			int x;
			std::cin >> x;
			dq.push_back(x);
			continue;
		}
		if(s == "PUSHFRONT")
		{
			int x;
			std::cin >> x;
			dq.push_front(x);
			continue;
		}
		if(s == "POPBACK")
		{
			if(!dq.empty())
			{
				dq.pop_back();
			}
			continue;
		}
		if(s == "POPFRONT")
		{
			if(!dq.empty())
			{
				dq.pop_front();
			}
			continue;
		}
		if(s == "PRINTFRONT")
		{
			if(dq.empty())
			{
				std::cout << "NONE" << std::endl;
			}
			else std::cout << dq.front() << std::endl;
			continue;
		}
		if(s == "PRINTBACK")
		{
			if(dq.empty())
			{
				std::cout << "NONE" << std::endl;
			}
			else std::cout << dq.back() << std::endl;
			continue;
		}
	}
	return 0;
}
