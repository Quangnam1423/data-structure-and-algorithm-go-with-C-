#include<iostream>

using namespace std;
char a = 'A' , b = 'B' , c = 'C';
int n;

void ThapHaNoi(int i , char a , char c , char b)
{
	if(i == 1) 
	{
		cout << a << " -> " << c << endl;
		return;
	}
	ThapHaNoi(i - 1,a , b , c);
	ThapHaNoi(1 , a , c , b);
	ThapHaNoi(i - 1 , b , c , a);
}

int main()
{
	cin >> n;
	ThapHaNoi(n, a , c , b);
	return 0;
}
