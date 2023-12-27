#include<iostream>
// quy uoc c[i][j] nhan gia tri 0 neu ij khong thuoc E
int main()
{
	int a[7][7] = {};
	for(int i = 1 ; i < 7 ; i ++ )
		for(int j = 1 ; j < 7 ; j ++ )
			std::cin >> a[i][j];
	for(int i = 1 ; i < 7 ; i ++ )
	{
		for(int j = 1 ; j < 7 ; j ++ )
			std::cout << a[i][j] << " ";
		std::cout << std::endl;
	}
}
