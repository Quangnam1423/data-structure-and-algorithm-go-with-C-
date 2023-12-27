#include<iostream>
#include<vector>
#include<iomanip>

int n , k , a[20] = {} , cnt(0);
void khoitao()
{
	std::cin >> n >> k;
}

bool check()
{
	for(int i = 1 ; i <= n ; i ++ )
	{
		if(a[i] == 0) return true;
	}
	return false;
}

bool kiemtra()
{
	int res(0) , count(0);
	for(int i = 1 ; i <= n ; i ++ )
	{
		if(a[i] == 0)
		{
			count++;
			res = std::max(res , count);
		}
		else
		{
			count = 0;
		}
	}
	if(res == k) return true; else return false;
}

void Next_gen()
{
	int i = n;
	while(i > 0 && a[i] == 1)
	{
		a[i--] = 0;
	}
	a[i] = 1;
}



int main()
{
	std::vector<std::string> v;
	khoitao();
	while(check() == true)
	{
		Next_gen();
		if(kiemtra() == true)
		{
			cnt++;
			std::string s;
			for(int i = 1 ; i <= n ; i ++ )
			{
				s += static_cast<char>(a[i] + 65);
			}
			v.push_back(s);
		}
	}
	std::cout << cnt 
		      << std::endl;
	for(int i = 0 ; i < v.size() ; i ++ )
	{
		std::cout << v[i] << std::endl;
	}
	return 0;
}
