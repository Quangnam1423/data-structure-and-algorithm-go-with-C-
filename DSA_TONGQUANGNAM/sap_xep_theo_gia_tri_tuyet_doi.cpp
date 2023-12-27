#include<iostream>
#include<algorithm>
#include<cmath>

struct Phantu{
	int giatri;
	int khoangcach;
};

bool cmp(Phantu A  , Phantu B)
{
	return (A.khoangcach < B.khoangcach);
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n , x;
		std::cin >> n >> x;
		Phantu a[n];
		for(auto &o : a)
		{
			std::cin >> o.giatri;
			o.khoangcach = abs(o.giatri - x);
		}
		std::stable_sort(a , a + n , cmp);
		for(auto o : a) std::cout << o.giatri << " ";
		std::cout << std::endl;
	}
	return 0;
} 
