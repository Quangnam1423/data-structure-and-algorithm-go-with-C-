#include<iostream>

using namespace std;
int a[5];
int b[3];

void in()
{
	for(int i = 1 ; i <= 2; i ++ )
	{
		if(b[i] == 1) cout << 2; else cout << 0;
	}
	cout << "/02/" ;
	for(int i = 1 ; i <= 4; i ++ )
	{
		if(a[i] == 1) cout << 2; else cout << 0;
	}
	cout << endl;
}

bool check()
{
	if(b[1] == 0 && b[2] == 0) return false;
	if(a[1] == 0) return false;
	return true;
}

void Try(int i);


void Ngaysinh(int i)
{
	for(int j = 0; j <= 1 ; j++ )
	{
		b[i] = j;
		if(i == 2)
		{
			Try(1);
		}
		else Ngaysinh(i + 1);
	}
}

void Try(int i)
{
	for(int j = 0 ; j <= 1; j ++ )
	{
		a[i] = j;
		if( i == 4)
		{
			if(check() == true) in();
		}
		else Try(i + 1);
	}
}

int main()
{
	Ngaysinh(1);
	return 0;
}
