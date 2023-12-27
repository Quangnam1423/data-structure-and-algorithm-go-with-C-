#include<bits/stdc++.h>
using namespace std;
string a[100005];

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		if(a[0]=="*"||a[0]=="+"||a[0]=="-"||a[0]=="/"){
			stack<string> st;
			for(int i=n-1; i>0; i--){
				if(a[i]=="*"||a[i]=="-"||a[i]=="+"||a[i]=="/"){
					int x = stoi(st.top());
					st.pop();
					int y = stoi(st.top());
					st.pop();
					if(a[i]=="+"){
						st.push(to_string(x+y));
					}
					else if (a[i]=="-"){
						st.push(to_string(x-y));
					}
					else if(a[i]=="*"){
						st.push(to_string(x*y));
					}
					else if(a[i]=="/"){
						st.push(to_string(x/y));
					}
				}
				else st.push(a[i]);
			}
		cout << st.top() << endl;	
		}
		else {
			stack<string> st;
			for(int i=0; i<n; i++){
				if(a[i]=="*"||a[i]=="-"||a[i]=="+"||a[i]=="/"){
					int x = stoi(st.top());
					st.pop();
					int y = stoi(st.top());
					st.pop();
					if(a[i]=="+"){
						st.push(to_string(x+y));
					}
					else if (a[i]=="-"){
						st.push(to_string(x-y));
					}
					else if(a[i]=="*"){
						st.push(to_string(x*y));
					}
					else if(a[i]=="/"){
						st.push(to_string(x/y));
					}
				}
				else st.push(a[i]);
			}
		cout << st.top() << endl;	
		}
	}
}
