#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

string a;
long long f[1000];

void khoitao()
{
	cin >> a;
	a = '@' + a; 
	memset(f , 0 , sizeof(f));
	f[0] = 1; // cho truong hop 2 so dau tao nen 1 so dem vi du 12 duoc (1,2) va (12)...
}

void handle()
{
	for(int i = 1 ; i <= a.size() ; i++ )
	{
		if(a[i] == '0')
		{
			if(i == 1 || (a[i - 1] != '1' && a[i - 1] != '2'))
			{
				cout << 0 << endl;
				return;
			}
			f[i] = f[i - 2];
		}
		else
		{
			f[i] = f[i - 1];
			if(i >= 2 && (a[i - 1] == '1' || (a[i - 1] == '2' && a[i] <= '6'))) f[i] += f[i - 2];
		}
	}
	cout << f[a.size()] << endl;
}


int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		khoitao();
		handle();
	}
}
