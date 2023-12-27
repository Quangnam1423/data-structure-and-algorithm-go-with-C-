#include<iostream>
#include<cstring>
#include<vector>

int m , n , count;
int a[1005][1005];
bool visited[1005][1005];
int dx[8] = {-1 , -1 , -1 , 0 , 0 , 1 , 1 , 1};
int dy[8] = {-1 , 0 , 1 , -1 , 1 , -1 , 0 , 1};

void input()
{
	std::cin >> m >> n;
	for(int i = 1 ; i <= m ; i++ )
	{
		for(int j = 1 ; j <= n ; j++ )
		{
			std::cin >> a[i][j];
		}
	}
	std::memset(visited , false , sizeof(visited));
	count = 0;
}

void DFS(int i , int j)
{
	for(int k = 0 ; k < 8 ; k++ )
	{
		int x = i + dx[k];
		int y = j + dy[k];
		if(x >= 1 && x<= m && y >= 1 && y <= n && !visited[x][y] && a[x][y] == 1)
		{
			visited[x][y] = true;
			DFS(x , y);
		}
	}
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		input();
		for(int i = 1 ; i <= m ; i++ )
			for(int j = 1 ; j <= n ; j++ )
				if(visited[i][j] == false && a[i][j] == 1)
				{
					count++;
					visited[i][j] = true;
					DFS(i , j);
				}
		std::cout << count << std::endl;	
	}
	return 0;
}
