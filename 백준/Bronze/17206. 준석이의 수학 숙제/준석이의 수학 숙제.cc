#include <iostream>
using namespace std;

int dp[80005];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	for (int i = 1; i < 80001; i++) {
		if (i % 3 == 0 || i % 7 == 0) dp[i] = dp[i - 1] + i;
		else dp[i] = dp[i - 1];
	}
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n; cin >> n;
		cout << dp[n] << "\n";
	}
}