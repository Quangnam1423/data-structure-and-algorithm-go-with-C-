#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>

struct frequency{
	char sign;
	int fre;
};

int Search(frequency *X , int m , char t)
{
	for(int i = 0 ; i <= m ; i ++ )
	{
		if(X[i].sign == t)
		return i;
	}
	return (m + 1);
}

bool cmp(frequency X , frequency Y)
{
	return X.fre > Y.fre;
}

void Greedy_Solution()
{
	int d;
	std::cin >> d;
	std::cin.ignore();
	std::string s;
	std::cin >> s;
	frequency X[255];
	int m = - 1 , n = s.size() , position[255];
	for(int i = 0 ; i < n ; i ++ )
	{
		position[i] = true;
	}
	for(auto e : s)
	{
		int p = Search(X , m , e);
		if(p <= m ) X[p].fre++;
		else
		{
			m = p;
			X[p].sign = e;
			X[p].fre = 1;
		}
	}
	std::sort(X , X + m , cmp);
	for(int  i = 0 ; i <= m ; i ++ )
	{
		int k = X[i].fre;
		int t = 0;
		while(!position[t]) t++;
		for(int q = 0 ; q < k; q++ )
		{
			if((t + q * d) >= n )
			{
				std::cout << -1 <<std::endl;
				return;
			}
			position[t + q * d] = false;
		}
	}
	std::cout << 1 << std::endl;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		Greedy_Solution();
	}
	return 0;
}
