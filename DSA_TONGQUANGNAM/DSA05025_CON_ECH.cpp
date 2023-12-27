#include<iostream>
#include<cstring>

long long f[1000000];

long long handle(long long n)
{
	if(n <= 2) return n;
	if(n == 3) return 4;
	if(f[n] != 0) return f[n];
	else
	{
		f[n] = handle(n - 1) + handle(n - 2) + handle(n - 3);
		return f[n];
	}
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::memset(f , 0 , sizeof(f));
		f[1] = 1;
		f[2] = 2;
		f[3] = 4;
		long long n;
		std::cin >> n;
		std::cout << handle(n) << std::endl;
	}
	return 0;	
} 
