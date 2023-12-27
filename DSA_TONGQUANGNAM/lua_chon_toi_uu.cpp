#include<iostream>
#include<algorithm>

struct Congviec{
	int start;
	int end;
};

bool cmp(Congviec A , Congviec B)
{
	return A.end < B.end;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		Congviec A[n];
		for(int i = 0 ; i < n ; i ++ )
		{
			std::cin >> A[i].start;
			std::cin >> A[i].end;
		}
		std::sort(A , A + n , cmp);
		int cnt(1);
		int now = A[0].end;
		for(int i = 1 ; i < n ; i ++ )
		{
			if(A[i].start >= now)
			{
				cnt ++;
				now = A[i].end;
			}
		}
		std::cout << cnt << std::endl;
	}
	return 0;	
} 
