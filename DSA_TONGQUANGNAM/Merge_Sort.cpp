#include<iostream>
#include<vector>

void Merge(int *a , int l , int m , int r)
{
	std::vector<int> x(a + l , a + m + 1);
	std::vector<int> y(a + m + 1 , a + r + 1);
	int i = 0 , j = 0;
	while(i < x.size() && j < y.size() )
	{
		if(x[i] <= y[j])
		{
			a[l] = x[i]; l++; i++;
		}
		else
		{
			a[l] = y[j] ; j++; l++;
		}
	}
	while(i <x.size())
	{
		a[l] = x[i] ; l++; i++;
	}
	while(j < y.size())
	{
		a[l] = y[j] ; l++; j++;
	}
}

void Merge_Sort(int *a , int l , int r)
{
	if(l >= r) return;
	int m = (l + r) / 2;
	Merge_Sort(a , l , m);
	Merge_Sort(a , m + 1 , r);
	Merge(a , l , m , r);
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
		for(int i = 0 ; i < n ; i ++ )
		{
			std::cin >> a[i];
		}
		Merge_Sort(a , 0 , n - 1);
		for(int i = 0 ; i < n ; i ++ )
		{
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
