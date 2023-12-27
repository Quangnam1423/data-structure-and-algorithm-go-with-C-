#include<iostream>
#include<algorithm>
int n , k , a[1000] , c[1000];

void khoitao()
{
	std::cin >> n >> k;
	a[0] = 1;
	for(int i = 1 ; i <= n ; i ++ )
	{
		std::cin >> a[i];
	}
	std::sort(a + 1 , a + n + 1);
	c[0] = 0;
}

void in()
{
	for(int i = 1 ; i <= k ; i++ )
	{
		std::cout << a[c[i]] << " ";
	}
	std::cout << std::endl;
}

void Try(int i)
{
	for(int j = c[i - 1] + 1 ; j <= n - k + i ; j++ )
	{
		c[i] = j;
		if(i == k)
		{
			in();
		}
		else Try(i + 1);
	}
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		khoitao();
		Try(1);
	}
	return 0;
}
