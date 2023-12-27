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
		cout << "[";
		for(int i = 0 ; i < n - 1; i++ )
		{
			cout << a[i] << " ";
		}
		cout << a[n - 1] << "]";
		cout << endl;
	    for(int i = 0 ; i < n - 1; i ++ )
		{
			a[i] = a[i] + a[i + 1];
		}
		n--;
		Try();
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
	}
	return 0;
}

