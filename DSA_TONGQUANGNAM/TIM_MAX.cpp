#include<iostream>
#include<algorithm>

using namespace std;

long long X = 1e9 + 7 ;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++ )
		{
			cin >> a[i];
		}
		sort(a , a + n);
		long long tong(0);
		for(int i = 0; i < n ; i++ )
		{
			tong += i * a[i];
			tong = tong % X;
		}
		cout << tong << endl;
	}
	return 0;
} 
