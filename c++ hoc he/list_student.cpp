#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>

using namespace std;

struct SinhVien{
	string id;
	string name , clas , date;
	double point;
};

string handle_name(string s)
{
	string ans = "";
	std::stringstream ss(s);
	string temp;
	while (ss >> temp)
	{
		for (int i = 0 ; i < temp.size() ; i++ )
		{
			temp[i] = std::tolower(temp[i]);
		}
		temp[0] = std::toupper(temp[0]);
		ans += temp + " ";
	}
	ans.erase(ans.size() - 1);
	return ans;
}

void get_information(SinhVien &a , int index)
{
	a.id = "B20DCCN" + string(3 - to_string(index).size() , '0') + to_string(index);
	cin.ignore();
	getline(cin , a.name);
	std::cin >> a.clas >> a.date >> a.point;
	if(a.date[1] == '/') a.date = '0' + a.date;
	if(a.date[4] == '/') a.date.insert(3 , "0");
	a.name = handle_name(a.name);
	return;
}

void show_information(SinhVien a)
{
	std::cout << a.id << " " << a.name << " "
			  << a.clas << " " << a.date << " "
			  << fixed << setprecision(2) << a.point;
	return;
}

void nhap(SinhVien *a , int n)
{
	for (int i = 0 ; i < n ; i++ )
	{
		get_information(a[i] , i + 1);
	}
	return;
}

void in(SinhVien *a , int n)
{
	for (int i = 0 ; i < n ; i++ )
	{
		show_information(a[i]);
		std::cout << std::endl;
	}
	return;
}

bool cmp(SinhVien a , SinhVien b)
{
	return a.point > b.point;
}
 
void sapxep(SinhVien *a , int n)
{
	std::sort(a , a + n , cmp);
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
