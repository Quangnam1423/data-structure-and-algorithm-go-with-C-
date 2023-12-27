#include<iostream>
#include<queue>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		if(9 % n == 0)
		{
			std::cout << 9 << std::endl;
			continue;
		}
		std::queue<long long> q;
		q.push(9);
		while(true)
		{
			long long x;
			x = q.front();
			q.pop();
			if((x * 10) % n == 0)
			{
				std::cout << x * 10 << std::endl;
				break;
			}
			else q.push(x*10);
			if((x * 10 + 9) % n == 0)
			{
				std::cout << (x * 10 + 9) << std::endl;
				break;
			}
			else q.push(x*10 + 9);
		}
	}
	return 0;
}
