#include<iostream>
#include<vector>

int size[1005] , parent[1005];
int n , m;

int findparent(int x)
{
	if(x == parent[x]) return x;
	else return parent[x] = findparent(parent[x]);
}

bool Union(int x , int y)
{
	x = findparent(x);
	y = findparent(y);
	if(x == y) return true;
	if(size[x] > size[y])
	{
		size[x] += size[y];
		parent[y] = x;
	}
	else
	{
		size[y] += size[x];
		parent[x] = y;
	}
	return false;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::cin >> n >> m;
		for(int i = 1 ; i <= n ; i++ )
		{
			parent[i] = i;
			size[i] = 1;
		}
		bool ok = false;
		while(m--)
		{
			int x , y;
			std::cin >> x >> y;
			if(Union(x , y))
			{
				ok = true;
			}
		}
		std::cout << (ok ? "YES" : "NO") << std::endl;
	}
	return 0;
}
