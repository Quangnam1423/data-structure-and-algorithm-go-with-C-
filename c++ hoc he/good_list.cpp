#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct good{
	string id;
	string name , kind;
	double sell , purchase , benefit;
}; 

void get_information (good &a , int index)
{
	cin.ignore();
	a.id = to_string(index);
	getline(cin , a.name);
	getline(cin , a.kind);
	std::cin >> a.sell >> a.purchase;
	a.benefit = a.purchase - a.sell;
	return;
}

void show_information(good a)
{
	std::cout << a.id << " " << a.name << " "
			  << a.kind << " "
			  << fixed << setprecision(2) << a.benefit;
	return;
}

bool cmp(good a , good b)
{
	return a.benefit > b.benefit;
}

void get_list(good *a , int n)
{
	for (int i = 0 ; i < n ; i++ )
	{
		get_information(a[i] , i + 1);
	}
	return;
}

void show_list(good *a , int n)
{
	for (int i = 0 ; i < n ; i++ )
	{
		show_information(a[i]);
		std::cout << std::endl;
	}
	return;
}

void Sort(good *a , int n)
{
	std::sort(a , a + n , cmp);
	return;
}

int main()
{
	int N; std::cin >> N;
	good ds[N];
	get_list(ds , N); 
	Sort(ds , N);
	show_list(ds , N);
	return 0;
}
