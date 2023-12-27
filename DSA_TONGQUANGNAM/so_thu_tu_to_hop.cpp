#include<iostream>

using namespace std;
int n , k , a[100];
void khoitao()
{
	cin >> n >> k;
	for(int i = 1;i <= k; i ++ )
	{
		cin >> a[i];
	}
}

int sohoanvi()
{
	int cnt(1);
	for(int i = n; i >= n - k + 1; i -- )
	{
		cnt *= i;
	}
	for(int i =  k ; i >= 2; i-- )
	{
		cnt/=i;
	}
	return cnt;
}

void nextGen()
{
	int x = k;
	while( x > 0 && a[x] == n - k + x) x--;
	a[x]++;
	for(int i = x + 1; i <= k ; i ++ )
	{
		a[i] = a[i - 1] + 1;
	}
}

bool check()
{
	for(int i = 1; i <= k; i++ )
	{
		if(a[i] != n - k + i) return true;
	}
	return false;
}

int main()
{
	int t; cin >> t;
	while( t-- )
	{
		khoitao();
		int cnt(0);
		while(check() == true)
		{
			cnt++;
			nextGen();
		}
		cnt++;
		int tong = sohoanvi();
		cout << tong - cnt + 1 << endl;
	}
    return 0;	
} 
