#include<iostream>

int binary_Search(int *a , int l , int r , int k)
{
	if(l > r) return -1;
	int x = (l + r) / 2;
	if(a[x] == k) return x;
	else if(a[x] < k) return binary_Search(a,x + 1 , r , k);
	else return binary_Search(a , l , x - 1 , k);
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n , k ;
		std::cin >> n >> k ;
		int a[n];
		for(int i = 0 ; i < n ; i ++ )
		{
			std::cin >> a[i];
		}
		int j = binary_Search(a , 0 , n - 1 , k);
		if(j == -1) std::cout << "NO" << std::endl;
		else std::cout << j + 1 << std::endl;
	}
	return 0;
} 
