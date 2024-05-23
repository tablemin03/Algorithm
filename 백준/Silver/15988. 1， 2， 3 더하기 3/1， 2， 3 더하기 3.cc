#include <iostream>
using namespace std;

long long dp[1000003];
int main(){
	ios::sync_with_stdio(0); cin.tie(0);

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	int n; cin >> n;
	for (int i = 4; i <= 1000000; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		dp[i] %= 1000000009;
	}
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		cout << dp[x] << "\n";
	}
}