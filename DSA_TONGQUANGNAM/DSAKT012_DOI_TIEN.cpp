#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>

int res , n;
long a[30] , S;

void Try( int cnt , int pos , long sum)
{
	if(pos == n || cnt >= res || sum >= S)
	{
		if(sum == S)
		{
			res = std::min(res , cnt);
		}
		return;
	}
	Try(cnt + 1 , pos + 1 , sum + a[pos]);
	Try(cnt , pos + 1 , sum);
}

int main()
{
	res = INT_MAX;
	std::cin >> n >> S;
	for(int i = 0 ; i < n ; i++ )
	{
		std::cin >> a[i];
	}
	std::sort(a , a + n , std::greater<long>());
	Try(0 , 0 , 0);
	std::cout << (res != INT_MAX ? res : -1);
	std::cout << std::endl;
	return 0;
}
