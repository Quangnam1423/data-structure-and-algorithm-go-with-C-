#include<iostream>
int a[100] , n;

using namespace std;

void print(){
	for(int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void back_track(int i){
	for(int j = 0; j <= 1; j ++)
	{
		a[i] = j;
		if(i == n) print(); 
		else back_track(i+1);
	}
}


int main(){
	cin >> n;
	back_track(1);
	return 0;
}
