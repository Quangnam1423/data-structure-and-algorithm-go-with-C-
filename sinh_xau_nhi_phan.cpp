#include<iostream>

using namespace std;

int a[100] , n;

void print(){
	for(int i = 1; i <= n; i ++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void khoi_tao(){
	cin >> n;
	for(int i = 0 ; i <= n; i ++ ){
		a[i] = 0;
	}
}

bool check(){
	for(int i = 1; i <= n ; i ++ ){
		if (a[i] != 1) return true;
	}
	return false;
}

void next_gen(){
	int t = n;
	while(t != 0 && a[t] != 0){
		a[t] = 0;
		t--;
	}
	a[t] = 1;
}

int main(){
	khoi_tao();
	while(check()){
		print();
		next_gen();
	}
	print();
	return 0;
}
