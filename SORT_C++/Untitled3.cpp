#include<iostream>
#include<iomanip>

using namespace std;


class Human
{
	private:
		string name;
		string address;
		string born;
		int age;
	public:
	    friend istream& operator >> (istream& is, Human& h);	
	    friend ostream& operator << (ostream& os, Human h);
};

istream& operator >> (istream& is, Human& h){
	getline(is,h.name);
	getline(is,h.address);
	getline(is,h.born);
	is >> h.age;
	return is;
}


ostream& operator << (ostream& os, Human h){
	os << h.name << " " << h.address << " " << h.born << " " << h.age <<"tuoi\n";
	return os; 
}






int main()
{
	Human s;
	cin >> s;
	cout << s;
	return 0;
} 
