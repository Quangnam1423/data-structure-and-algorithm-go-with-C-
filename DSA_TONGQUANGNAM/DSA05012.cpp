#include<iostream>
const long long MOD = 1e9 + 7;
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n , r;
		cin >> n >> r;
        long long sum = 1;
        for(int i = 1; i <= r; i++){
        	long long x = (n - r + i);
            sum = ((((sum % MOD) * (x % MOD)) % MOD) / (i%MOD)) % MOD;
        }
        cout<<sum<<endl;
    }
    return 0;
}
