#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[1000001];
int a[1001][1001];
set<pair<int,int>> edge;
int prefix[1000001];
void solve()
{
	cout<<"Input :"<<endl;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y; cin>>x>>y;
		a[x][y]=a[y][x]=1;
		adj[x].push_back(y);
		adj[y].push_back(x);
		edge.insert({min(x,y),max(x,y)});
	}
	cout<<"Output :"<<endl;
	cout<<"Ma tran ke:"<<endl;
	cout<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Danh sach canh:"<<endl;
	cout<<n<<" "<<m<<endl;
	for(auto x:edge)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
	cout<<"Danh sach ke:"<<endl;
	for(int i=1;i<=n;i++)
	{
		prefix[i]+=adj[i].size()+prefix[i-1];
	}
	cout<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<prefix[i]<<" ";
		for(auto x:adj[i]) cout<<x<<" ";
		cout<<endl;
	}
}
int main(){
	solve();
}

