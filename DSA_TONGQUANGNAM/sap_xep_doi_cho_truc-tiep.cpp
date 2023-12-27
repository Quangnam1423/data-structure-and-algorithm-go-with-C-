#include<iostream>

void swap(int &a , int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void Selection_Sort(int *a , int n)
{
	for(int i = 0 ; i < n - 1 ; i++ )
	{
		std::cout << "Buoc " << i + 1 << ":";
		int min = i;
		for(int j = i + 1 ; j < n ; j ++ )
		{
			if(a[min] > a[j] ) min = j;
		}
		swap(a[min] , a[i]);
		for(int k = 0 ; k < n ; k++ )
		{
			std::cout << a[k] << " ";
		}
		std::cout << std::endl;
	}
}


int main()
{
	int n;
	std::cin >> n;
	int a[n];
	for(auto &i : a) std::cin >> i;
	Selection_Sort(a , n);
	return 0;
}
