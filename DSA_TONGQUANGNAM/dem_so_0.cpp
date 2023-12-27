#include<iostream>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		int cnt(0);
		for(int i = 0 ; i < n ; i ++ )
		{
			int x;
			std::cin >> x;
			if(x == 0) cnt++;
		}
		std::cout << cnt << std::endl;
	}
	return 0;
}
