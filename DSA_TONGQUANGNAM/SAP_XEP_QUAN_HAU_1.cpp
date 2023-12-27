#include<iostream>

using namespace std;
int x[100] , c[100] , d1[100] , d2[100];
int cnt;
int n;

void khoitao()
{
	cin >> n;
	for(int i = 0 ; i <= 100; i ++) c[i] = 0;
	for(int i = 0 ; i <= 100; i ++ ) d1[i] = 0;
	for(int i = 0 ; i <= 100; i ++ ) d2[i] = 0;
	cnt = 0;
}

void Try(int i)
{
	for(int j = 1; j <= n ; j ++ )
	{
		if(c[j] == 0 && d1[i - j + n] == 0 && d2[i + j - 1] == 0)
		{
			x[i] = j;
			c[j] = 1 ; d1[i - j + n] = 1; d2[i + j - 1] = 1;
			if(i == n) cnt++;
			else Try(i + 1);
			c[j] = 0 ; d1[i - j + n] = 0; d2[i + j - 1] = 0;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		khoitao();
		Try(1);
		cout << cnt << endl;
	} 
	return 0;
}
