#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<map>
using namespace std;
long a[100005];
int main()
{ 
	int t;
	std::cin >> t;
	while(t--)
	{
		long  n , k;
		cin >> n >> k;
		multiset<long> s;
		
		unordered_map<long, long> m;
		for(long i = 0 ; i < n ; i ++ )
		{
			cin >> a[i];
			s.insert(a[i]);
			m[a[i]]++;
		}
		sort(a , a + n);
		long cnt(0);
		for(long i = 0 ; i < n - 1; i ++ )
		{
			s.erase(s.find(a[i]));
			if(a[i] <= k) 
			{
				if(s.find(k - a[i]) != s.end() )
				{
					m[a[i]]--;
					cnt += m[k-a[i]];
				}
			}	

		}
		cout << cnt << endl;
	}
	return 0;
}
