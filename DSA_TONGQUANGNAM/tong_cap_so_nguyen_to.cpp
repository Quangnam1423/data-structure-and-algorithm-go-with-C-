#include<iostream>
#include<cmath>

bool check(int n)
{
	for(int i = 2; i <= sqrt(n) ; i ++ )
	{
		if(n % i == 0) return false;
	}
	return n >= 2;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		bool boolean = false;
		for(int i = 2 ; i <=sqrt(n) ; i++ )
		{
			if(check(i) == true && check(n - i) == true)
			{
				boolean = true;
				std::cout << i << " " << n - i << std::endl;
				break;
			}
		}
		if(boolean == false) std::cout << -1 << std::endl;
	}
	return 0;
}
