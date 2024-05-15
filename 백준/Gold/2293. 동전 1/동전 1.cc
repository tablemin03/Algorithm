#include <iostream>
#include <algorithm>
using namespace std;

int dp[10005];
int coin[105];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	int m; cin >> m;
	for (int i = 0; i < n; i++) cin >> coin[i];
	dp[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = coin[i]; j <= m; j++) {
			dp[j] += dp[j - coin[i]];
		}
	}
	cout << dp[m];
}