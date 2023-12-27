#include<iostream>
#include<vector>

int n , max , a[101] , c[101] , k[101];
int res[101] , optimal_value , volume;
void khoitao()
{
	std::cin >> n >> max;
	for(int i = 1 ; i <= n ; i++ )
		k[i] = 0;
	for(int i = 1 ; i <= n ; i++ )
	{
		std::cin >> a[i];
	}
	for(int i = 1 ; i <= n ; i++ )
	{
		std::cin >> c[i];
	}
	optimal_value = 0;
	volume = 0;
}

bool check()
{
	for(int i = 1 ; i <= n ; i++ )
	{
		if(k[i] == 0) return true;
	}
	return false;
}

void most_optimal()
{
	int thetich = 0 , giatri = 0;
	for(int i = 1 ; i <= n; i++ )
	{
		giatri += a[i]*k[i];
		thetich += c[i]*k[i];
	}
	if(thetich <= max && giatri > optimal_value)
	{
		optimal_value = giatri;
		for(int i = 1 ; i <= n ; i++ )
		{
			res[i] = k[i];
		}
	}
}

void Next_gen()
{
	int x = n;
	while(x > 0 && k[x] == 1) k[x--] = 0;
	k[x] = 1;
}

int main()
{
	khoitao();
	while(check() == true)
	{
		Next_gen();
		most_optimal();
	}
	std::cout << optimal_value << std::endl;
	for(int i = 1 ; i <= n ; i++ )
	{
		std::cout << res[i] << " ";
	}
	return 0;
}
