#include<iostream>
#include<algorithm>

bool check;

void Try(int n , long long ans)
{
	if(check == true) return;
	if(ans % n == 0)
	{
		check = true;
		std::cout << ans;
		return;
	}
	Try(n , ans*10);
	Try(n , (ans*10 + 9));
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		check = false;
		Try(n , 9);
		std::cout << std::endl;
	}
	return 0;
}
