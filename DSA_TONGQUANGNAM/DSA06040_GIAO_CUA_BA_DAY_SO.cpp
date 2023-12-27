#include<iostream>

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		long N1 , N2 , N3;
		std::cin >> N1
				 >> N2
				 >> N3;
		
		long long arr1[N1] , arr2[N2] , arr3[N3];
		for(auto &x : arr1) std::cin >> x;
		for(auto &x : arr2) std::cin >> x;
		for(auto &x : arr3) std::cin >> x;
		
		
		bool check = false;
		long n1 = 0 , n2 = 0 , n3 = 0; 
		
		
		while(n1 < N1 && n2 < N2 && n3 < N3)
		{
			if(arr1[n1] == arr2[n2] && arr2[n2] == arr3[n3] )
			{
				std::cout << arr1[n1] << " ";
				n1++;
				n2++;
				n3++;
				check = true;
			}
			else if (arr1[n1] < arr2[n2])
			{
				n1++;
			}
			else if (arr2[n2] < arr3[n3])
			{
				n2++;
			}
			else
			{
				n3++;
			}
		}
		if(check == false) std::cout << -1;
		std::cout << std::endl;
	}
	return 0;
}
