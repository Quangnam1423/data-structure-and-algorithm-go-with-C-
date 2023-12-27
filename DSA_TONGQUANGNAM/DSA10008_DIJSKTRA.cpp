#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<pair<int, int> > Ke[100001];

void nhap(){
	cin >> n >> m >> s;
	for(int i = 0; i < m; i++){
		int x, y, w; cin >> x >> y >> w;
		Ke[x].push_back({y, w});
		Ke[y].push_back({x, w});
	}
}

int pre[100001];

void dijkstra(int s){
	std::vector<long long> d(n + 1, 1e9);
	d[s] = 0;
	std::priority_queue<std::pair<int, int>, std::vector<pair<int, int>> , std::greater<pair<int,int>>> Q;
	Q.push({0 , s});
	while(!Q.empty()){
		std::pair<int, int> top = Q.top();   
		Q.pop();
		// process.......................
		int u = top.second;
		int kc = top.first;
		if(kc > d[u]) continue;
		for(auto it : Ke[u]){
			int v = it.first;
			int w = it.second;
			if(d[v] > d[u] + w){
				d[v] = d[u] + w;
				Q.push({d[v], v});
			}
		}
	}
	for(int i = 1; i <= n; i++ ){
		std::cout << d[i] << " ";
	}
}


int main(){
	nhap();
	dijkstra(s);
}
