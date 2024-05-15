#include <iostream>
#include <algorithm>
using namespace std;

int dp[10005];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int coin[22];
		for (int i = 0; i < n; i++) cin >> coin[i];
		int m; cin >> m;
		fill(dp, dp + m + 1, 0);
		dp[0] = 1;
		for (int i = 0; i < n; i++) {
			for (int j = coin[i]; j <= m; j++) {
				dp[j] += dp[j - coin[i]];
			}
		}
		cout << dp[m] << "\n";
	}
}