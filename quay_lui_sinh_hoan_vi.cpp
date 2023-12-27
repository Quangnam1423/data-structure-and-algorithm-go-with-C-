#include<iostream>

int a[100] , n , check[100] = {0};

using namespace std;

void print(){
	for( int i = 1; i <= n ; i ++ ){
		cout << a[i] << " ";
	}
	cout << endl;
}

void back_track(int i){
	for( int j = 1; j <= n; j ++){
		if(check[j] == 0){
			a[i] = j;
			check[j] = 1;
			if(i == n) print(); else back_track(i+1);
			check[j] = 0;
		} 
	}
}

int main(){
	cin >> n;
	back_track(1);
	return 0;
} 
