
#include<iostream>
using namespace std;


int n, a[100];
void ktao()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		a[i] = i;
	}
}

void genNext()
{
	int i = n;
	while(i >= 1 && a[i - 1] > a[i])
	{
		i--;
	}
	int j = n;
	while(a[i - 1] > a[j]) j--;
	swap(a[i - 1], a[j]);
	int l = i, r = n;
	while(l < r)
	{
		swap(a[l], a[r]);
		l++;
		r--;
	}
}

bool check()
{
	for(int i = 1; i <= n; i++)
	{
		if(a[i] != n - i + 1) return false;
	}
	return true;
}

void display()
{
	for(int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main()
{
	ktao();
	while(!check())
	{
		display();
		genNext();
	}
	display();
	return 0;
}
