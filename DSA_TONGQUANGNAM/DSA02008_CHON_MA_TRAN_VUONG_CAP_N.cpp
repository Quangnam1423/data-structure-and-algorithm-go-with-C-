#include<iostream>
#include<vector>

int a[20][20] , k , n;
int c[20] = {0};
void khoitao()
{
	std::cin >> n >> k;
	for(int i = 1 ; i <= n ; i ++ )
		for(int j = 1 ; j <= n ; j ++ )
			std::cin >> a[i][j];
}

void Try(std::vector<std::vector<int> > &v , std::vector<int> tmp , int i , int tong)
{
	for(int j = 1 ; j <= n ; j++ )
	{
		if(c[j] == 0)
		{
			c[j] = 1;
			tmp.push_back(j);
			tong += a[i][j];
			if(i == n)
			{
				if(tong == k) v.push_back(tmp);
			}
			else Try(v , tmp , i + 1 , tong);
			tmp.pop_back();
			c[j] = 0;
			tong -= a[i][j];
		}
	}
}

int main()
{
	khoitao();
	std::vector<std::vector<int> > v;
	Try(v , {} , 1 , 0);
	std::cout << v.size() << std::endl;
	for(int i = 0 ; i < v.size() ; i++ )
	{
		for(int j = 0 ; j < v[i].size() ; j++ )
		{
			std::cout << v[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
