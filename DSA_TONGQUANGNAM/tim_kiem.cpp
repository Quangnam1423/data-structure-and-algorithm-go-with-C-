#include<iostream>
#include<algorithm>

int bns(int *a , int l , int r , int x)
{
	if(l > r) return -1;
	int m = (l + r) / 2;
	if(a[m] == x) return 1;
	else if ( a[m] > x) return bns(a , l , m - 1 , x);
	else return bns(a , m + 1 , r , x);
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n , x;
		std::cin >> n >> x;
		int a[n];
		for(auto &o : a) std::cin >> o;
		std::sort(a , a + n);
		std::cout << bns(a , 0 , n - 1 , x);
		std::cout << std::endl;
	}
	return 0;
}
