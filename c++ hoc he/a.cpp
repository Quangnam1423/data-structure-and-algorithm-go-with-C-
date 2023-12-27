#include <iostream>
#include <cstring>
#include <algorithm>


int main()
{
	std::string s;
	std::cin.ignore();
	std::cin.ignore();
	getline(std::cin , s , ' ');
	std::cout << s << ".";
	return 0;
}
