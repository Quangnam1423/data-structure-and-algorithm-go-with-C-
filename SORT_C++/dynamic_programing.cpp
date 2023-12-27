#include<iostream>

long long fib[100005];

long long handle(int n)
{
	if(n <= 1) return n;
	if(fib[n] != 0) return fib[n];
	else 
	{
		fib[n] = handle(n - 1) + handle(n - 2);
		return fib[n];
	}
}

// Big-O notation: approximately O(n).

long long handle1(int n)
{
	if(n <= 1) return n;
	else return handle1(n - 1) + handle1(n - 2);
}

long long handle3(int n)
{
	if (n <= 1) return n;
	long long second(1) , first(0);
	for(int i = 2 ; i <= n ; i++ )
	{
		second = second + first;
		first = second - first;	
	}
	return second;
} 

int main()
{
	fib[0] = 0;
	fib[1] = 1;
	int n;
	std::cin >> n;
	std::cout << handle3(n) << std::endl;
	return 0;
}
