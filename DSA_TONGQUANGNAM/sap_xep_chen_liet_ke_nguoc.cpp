#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int n;
	std::cin >> n;
	int a[n];
	for(int &x : a) std::cin >> x;
	std::vector<int> s;
	std::vector<std::string> step;
	for(int i = 0 ; i < n ; i ++ )
	{
		s.push_back(a[i]);
		std::sort(s.begin() , s.end());
		//sort the array 
		std::string x = "Buoc " + std::to_string(i) + ": ";
		//build a string is a step
		for(auto element : s) x += std::to_string(element) + " ";
		step.push_back(x);
	} 
	for(int i = step.size() - 1 ; i >= 0 ; i-- )
		std::cout << step[i] << std::endl;
	// print each step 
	return 0;	
} 
