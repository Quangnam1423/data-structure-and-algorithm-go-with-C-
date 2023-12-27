#include<iostream>
#include<algorithm>

using namespace std;
int n , a[100];
void khoitao()
{
	cin >> n;
	for(int i = 1;i <= n; i ++ )
	{
		cin >> a[i];
	}
}

int sohoanvi()
{
	int cnt(1);
	for(int i = 1; i <= n; i ++ )
	{
		cnt *= i;
	}
	return cnt;
}

void nextGen()
{
	int x = n - 1;
	while(x > 0 && a[x] > a[x + 1]) x--;
	int j = n;
	while(j > 0 && a[j] < a[x]) j--;
	swap(a[j],a[x]);
	sort(a+x+1,a+n+1);
}

bool check()
{
	for(int i = 1; i <= n; i++ )
	{
		if(a[i] != n - i + 1) return true;
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
			nextGen();
			cnt++;
		}
		cnt++;
		int tong = sohoanvi();
		cout << tong - cnt + 1 << endl;
	}
    return 0;	
} 
