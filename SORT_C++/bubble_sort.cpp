// bubble sort 
#include<iostream>
#include<vector>

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
// A function to implement bubble sort  
void bubbleSort(int *arr, int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  

void InsertionSort(int *arr , int n)
{
	for(int i = 1 ; i < n ; i++ )
	{
		//get i elements
		int x = arr[i] , pos = i - 1;
		while(pos >= 0 && x < arr[pos])
		{
			arr[pos + 1] = arr[pos--];
		}
		arr[pos + 1] = x;
	}
} 

void SelectionSort(int arr[] , int n)
{
	for(int i = 0 ; i < n - 1; i ++ )
	{
		int min = i;
		for(int j = i + 1 ; j < n ; j++ )
		{
			if(arr[j] <= arr[min])
			{
				min = j;
			}
		}
		swap(arr + min , arr + i);
	}	
} 

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
	Merge_Sort(a , m + 1, r);
	Merge(a , l , m , r);
}


int main()
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
	return 0;
}
