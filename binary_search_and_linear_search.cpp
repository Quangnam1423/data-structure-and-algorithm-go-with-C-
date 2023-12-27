// thuat toan tim kim linear search vs thuat toan tim kiem nhi phan binary search
#include<iostream>
#include<algorithm>

//thuat toan iterator trong thu vien algorithm dua vao ham 3 gia tri la con tro cua vie tri dau vien,con tro cua vi tri cuoi cung vs phan tu can tim

using namespace std;

bool bs(int *a,int n,int x){
	int l(0) , r=n-1 ;
	while(l<=r){
		int m=(l+r) / 2;
		if(a[m]==x){
			return true;
		}
		else if(a[m] < x){
			l=m+1;
		}
		else r=m-1;
	}
	return false;
}

bool binary_search(int *a,int l,int r,int x){
	if(l>r){
		return false;
	}
	int m= (l+r)/2;
	if(a[m]==x) {
		return true;
	}
	else if(a[m]<x){
		return binary_search(a,m+1,r,x);
	}
	else if(a[m]>x){
		return binary_search(a,l,m-1,x);
	}
}

int main(){
	int n;
	cin >> n;
	int x; cin >> x;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cout<<binary_search(a,0,n-1,x);
}
