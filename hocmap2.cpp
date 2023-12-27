//hocmap2.0
#include<iostream>
#include<map>
using namespace std;
int main(){
//	map<int,int> mp;
//	int n;
//	cin>>n;
//	int a[n];
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//		mp[a[i]]++;
//	}
//	for(auto it :mp){
//		cout<<it.first<<" "<<it.second<<endl;
//	}
//	for(int i=0;i<n;i++){
//		if(mp[a[i]]!=0) cout<<a[i]<<" "<<mp[a[i]]<<endl;
//		mp[a[i]]=0;
//	}

	map<int,int> mp;
	mp[3]++;
	mp[2]++;
	mp[1]++;
	for(auto it=mp.begin();it!=mp.end();it++){
		cout<<(*it).second<<" "<<(*it).first<<endl;
	}
	
}
