#include<iostream>

int n , k , a[1009];

void khoitao()
{
	std::cin >> n >> k;
	for(int i = 1 ; i <= k; i++ )
	{
		std::cin >> a[i];
	}
}

bool check()
{
	for(int i = 1 ; i <= k ; i++ )
	{
		if(a[i] != i) return true;
	}
	return false;
}

void in()
{
	for(int i = 1 ; i <= k ; i++ )
	{
		std::cout << a[i] << " ";
	}
}

void sinh()
{
	int x = k;
	while(x > 1 && a[x] == a[x - 1] + 1) x--;
	a[x]--;
	for(int i = x + 1 ; i <= k ; i++ )
	{
		a[i] = n - k + i;
	}
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		khoitao();
		if(check() == true)
		{
			sinh();
			in();
			std::cout << std::endl;
		}
		else
		{
			for(int i = 1 ; i <= k ; i++ )
			{
				std::cout << n - k + i << " ";
			}
			std::cout << std::endl;
		}
	}
	return 0;
}
