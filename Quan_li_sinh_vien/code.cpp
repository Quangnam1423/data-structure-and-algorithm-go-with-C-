#include<iostream>
#include<cstring>
#include<fstream>
#include<algorithm>
#include<iomanip>
#include<utility>


class SinhVien{
	private:
		std::string name;
		float point;
	public:
		SinhVien(std::string ten , float diem)
		{
			this->name = ten;
			this->point = diem;
		}
		SinhVien()
		{	
			this->name = "";
			this->point = 0.0;
		}
		//getter
		std::string getname()
		{
			return this->name;
		}
		float getpoint()
		{
			return this->point;
		}
		// change the point
		void change_point(float point)
		{
			this->point = point;
			return;
		}
		//print name and point of the student
		void out()
		{
			std::cout << this->name << " " << this->point;
			return;
		}
};

std::string handling_string_init(std::string s)
{
	std::string x = "";
	x += s[0];
	for(int i = 1 ; i < s.size() ; i++ )
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
		{
			x = x + " " + s[i];
		}
		else x += s[i];
	} 
	return x;
}

int main()
{
	std::fstream file;
	file.open("temp.txt" , std::ios_base::in);
	
	int n; file >> n;
	std::vector<SinhVien> v;
	for(int i = 0 ; i < n ; i++ )
	{
		std::string s;
		float y;
		file >> s >> y;
		s = handling_string_init(s);
		SinhVien t(s , y);
		v.push_back(t);
	}
	file.close();
	for(int i = 0 ; i < v.size() ; i++ )
	{
		v[i].out();
		std::cout << std::endl;
	}
	
	// save information..................
	SinhVien z("Truong Hoang Manh" , 6);
	v.push_back(z);
	std::fstream file_write;
	file_write.open("temp.txt" , std::ios::trunc | std::ios::out);
	file_write << v.size() << std::endl;
	for(int i = 0 ; i < v.size() ; i++ )
	{
		file_write << v[i].getname() << " ";
		file_write << v[i].getpoint() << std::endl;;
	}
	file_write.close();
	return 0;
}
