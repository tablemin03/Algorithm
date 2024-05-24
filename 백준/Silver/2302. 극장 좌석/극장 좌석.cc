#include <iostream>
using namespace std;

int dp[45];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	dp[0] = 1;
	for (int i = 1; i <= 3; i++) dp[i] = i;
	for (int i = 4; i <= 40; i++) dp[i] = dp[i - 2] * 2 + dp[i - 3];
	int n, m;
	cin >> n;
	cin >> m;
	int ret = 1;
	int pre = 0;
	for (int i = 0; i < m; i++) {
		int x; cin >> x;
		ret *= dp[x - pre - 1];
		pre = x;
	}
	ret *= dp[n - pre];
	cout << ret;
}