#include<iostream>

using namespace std;

int a[] = {1 , 2 , 5 , 10 , 20 , 50 , 100 , 200 , 500 , 1000};
int N;

void doitien()
{
	int ans = 0;
	for(int i = 9 ; i >= 0 ; i -- )
	{
		ans = ans + N / a[i];
		N = N % a[i];
	}
	cout << ans << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> N;
		doitien();
	}
	return 0;
} 
