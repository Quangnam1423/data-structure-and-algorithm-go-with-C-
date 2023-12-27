#include<iostream>
#include<vector>
#include<queue>
#include<stack>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		long long n;
		std::cin >> n;
		std::queue<long long> q;
		q.push(6);
		q.push(8);
		std::vector<long long> v = {6 , 8};
		for(long long i = 2 ; i < (1 << n) ; i = (i << 1))
		{
			for(int j = 0 ; j < i ; j++ )
			{
				long long x = q.front();
				q.pop();
				v.push_back(x * 10 + 6);
				v.push_back(x * 10 + 8);
				q.push(x * 10 + 6);
				q.push(x * 10 + 8);
			}
		}
		if(n == 1)
		{
			std::cout << 8 << " " << 6 << std::endl;
		}
		else
		{
			for(int i = v.size() - 1 ; i >= 0 ; i-- )
			{
				std::cout << v[i] << " ";
			}
			std::cout << std::endl;
		}
	}
	return 0;
}
