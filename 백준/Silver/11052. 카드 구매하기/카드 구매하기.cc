#include  <iostream>
#include <algorithm>
using namespace std;

int dp[1005];
int a[1005];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	for (int i = 1; i <= n; i++) cin >> dp[i];
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= i / 2; j++) {
			dp[i] = max(dp[j] + dp[i - j], dp[i]);
		}
	}
	cout << dp[n];
}