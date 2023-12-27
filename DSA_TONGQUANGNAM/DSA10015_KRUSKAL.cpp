#include<iostream>
#include<vector>
#include<algorithm>

struct canh{
	int dau;
	int cuoi;
	int value;
};

std::vector<canh> a;
std::vector<int> parent , size;
int v , e , D;

bool cmp(canh a , canh b)
{
	return a.value < b.value;
}

int findparent(int x)
{
	if(x == parent[x]) return x;
	return parent[x] = findparent(parent[x]);
}

bool Union(canh a)
{
	int x = findparent(a.dau);
	int y = findparent(a.cuoi); 
	if(x == y) return false;
	if(size[x] < size[y]) std::swap(x , y);
	size[x] += size[y];
	parent[y] = x;
	return true;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		std::cin >> v >> e;
		a.clear();
		parent.clear(); parent.resize(v + 1);
		size.assign(v + 1 , 1);
		for(int i = 0 ; i < e ; i++ )
		{
			canh x;
			std::cin >> x.dau >> x.cuoi >> x.value;
			a.push_back(x);
		}
		std::sort(a.begin() , a.end() , cmp);
		// make disjoin union
		for(int i = 0 ; i <= v ; i++ )
		{
			parent[i] = i;
		}
		// begin find the way by kruskal
		D = 0;
		for(int i = 0 ; i < a.size() ; i++ )
		{
			if(Union(a[i]))
			{
				D += a[i].value;
			}
		}
		std::cout << D << std::endl;
	}
	return 0;
}
