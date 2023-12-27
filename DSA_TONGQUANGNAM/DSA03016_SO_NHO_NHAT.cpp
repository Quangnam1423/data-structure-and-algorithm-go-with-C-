#include<iostream>
#include<cmath>
#include<algorithm>

void in(int *a , int number)
{
	for(int i = 1 ; i <= number ; i++ )
	{
		std::cout << a[i];
	}
}

void handle(int sum , int number)
{
	if((sum > number * 9) || sum == 0)
	{
		std::cout << -1;
		return;
	}
	int a[number + 1];
	a[1] = 1;
	sum--;
	for(int i = number ; i > 1 ; i-- )
	{
		if(sum >= 9)
		{
			a[i] = 9;
			sum -= 9;
			continue;
		}
		if(sum < 9)
		{
			a[i] = sum;
			sum = 0;
			continue;
		}
	}
	a[1] = a[1] + sum;
	in(a , number);
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int s , num;
		std::cin >> s >> num;
		handle(s , num);
		std::cout << std::endl;
	}
	return 0;
}
