#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t; 
	cin >> t;
	while(t--)
	{
		long n;
		cin >> n;
		long long a[n];
		long long b[n];
//		for(long long  &x : a) cin >> x;
//		for(long long &x : b) cin >> x;
		for(long i = 0 ; i < n ; i++)
		{
			cin >> a[i];
		}
		for(long i = 0 ; i < n ; i++)
		{
			cin >> b[i];
		}
		sort(a,a + n);
		sort(b , b + n);
		long long tong(0);
		for(long i = 0 ; i < n; i++ )
		{
			tong += a[i] * b[n - i - 1];
		}
		cout << tong << endl;
	}
	return 0;
} 
 
