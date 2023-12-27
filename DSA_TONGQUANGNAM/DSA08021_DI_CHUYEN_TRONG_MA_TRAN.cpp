//di chuyen trong ma tran dynamic programing
//standard library
#include<iostream>
#include<cstring>
#include<queue>

struct data
{
	int row , col , dem;
};

int handle()
{
	int n , m;
	std::cin >> n >> m;
	int a[n + 1][m + 1];
	bool c[n + 1][m + 1];
	std::memset(c , 0 , sizeof(c));
	for(int i = 1 ; i <= n ; i++ )
	{
		for(int j = 1 ; j <= m ; j++ )
		{
			std::cin >> a[i][j];
		}
	}
	std::queue<data> q;
	q.push({1 , 1 , 0});
	while(!q.empty())
	{
		data tmp = q.front();
		q.pop();
		if(tmp.row == n && tmp.col == m) return tmp.dem;
		c[tmp.row][tmp.col] = true;
		if((tmp.row + a[tmp.row][tmp.col]) <= n && !c[tmp.row + a[tmp.row][tmp.col]][tmp.col])
			q.push({tmp.row + a[tmp.row][tmp.col] , tmp.col , tmp.dem + 1});
		if((tmp.col + a[tmp.row][tmp.col]) <= m && !c[tmp.row][tmp.col + a[tmp.row][tmp.col]])
			q.push({tmp.row, tmp.col + a[tmp.row][tmp.col] , tmp.dem + 1});
	}
	return -1;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::cout << handle() << std::endl;
	}
	return 0;
}

