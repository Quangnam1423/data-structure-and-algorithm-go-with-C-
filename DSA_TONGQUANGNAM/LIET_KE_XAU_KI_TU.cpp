#include<iostream>
#include<iomanip>
using namespace std;
int cnt , k;
char n , a[100];
void khoitao()
{
	a[0] = 1;
	cin >> n >> k;
	cnt = n - 'A' + 1;
}

void in()
{
	for(int i = 1; i <= k ; i ++ )
	{
		cout << static_cast<char>(a[i] + 'A' - 1);
	}
	cout << endl;
}

void Try(int i)
{
	for(int j = a[i - 1] ; j <= cnt ; j ++ )
	{
		a[i] = j;
		if( i == k )
		{
			in();
		}
		else Try(i + 1);
	}
}

int main()
{
	khoitao();
	Try(1);
	return 0;	
} 
