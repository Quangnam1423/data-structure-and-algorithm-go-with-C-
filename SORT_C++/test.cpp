#include<iostream>

int a[100] , n;

void khoitao()
{
	std::cin >> n;
	for(int i = 0 ; i <= n ; i++ )
	{
		a[i] = i;
	}
}

void in()
{
	for(int i = 1 ; i <= n ; i++ )
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
}

void Try(int i)
{
	for(int j = i ; j <= n ; j++ )
	{
		a[i] = j;
		if(i == n)
		{
			in();	
		} 
		else Try(i + 1);
	}
}

int main()
{
	khoitao();
	Try(1);
	return 0;
}
