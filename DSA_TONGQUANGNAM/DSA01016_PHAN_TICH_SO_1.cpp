#include<iostream>

int n , k , a[101] ;
bool check;

void khoitao()
{
	std::cin >> n;
	k = 1;
	a[k] = n;
	check = true;
}

void print()
{
	std::cout << "(" ;
	for(int i = 1 ; i < k ; i++ )
	{
		std::cout << a[i] << " ";
	}
	std::cout << a[k] << ")" << " ";
}

void Next_gen()
{
	int D , R , S;
	int i = k;
	while(i > 0 && a[i] == 1) i--;
	if(i > 0)
	{
		a[i]--;
		D = k - i + 1;
		R = D / a[i];
		S = D % a[i];
		k = i;
		if(R > 0)
		{
			for(int j = i + 1 ; j <= i + R ; j++ )
			{
				a[j] = a[i];
				k ++;
			}
		}
		if(S > 0)
		{
			k++;
			a[k] = S;
		}
	}
	else check = false;
}



int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		khoitao();
		while(check)
		{
			print();
			Next_gen();
		}
		std::cout << std::endl;
	}
	return 0;	
} 
