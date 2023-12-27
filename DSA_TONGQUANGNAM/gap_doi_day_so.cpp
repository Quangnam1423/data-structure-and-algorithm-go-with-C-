#include <bits/stdc++.h>
using namespace std;
const long long mod = 123456789;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n,k;
		cin >> n >> k;
		long long a[n + 5];
		for (int i = 1; i <= n; i++) {
			a[i] = pow(2, i - 1);
		}
		for (int i = n; i >= 1; i--) {
			if (k == a[i]) {
				cout << i << endl;
				break;
			} else if (k > a[i]){
				k = k - a[i];
			}
		}
	}

}
