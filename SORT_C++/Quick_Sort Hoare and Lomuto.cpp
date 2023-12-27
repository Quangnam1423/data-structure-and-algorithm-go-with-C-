 #include<iostream>
#include<vector>
#include<algorithm>

int partition1(int *a , int l , int r) // partition lomuto form
{
	int pivot = a[r];
	int i = l - 1;
	for(int j = l ; j < r ; j ++ )
	{
		if(a[j] <= pivot)
		{
			++i;
			std::swap(a[j] , a[i]);
		}
	}
	// take the pivot element to the middle of the array
	++i;
	std::swap(a[i] , a[r]);
	return i; // return the position of the pivot element......
}

int partition2(int *a , int l , int r) //partition hoare
{
	int pivot = a[l];
	int i = l - 1 , j = r + 1;
	while(true)
	{
		do
		{
			i++;
		} while(a[i] < pivot);
		do
		{
			j--;
		} while(a[j] > pivot);
		if (i < j)
		{
			std::swap(a[i] , a[j]);
		}
		else return j;
	}
}

void quicksort1(int *a , int l , int r)
{
	if ( l >= r) return;
	int p = partition1(a , l , r);
	quicksort1(a , l , p - 1);  // sort the array from the first element to the most near the pivot element
	quicksort1(a , p + 1 , r);  // sort the rest of elements
}

void quicksort2(int * a, int l , int r)
{
	if(l >= r) return;
	int p = partition2(a , l , r);
	quicksort2(a , l , p);
	quicksort2(a , p + 1 , r);
}

int main()
{
	int n;
	std::cin >> n;
	int a[n];
	for(auto &x : a) std::cin >> x;
	quicksort2(a , 0 , n - 1);
	for(auto x : a) std::cout << x << " ";
	
	return 0;
}
