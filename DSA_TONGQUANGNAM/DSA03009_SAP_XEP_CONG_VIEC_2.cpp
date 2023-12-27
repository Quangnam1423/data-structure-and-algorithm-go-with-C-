#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>

bool cmp(std::pair<int , int> a , std::pair<int , int> b)
{
	return a.second > b.second;
}

void handle()
{
	int n;
	std::cin >> n;
	std::vector<std::pair<int , int> > v;
	for(int i = 0 ; i < n ; i ++ )
	{
		int x , y , z;
		std::cin >> x >> y >> z;
		std::pair<int , int> job;
		job.first = y;
		job.second = z;
		v.push_back(job);
	}
	std::sort(v.begin() , v.end() , cmp);
	int d = 0 , res = 0;
	int F[1001] = {0};
	for(int i = 0 ; i < v.size() ; i++ )
	{
		while(F[v[i].first] && v[i].first> 0) v[i].first--;
		if(F[v[i].first] == 0 && v[i].first > 0)
		{
			F[v[i].first] = 1;
			res += v[i].second;
			d++;
		}
	}
	std::cout << d << " " << res << std::endl;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		handle();
	}
	return 0;
}
