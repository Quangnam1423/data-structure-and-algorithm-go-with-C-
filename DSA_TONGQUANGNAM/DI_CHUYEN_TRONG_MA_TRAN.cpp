#include<iostream>

using namespace std;

int cnt ;
int  n , m;
int a[100][100];

void khoitao()
{
	cin >> n >> m;
	for(int i = 0 ; i < n ; i ++ )
		for(int j = 0 ; j < m ; j ++ )
			cin >> a[i][j];
	cnt = 0;
}

void Try(int x , int y)
{
	if ( x == n - 1 && y == m - 1)
	{
		cnt ++;
	}
	else
	{
		if(x < n - 1) Try(x + 1 , y);
		if(y < m - 1) Try(x , y + 1);
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		khoitao();
		Try(0 , 0);
		cout << cnt << endl;
	}
	return 0;
}
