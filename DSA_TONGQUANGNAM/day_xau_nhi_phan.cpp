#include<iostream>

long long f[101];

void khoitao()
{
	f[1] = 1;
	f[2] = 1;
	for(int i = 3 ; i <= 100 ; i ++ )
	{
		f[i] = f[i - 1] + f[i - 2];
	}
}

void Process()
{
	long long n , k;
	std::cin >> n >> k;
	while(true)
	{
		if(n == 1|| n == 2)
		{
			if(n == 1) std::cout << "0" << std::endl;
			else std::cout << "1" <<std::endl;
			return;
		}
		if(k > f[n - 2])
		{
			k -= f[n - 2];
			n--;
		}
		else n -= 2;
	}
}

int main()
{
	khoitao();
	int t;
	std::cin >> t;
	while(t--)
	{
		Process();
	}
	return 0;
}
