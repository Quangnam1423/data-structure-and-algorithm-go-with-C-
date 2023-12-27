#include<iostream>
#include<algorithm>

int main()
{
	int n;
	std::cin >> n;
	int a[n + 1];
	a[0] = 0;
	for(int i = 1 ; i <= n ; i ++ )
	{
		std::cin >> a[i];
	}
	int res = 0 , cnt = 1;
	for(int i = 1 ; i <= n ; i ++ )
	{
		if(a[i] > a[i - 1]) cnt++;
		else cnt = 1;
		res = std::max(res , cnt);
	}
	std::cout << n - res;
	return 0;
}
