#include<iostream>
using namespace std;
void Creat(int *a,int n);
void bubblesort(int *a,int n);
void printfArray(int *a,int n);
void swap(int &a,int &b);

int main(){
	int n;
	cin >> n;
	int a[n];
	Creat(a,n);
	bubblesort(a,n);
	printfArray(a,n);
	return EXIT_SUCCESS;
}

void Creat(int *a,int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}

void swap(int &a,int &b){
	int tmp=a;
	a=b;
	b=tmp;
}

void printfArray(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void bubblesort(int *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]) swap(a[j],a[j+1]);
		}
	}
}
