#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

int n , a[20];

void khoitao()
{
	std::cin >> n;
	for(int i = 0 ; i < n ; i++ )
	{
		std::cin >> a[i];
	}
	std::sort(a , a + n);
}

void Try(std::vector<std::vector<int> > &ans , std::vector<int> tmp , int pos , int sum)
{
	if(sum % 2 != 0)
	{
		std::sort(tmp.begin() , tmp.end() , std::greater<int>());
		ans.push_back(tmp);
	}
	for(int i = pos ; i < n ; i++ )
	{
		tmp.push_back(a[i]);
		Try(ans , tmp , i + 1 , sum + a[i]);
		tmp.pop_back();
	}
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		khoitao();
		std::vector<std::vector<int> > ans;
		Try(ans , {} , 0 , 0);
		std::sort(ans.begin() , ans.end());
		for(int i = 0 ; i < ans.size() ; i++ )
		{
			for(int j = 0 ; j < ans[i].size() ; j++ )
			{
				std::cout << ans[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}
	return 0;
}
