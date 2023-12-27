#include<iostream>

using namespace std;

int a[100] , n ;
void khoitao()
{
	cin >> n; 
	for(int i = 0 ; i < n; i ++ )
	{
		cin >> a[i];
	}
}

void Try()
{
	if(n > 0)
	{
		int c[n];
		int m = n;
		for(int i = 0 ; i < m; i++ )
		{
			c[i] = a[i];
		} 
	    for(int i = 0 ; i < n - 1; i ++ )
		{
			a[i] = a[i] + a[i + 1];
		}
		n--;
		Try();
		cout << "[";
		for(int i = 0 ; i < m - 1; i++ )
		{
			cout << c[i] << " ";
		}
		cout << c[m - 1] << "]";
		cout <<" ";
    }
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		khoitao();
		Try();
		cout << endl; 
	}
	return 0;
}

