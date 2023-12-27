#include<iostream>
#include<algorithm>
#include<vector>

int N , X , a[100];

void khoitao()
{
	std::cin >> N >> X;
	for(int i = 0 ; i < N ; i++ )
	{
		std::cin >> a[i];
	}
	std::sort(a , a + N);
}

void Try(std::vector<std::vector<int> > &ans , std::vector<int> tmp , int pos , int sum)
{
	if(sum == X)
	{
		ans.push_back(tmp);
	}
	else if(sum > X) return;
	else
	{
		for(int i = pos ; i < N ; i++ )
		{
			if(sum + a[i] <= X)
			{
				tmp.push_back(a[i]);
				Try(ans , tmp , i , sum + a[i]);
				tmp.pop_back();
			}
			else return;
		}
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
		if(ans.size() == 0)
		{
			std::cout << -1 << std::endl;
		}
		else
		{
			for(int i = 0 ; i < ans.size() ; i++ )
			{
				std::cout << "[";
				for(int j = 0 ; j < ans[i].size() - 1; j++ )
				{
					std::cout << ans[i][j] << " ";
				}
				std::cout << ans[i][ans[i].size() - 1] << "]";
			}
			std::cout << std::endl;
		}
	}
	return 0;
}
