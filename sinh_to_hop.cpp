#include<iostream>

using namespace std;

int a[100] , n , k;

void khoi_tao(){
	cin >> n >> k;
	for(int i = 0;i <= n; i ++ ){
		a[i] = i;
	}
} 

void print(){
	for( int i = 1; i <= k; i ++ ){
		cout << a[i] << " ";
	}
	cout << endl;
}

bool check(){
	for(int i = k; i >= 1; i -- ){
		if(a[i] != n - k + i) return true;
	}
	return false;
}

void nextGen(){
	int i = k;
	while(i > 0 && a[i] == n - k + i) i--;
	if(i > 0){
		a[i]++;
		for(int j = i + 1; j <= k; j++ ){
			a[j] = a[j - 1] + 1;
		}
	}
}

int main(){
	khoi_tao();
	while(check()){
		print();
		nextGen();
	}
	print();
	return 0;
}
