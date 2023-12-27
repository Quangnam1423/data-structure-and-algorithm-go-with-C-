#include<bits/stdc++.h>

using namespace std;

int main(){
	int n , m;
	cin >> n >> m;
	int a[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> a[i][j];
		}
	}
	int prefix[n+1][m+1] = {0};
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			prefix[i][j]=prefix[i][j-1]+prefix[i-1][j]-prefix[i-1][j-1]+a[i][j];
		}
	}
	int q;cin >> q;
	while(q--){
		int h1,h2,c1,c2;cin >>h1>>h2>>c1>>c2;
		cout<<(prefix[h2][c2]-prefix[h1-1][c2]-prefix[h2][c1-1]+prefix[h1-1][c1-1])<<endl;
	}
	return 0;
}
// prefix_sum cho mang 1 chieu.(dung nhieu hon)
//#include<iostream>
//#include<iomanip>
//
//using namespace std;
//
//int main(){
//	int n; cin >> n;
//	int a[n+1]={0};
//	for(int i=1;i<=n;i++){
//		int x; cin >>x;
//		a[i]=a[i-1]+x;
//	}
//	for(int i=0;i<=n;i++){
//		cout<<a[i]<<" ";
//	}
//	int q; cin >>q;
//	while(q--){
//		int x,y;
//		cin >> x>>y;
//		cout<<a[y]-a[x];
//	}
//} 
