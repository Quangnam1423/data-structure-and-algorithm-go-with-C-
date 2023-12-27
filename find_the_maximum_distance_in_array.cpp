// Given an array arr[], find the maximum j - i
// such that arr[i] <= arr[j]

/*
	Input: {9, 2, 3, 4, 5, 6, 7, 8, 18, 0}
  	Output: 8 ( j = 8, i = 0)

  	Input:  {1, 2, 3, 4, 5, 6}
  	Output: 5  (j = 5, i = 0)

  	Input:  {6, 5, 4, 3, 2, 1}
  	Output: 0
*/
#include <bits/stdc++.h>
using namespace std;

int maxIndexDiff(vector<int>& arr, int n)
{
	unordered_map<int, vector<int> > hashmap;
	for (int i = 0; i < n; i++) {
		hashmap[arr[i]].push_back(i);
	}
	sort(arr.begin(), arr.end());
	int maxDiff = INT_MIN;
	int temp = n;
	for (int i = 0; i < n; i++) {
		if (temp > hashmap[arr[i]][0]) {
			temp = hashmap[arr[i]][0];
		}
		maxDiff = max(maxDiff,hashmap[arr[i]][hashmap[arr[i]].size() - 1]- temp);
	}
	return maxDiff;
}
int main()
{
	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		vector<int> arr(n);
		for(int i = 0 ; i < arr.size() ; i++ )
		{
			std::cin >> arr[i];
		}
		int ans = maxIndexDiff(arr, n);
		cout << ans << endl;
	}
	return 0;
}

