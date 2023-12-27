#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <sstream>

using namespace std;

int Count = 1;

struct NhanVien{
	string id , name , sex , b_date , address , fee , sign_date;
};

void nhap(NhanVien &a)
{
	cin.ignore();
	a.id = string(5 - to_string(Count).size() , '0') + to_string(Count);
	getline(cin , a.name);
	cin >> a.sex >> a.b_date;
	cin.ignore();
	getline(cin , a.address); 
	cin >> a.fee >> a.sign_date;
	Count++;
	return;
}

bool cmp (NhanVien a , NhanVien b)
{
	string temp;
	vector<string> of_A;
	stringstream ss(a.b_date);
	while(getline(ss , temp , '/'))
	{
		of_A.push_back(temp);
	}
	vector<string> of_B;
	stringstream s(b.b_date);
	while(getline(s , temp , '/'))
	{
		of_B.push_back(temp);
	}
	if(of_A[2] != of_B[2]) return of_A[2] < of_B[2];
	else
	{
		if(of_A[0] != of_B[0]) return of_A[0] < of_B[0];
		else
		{
			return of_A[1] < of_B[1];
		}
	}
}

void sapxep(NhanVien *a , int n)
{
	sort(a , a + n , cmp);
	return;
}

void show_information(NhanVien &a)
{
	std::cout << a.id << " " << a.name << " "
			  << a.sex << " " << a.b_date << " "
			  << a.address << " " << a.fee << " "
			  << a.sign_date;
	return;
}

void inds(NhanVien *a , int n)
{
	for (int i = 0 ; i < n ; i++ )
	{
		show_information(a[i]);
		cout << endl;
	}
	return;
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
