#include<iostream>
#include<queue>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::queue<int> q;
		int n;
		std::cin >> n;
		for(int i = 0 ; i < n ; i++ )
		{
			int step;
			std::cin >> step;
			switch (step)
			{
				case 1:
					{
						std::cout <<q.size() << std::endl;
						break;
					}
				case 2:
					{
						std::cout << (q.empty() ? "YES" : "NO") << std::endl;
						break;
					}
				case 3:
					{
						int x;
						std::cin >> x;
						q.push(x);
						break;
					}
				case 4:
					{
						if(!q.empty()) q.pop();
						break;
					}
				case 5:
					{
						std::cout << (q.empty() ? -1 : q.front()) << std::endl;
						break;
					}
				case 6:
					{
						std::cout << (q.empty() ? -1 : q.back()) << std::endl;
						break;
					}
			}
		}
	}
	return 0;
}
