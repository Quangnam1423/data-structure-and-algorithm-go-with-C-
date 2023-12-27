#include<iostream>
#define ROW 50
#define COL 50
const long MOD = 1e9 + 7;

void nhap(long long (*a)[COL] , int n , int m)
{
	for(int i = 0 ; i < n ; i ++ )
	{
		for(int j = 0 ; j < m ; j ++ )
		{
			std::cin >> a[i][j];
		}
	}
}

void xuat(long long (*a)[COL] , int n , int m)
{
	for(int i = 0 ; i < n ; i ++ )
	{
		for(int j = 0 ;j < m ; j ++ )
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void Multi_matrix(long long (*a)[COL] , long long (*b)[COL] , long n , long m , long p)
{
	long long c[ROW][COL] = {};
	for(int i = 0 ; i < n ; i++ )
	{
		for(int j = 0 ; j < p ; j++ )
		{
			c[i][j] = 0;
			{
				for(int e = 0 ; e < m ; e ++ )
				{
					c[i][j] += a[i][e] * b[e][j];
				}
			}
		}
	}
	long y = n , x = p;
	xuat(c , y , x );
}


int main()
{
	int n , m , p , q;
	std::cin >> n >> m >> p >> q;
	long long a[ROW][COL] , b[ROW][COL];
	nhap(a , n , m);
	nhap(b , p , q);
	Multi_matrix(a , b , n , m , q);
	return 0;
}
