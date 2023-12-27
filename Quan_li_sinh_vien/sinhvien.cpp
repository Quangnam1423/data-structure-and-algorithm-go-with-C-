#include<iostream>
#include<algorithm>
#include<iomanip>
#include<conio.h>
#include<fstream>

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

class node{
	public:
		SinhVien data;
		node* next;
	public:
		node(std::string name , float point)
		{
			SinhVien x(name , point);
			this->data = x;
			this->next = NULL;
		}
};

class List{
	public:
		node *tail;
		node *root;
	public:
		List()
		{
			tail = NULL;
			root = NULL;
		}
		void add_to_back(std::string ten , float diem)
		{
			node* temp = new node(ten , diem);
			if(this->tail == NULL)
			{
				this->tail = temp;
				this->root = temp;
				return;
			}
			else
			{
				this->root->next = temp;
				this->root = temp;
				return;
			}
		}
		void show_list()
		{
			node* temp = tail;
			while(temp != NULL)
			{
				temp->data.out();
				std::cout << std::endl;
				temp = temp->next;
			}
		}
		int size()
		{
			node* temp = tail;
			int count = 0;
			while(temp != NULL)
			{
				count++;
				temp = temp->next;
			}
			return count;
		}
};

//implementation..................

std::string handling_string_init(std::string s)
{
	std::string x = "";
	x += s[0];
	for(long long unsigned int i = 1 ; i < s.size() ; i++ )
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
		{
			x = x + " " + s[i];
		}
		else x += s[i];
	} 
	return x;
}

std::string handling_string_exit(std::string s)
{
	std::string x = "";
	for(long long unsigned int i = 0 ; i < s.size() ; i++ )
	{
		if(s[i] != ' ') x += s[i];
	}
	return x;
}

void init()
{
	List a;
	std::fstream file;
	file.open("temp.txt" , std::ios::in);
	int n; 
	file >> n;
	for(int i = 0 ; i < n ; i++ )
	{
		std::string init_name;
		float init_point;
		file >> init_name >> init_point;
		init_name = handling_string_init(init_name);
		a.add_to_back(init_name , init_point);
	}// init aready
	
	// main process
	while(true)
	{
		std::system("cls");
		std::cout << "Choose one option below: \n";
		std::cout << "1. Add a student.\n";
		std::cout << "2. Show the list of student.\n";
		std::cout << "3.Exit.\n";
		int x; std::cin >> x;
		if(x == 1)
		{
			std::cin.ignore();
			std::string student_name;
			float student_point;
			std::cout << "Nhap Ten: "; std::getline(std::cin , student_name);
			std::cout << "Nhap diem: "; std::cin >> student_point;
			a.add_to_back(student_name , student_point); 
			std::cout << "Press any button to continue.\n"; getch();
		}
		else if(x == 2)
		{
			std::cout << a.size() << std::endl;
			a.show_list();
			std::cout << std::endl;
			std::cout << "Press any button to continue.\n"; getch();
		}
		else if (x == 3)
		{
			std::fstream save_file;
			save_file.open("temp.txt" , std::ios::out | std::ios::trunc);
			int cnt = a.size();
			save_file << cnt << std::endl;
			node* temp_exit = a.tail;
			while(temp_exit != NULL)
			{
				std::string x_exit = temp_exit->data.getname();
				x_exit = handling_string_exit(x_exit);
				float y_exit = temp_exit->data.getpoint();
				save_file << x_exit << " " << y_exit << std::endl;
				temp_exit = temp_exit->next;
			}
			save_file.close();
			break;
		}
		else
		{
			std::cout << "Invalid Syntax, Please try again.\n";
			getch();
		}
	}
	return;
}

int main()
{
	init();
	system("cls");
	std::cout << "Chuong Trinh Se Ket Thuc...........\n";
	system("pause");
	return 0;
}
