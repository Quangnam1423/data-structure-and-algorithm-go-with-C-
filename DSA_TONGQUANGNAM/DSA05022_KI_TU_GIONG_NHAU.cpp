#include<iostream>
#include<cstring>
#include<algorithm>

int N , ins , del , cop , a[101];

void khoitao()
{
	std::cin >> N;
	std::cin >> ins >> del >> cop;
	std::memset(a , 0 , sizeof(a));
	a[1] = ins;
}

void handle()
{
	int res = 1;
	for(int i = 2 ; i <= N ; i++ )
	{
		if(i % 2 == 1)
		{
			a[i] = std::min({a[i - 1] + ins , a[(i - 1) / 2] + cop + ins , a[(i + 1) / 2] + cop + del});
		}
		else
		{
			a[i] = std::min(a[i - 1] + ins , a[i / 2] + cop);
		}
	}
	std::cout << a[N];
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		khoitao();
		handle();
		std::cout << std::endl;
	}
	return 0;
}
