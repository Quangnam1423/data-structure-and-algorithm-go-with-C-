#include<bits/stdc++.h>

using namespace std;

int n;
struct data
{
	int fi , se;
};

data h[1005];

bool cmp(data a , data b)
{
	return a.se < b.se;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 0 ; i < n ; i ++ )
		{
			cin >> h[i].fi;
		}
		for(int i = 0 ; i < n ; i ++ )
		{
			cin >> h[i].se;
		}
		sort(h, h + n , cmp);
		int d = 1 , i = 0;
		for(int j = 1 ; j < n ; j ++ )
		{
			if(h[j].fi >= h[i].se)
			{
				d++;
				i = j ;
			}
		}
		cout << d << endl;
	}
	return 0;
}
