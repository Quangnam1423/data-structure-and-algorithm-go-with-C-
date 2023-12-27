#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>

std::string s; 
bool check;

void handle(int l , int r)
{
	if(l > r) return;
	if(s[l] != s[r])
	{
		check = false;
		return;
	}
	else handle(l + 1 , r - 1);
}

int main()
{
	std::cin >> s;
	s = '@' + s;
	int t;
	std::cin >> t;
	while(t--)
	{
		check = true;
		int L , R;
		std::cin >> L >> R;
		if(L == R) std::cout << "YES" << std::endl;
		else
		{
			handle(L , R);
			if(check == true) std::cout << "YES" << std::endl;
			else std::cout << "NO" << std::endl;
		}
	} 
	return 0;
}
