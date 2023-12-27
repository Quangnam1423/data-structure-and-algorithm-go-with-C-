#include<iostream>
#include<vector>
#include<algorithm>

int N , P , S;

void khoitao(std::vector<int> &v)
{
	bool a[201];
	for(int i = 0 ; i <= 200 ; i++ )
	{
		a[i] = true;
	}
	for(int i = 2 ; i <= 200 ; i++ )
	{
		if(a[i] == true)
		{
			v.push_back(i);
			for(int j = i * 2 ; j <= 200 ; j += i)
			{
				a[j] = false;
			}
		}
	}
	return;
}

void Try(std::vector<int> &snt , std::vector<std::vector<int> > &ans , std::vector<int> tmp , int pos , int sum)
{
	if(tmp.size() == N)
	{
		if(sum == S)
		{
			ans.push_back(tmp);
		}
	}
	else
	{
		for(int i = pos ; i < snt.size() ; i++ )
		{
			if(sum + snt[i] <= S)
			{
				tmp.push_back(snt[i]);
				Try(snt , ans , tmp , i + 1, sum + snt[i]);
				tmp.pop_back();
			}
			else return;
		}
	}
}

int main()
{
	std::vector<int> snt;
	khoitao(snt);
	int t;
	std::cin >> t;
	while(t--)
	{
		std::cin >> N >> P >> S;
		std::vector<std::vector<int> > ans;
		int pos = 0;
		for(int i = 0 ; i < snt.size() ; i++ )
		{
			if(snt[i] > P)
			{
				pos = i;
				break;
			}
		}
		if(N <= snt.size()) Try(snt , ans , {} , pos , 0);
		if(ans.size() == 0)
		{
			std::cout << 0 << std::endl;
		}
		else
		{
			std::cout << ans.size() << std::endl;
			for(int i = 0 ; i < ans.size() ; i++ )
			{
				for(int j = 0 ; j < ans[i].size() ; j++ )
				{
					std::cout << ans[i][j] << " ";
				}
				std::cout << std::endl;
			}
		}
	}
	return 0;
}
