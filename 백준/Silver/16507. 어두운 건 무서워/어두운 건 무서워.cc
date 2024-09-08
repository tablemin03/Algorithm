#include <iostream>
using namespace std;

int dp[1005][1005];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n, m, q;
	cin >> n >> m >> q;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			int x;
			cin >> x;
			dp[i][j] = dp[i][j - 1] + x;
		}
	}
	while (q--) {
		int x1, x2, y1, y2, sum = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = 0; i <= x2 - x1; i++) {
			sum += dp[x1 + i][y2] - dp[x1 + i][y1 - 1];
		}
		cout << sum / ((x2 - x1 + 1) * (y2 - y1 + 1)) << "\n";
	}
}