#include<iostream>
#include<algorithm>

std::string s;
int n;
void khoitao()
{
	std::cin >> n;
	std::cin >> s;
}

bool check()
{
	for(int i  = 0 ; i < s.size() - 1 ; i ++ )
	{
		if(s[i] < s[i + 1]) return true;
	}
	return false;
}

void Next_gen()
{
	int i = s.size() - 2;
	while(i >= 0 && s[i] >= s[i + 1]) i--;
	int j = s.size() - 1;
	while(j >= 0 && s[j] <= s[i]) j--;
	std::swap(s[i] , s[j]);
	int l = i + 1 , r = s.size() - 1;
	while(l < r)
	{
		std::swap(s[l] , s[r]);
		l++;r--;
	}
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		khoitao();
		if(check() == false) std::cout << n << " BIGGEST\n";
		else
		{
			Next_gen();
			std::cout << n << " " << s << std::endl;
		}
	}
	return 0;
}
