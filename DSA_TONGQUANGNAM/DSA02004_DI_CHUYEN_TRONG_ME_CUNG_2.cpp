#include<iostream>
#include<algorithm>
#include<cstring>

int A[20][20] , n , cnt;
bool C[20][20] , check;
char way[1000];

void khoitao()
{
	std::cin >> n;
	for(int i = 0 ; i < n ; i++ )
	{
		for(int j = 0 ; j < n ; j++ )
		{
			std::cin >> A[i][j];
		}
	}
	std::memset(C , false , sizeof(C));
	cnt = -1;
	check = false;
}

void in()
{
	for(int i = 0 ; i <= cnt ; i++ )
	{
		std::cout << way[i];
	}
	std::cout << " ";
}

void Try(int x , int y)
{
	if(x == n - 1 && y == n - 1)
	{
		check = true;
		in();
	}
	else
	{
		if(x < n - 1 && A[x + 1][y] == 1 && C[x + 1][y] == false)
		{
			cnt++;
			way[cnt] = 'D';
			C[x + 1][y] = true;
			Try(x + 1 , y);
			cnt--;
			C[x + 1][y] = false;
		}
		if(y > 0 && A[x][y - 1] == 1 && C[x][y - 1] == false)
		{
			cnt++;
			way[cnt] = 'L';
			C[x][y - 1] = true;
			Try(x , y - 1);
			cnt--;
			C[x][y - 1] = false;
		}
		if(y < n - 1 && A[x][y + 1] == 1 && C[x][y + 1] == false)
		{
			cnt++;
			way[cnt] = 'R';
			C[x][y + 1] = true;
			Try(x , y + 1);
			cnt--;
			C[x][y + 1] = false;
		} 
		if(x > 0 && A[x - 1][y] == 1 && C[x - 1][y] == false)
		{
			cnt++;
			way[cnt] = 'U';
			C[x - 1][y] = true;
			Try(x - 1 , y);
			cnt--;
			C[x - 1][y] = false;
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
		if(A[0][0] == 0) std::cout << -1;
		else
		{
			C[0][0] = true;
			Try(0 , 0);
			if(check == false) std::cout << -1;
		}
		std::cout << std::endl;
	}
	return 0;
}
