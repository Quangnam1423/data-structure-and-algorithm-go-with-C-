#include<iostream>
#include<queue>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		long long n;
		std::cin >> n;
		if(n == 1)
		{
			std::cout << 1 << std::endl;
			continue;
		}
		long long cnt(1);
		std::queue<long long> q;
		q.push(1);
		while(true)
		{
			long long x;
			x = q.front();
			q.pop();
			if((x * 10) % n == 0)
			{
				std::cout << (x * 10) << std::endl;
				break;
			}
			else q.push(x * 10);
			if((x * 10 + 1) % n == 0)
			{
				std::cout << (x * 10 + 1) << std::endl;
				break;
			}
			else q.push(x*10 + 1);
		}
	}
	return 0;
}
