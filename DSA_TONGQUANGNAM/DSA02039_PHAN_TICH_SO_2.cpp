#include<iostream>
#include<vector>
#include<algorithm>

void Try(int sum , int limit , std::vector<std::vector<int> > &ans , std::vector<int> tmp)
{
	if(sum == 0)
	{
		ans.push_back(tmp);
	}
	else
	{
		for(int i = limit ; i > 0 ; i-- )
		{
			if(sum - i >= 0)
			{
				tmp.push_back(i);
				Try(sum - i , i , ans , tmp);
				tmp.pop_back();
			}
		}
	}
}


int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int sum;
		std::cin >> sum;
		std::vector<std::vector<int> > ans;
		Try(sum , sum , ans , {});
		std::cout << ans.size() << std::endl;
		for(int i = 0 ; i < ans.size() ; i++ )
		{
			std::cout << "(";
			for(int j = 0 ; j < ans[i].size() - 1; j++ )
			{
				std::cout << ans[i][j] << " ";
			}
			std::cout << ans[i][ans[i].size() - 1] << ") ";
		}
		std::cout << std::endl;
	}
	return 0;
 } 
