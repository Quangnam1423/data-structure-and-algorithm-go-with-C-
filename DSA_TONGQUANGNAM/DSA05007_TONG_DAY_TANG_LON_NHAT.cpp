#include<iostream>
#include<algorithm>

int lis(int *a , int n)
{
	int Lis[n] = {};
	Lis[0] = a[0];
	for(int i = 1; i < n ; i ++ )
	{
		Lis[i] = a[i];
		for(int j = 0 ; j < i ; j ++ )
		{
			if(a[i] > a[j] && Lis[j] + a[i] > Lis[i])
			{
				Lis[i] = Lis[j] + a[i];
			}
		}
	}
	return *std::max_element(Lis , Lis + n);
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		int a[n];
		for(int &x : a) std::cin >> x;
		std::cout << lis(a , n) <<std::endl;
    }
	return 0;
}
