#include<iostream>

long long d[11][11];
long long n , k;
const long long MOD = 1e9 + 7;

void nhap(long long (*a)[11] , long long n)
{
	for(long long i = 0 ; i < n; i++ )
	{
		for(long long j = 0 ; j < n ; j ++ )
		{
			std::cin >> a[i][j];
			d[i][j] = a[i][j];
		}
	}
}

void xuat(long long (*a)[11] , long long n)
{
	for(long long i = 0 ; i < n; i++ )
	{
		for(long long j = 0 ; j < n ; j ++ )
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void Multi_Matrix(long long (*a)[11] , long long (*b)[11] , long long n)
{
	long long c[11][11] = {};
	for(long long i = 0 ; i < n ; i ++ )
	{
		for(long long j = 0 ; j < n; j ++ )
		{
			for(long long k = 0 ; k < n; k ++ )
			{
				c[i][j] += a[i][k] * b[k][j];
				c[i][j] %= MOD;
			}
		}
	}
	for(long long i = 0 ; i < n ; i ++ )
	{
		for(long long j = 0 ; j < n ; j++ )
		{
			a[i][j] = c[i][j];
		}
	}
}

void Pow(long long a[11][11], long long k) {
    if (k == 1) return;
    Pow(a, k / 2);
    Multi_Matrix(a, a , n);
    if (k % 2 == 1) Multi_Matrix(a, d , n);
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::cin >> n >> k;
		long long a[11][11];
		nhap(a , n);
		Pow(a , k);
		long long tong = 0;
		for(long long i = 0 ; i < n ; i ++ )
		{
			tong += a[i][n - 1];
			tong %= MOD;
		}
		std::cout << tong << std::endl;
	}
	return 0;
}

