#include<iostream>

using namespace std;

void cong(int *a, int *b,int n){
	int s[n];
	int c(0);
	for(int j=0;j<n;j++){
		int d=(a[j]+b[j]+c)/2;
		s[j]=a[j]+b[j]+c-2*d;
		c=d;
	}
	s[n]=c;
	for(int i=n;i>=0;i--){
		cout<<s[i];
	}
	cout<<endl;
}

int main(){
	int n; cin >>n;
	int a[n],b[n];
	for(int i=n-1;i>=0;i--){
		cin>>a[i];
	}
	for(int i=n-1;i>=0;i--){
		cin>>b[i];
	}
	cong(a,b,n);
	
} 
