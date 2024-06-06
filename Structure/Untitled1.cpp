#include<bits/stdc++.h>
#include<sstream>

int main()
{
	std::string line = "Tong - Quang - Nam";
	std::stringstream check(line);
	std::string temp = "";
	while(getline(check  , temp , '-'))
	{
		std::cout << temp << std::endl;
	}
	return 0;
}
