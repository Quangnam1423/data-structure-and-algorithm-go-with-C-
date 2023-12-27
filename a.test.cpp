#include <iostream>
using namespace std;

int main()
{
	string s,s1;
    cin >> s;
    cin >> s1;
    int count;
    int check = 0;
    count = s1.length() - s.length();
    string temp;
    for(int i = 0; i <= count; i++){
        temp = s1.substr(i, s.length());
        cout << temp << endl;
        if(temp == s){
        	check = 1;
        	break;
		}
    }
    if(check == 0){
        cout << "NO"<<endl;
    }
    else if(check == 1){
    	cout << "YES" << endl;
	}
}
