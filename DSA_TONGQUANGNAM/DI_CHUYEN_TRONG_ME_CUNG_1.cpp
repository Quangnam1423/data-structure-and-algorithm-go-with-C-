#include<iostream>

using namespace std;

char C[1000];
int n , cnt; 
long long a[20][20];
bool check;

void khoitao()
{
	cin >> n;
	for(int i = 0; i < n ; i ++ )
	{
		for(int j = 0; j < n; j ++ )
		{
			cin >> a[i][j];
		}
	}
	check = 0;
	cnt = -1;
}

void in()
{
	for(int i = 0; i <= cnt ; i ++ )
	{
		cout << C[i];
	}
	cout <<" ";
}



void Try(int x , int y)
{
	if(x == (n - 1) && y == (n - 1) )
	{
		in();
		check = true;
	}
	else
	{
		if(x < n - 1 && a[x + 1][y] == 1)
		{
			cnt++;
		    C[cnt] = 'D';
		    Try(x + 1 , y);
		    cnt--;
		}
		if(y < n - 1 && a[x][y + 1] == 1)
		{
			cnt++;
			C[cnt] = 'R';
			Try(x , y + 1);
			cnt--;
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
		if(a[0][0] == 0) cout << -1 ;
		else
		{
			Try(0 , 0);
			if(check == false) cout << -1 ;
		}
		cout << endl;
	}
	return 0;
}
