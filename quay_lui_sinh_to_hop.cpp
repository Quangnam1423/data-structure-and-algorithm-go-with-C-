#include<iostream>

using namespace std;

int n , k , a[100] ;

void print(){
	for(int o = 1; o <= k ; o ++ ){
		cout << a[o] << " ";
	}
	cout << endl;
}

void back_track(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j ++ ){
			a[i] = j;
			if( i == k) print(); 
			else back_track(i + 1);
	}
}

int main(){
	cin >> n >> k;
	//a[0] = 0;
	back_track(1);
	return 0;
}
