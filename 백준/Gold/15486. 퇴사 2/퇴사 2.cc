#include <iostream>
using namespace std;

int dp[1500055];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	int day, cost;
	for (int i = 1; i <= n; i++) {
		cin >> day >> cost;
		if (dp[i + day - 1] < cost + dp[i - 1]) dp[i + day - 1] = cost + dp[i - 1];
		if (dp[i - 1] > dp[i]) dp[i] = dp[i - 1];
	}
	cout << dp[n];
}